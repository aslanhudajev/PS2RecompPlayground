#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_01Move
// Address: 0x1d1230 - 0x1d251c
void Enex2_01Move_0x1d1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_01Move_0x1d1230");
#endif

    ctx->pc = 0x1d1230u;

label_1d1230:
    // 0x1d1230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d1234:
    // 0x1d1234: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d1238:
    // 0x1d1238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d123c:
    // 0x1d123c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d123cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d1240:
    // 0x1d1240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1244:
    // 0x1d1244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1248:
    // 0x1d1248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d124c:
    // 0x1d124c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1250:
    // 0x1d1250: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1d1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1254:
    // 0x1d1254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1258:
    // 0x1d1258: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1d1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d125c:
    // 0x1d125c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d125cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d1260:
    // 0x1d1260: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1d1260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1d1264:
    // 0x1d1264: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d1264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1268:
    // 0x1d1268: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1d1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d126c:
    // 0x1d126c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1270:
    // 0x1d1270: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d1270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d1274:
    // 0x1d1274: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1d1274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d1278:
    // 0x1d1278: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d1278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d127c:
    // 0x1d127c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1d127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1280:
    // 0x1d1280: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d1280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1284:
    // 0x1d1284: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d1284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d1288:
    // 0x1d1288: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1d1288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1d128c:
    // 0x1d128c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1290:
    // 0x1d1290: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1d1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1294:
    // 0x1d1294: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1d1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1298:
    // 0x1d1298: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d1298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d129c:
    // 0x1d129c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1d129cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d12a0:
    // 0x1d12a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d12a4:
    // 0x1d12a4: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1d12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d12a8:
    // 0x1d12a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12ac:
    // 0x1d12ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d12acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d12b0:
    // 0x1d12b0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1d12b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1d12b4:
    // 0x1d12b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d12b8:
    // 0x1d12b8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d12b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12bc:
    // 0x1d12bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d12bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d12c0:
    // 0x1d12c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d12c4:
    if (ctx->pc == 0x1D12C4u) {
        ctx->pc = 0x1D12C4u;
            // 0x1d12c4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1D12C8u;
        goto label_1d12c8;
    }
    ctx->pc = 0x1D12C0u;
    {
        const bool branch_taken_0x1d12c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D12C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12C0u;
            // 0x1d12c4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12c0) {
            ctx->pc = 0x1D12E0u;
            goto label_1d12e0;
        }
    }
    ctx->pc = 0x1D12C8u;
label_1d12c8:
    // 0x1d12c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d12cc:
    // 0x1d12cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d12ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d12d0:
    // 0x1d12d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d12d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d12d4:
    // 0x1d12d4: 0x0  nop
    ctx->pc = 0x1d12d4u;
    // NOP
label_1d12d8:
    // 0x1d12d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d12d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d12dc:
    // 0x1d12dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d12dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d12e0:
    // 0x1d12e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d12e4:
    // 0x1d12e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d12e8:
    // 0x1d12e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d12e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d12ec:
    // 0x1d12ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d12ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d12f0:
    // 0x1d12f0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1d12f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12f4:
    // 0x1d12f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d12f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d12f8:
    // 0x1d12f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d12fc:
    if (ctx->pc == 0x1D12FCu) {
        ctx->pc = 0x1D12FCu;
            // 0x1d12fc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1D1300u;
        goto label_1d1300;
    }
    ctx->pc = 0x1D12F8u;
    {
        const bool branch_taken_0x1d12f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D12FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12F8u;
            // 0x1d12fc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12f8) {
            ctx->pc = 0x1D1318u;
            goto label_1d1318;
        }
    }
    ctx->pc = 0x1D1300u;
label_1d1300:
    // 0x1d1300: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d1304:
    // 0x1d1304: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d1304u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d1308:
    // 0x1d1308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d130c:
    // 0x1d130c: 0x0  nop
    ctx->pc = 0x1d130cu;
    // NOP
label_1d1310:
    // 0x1d1310: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d1310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1314:
    // 0x1d1314: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d1314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d1318:
    // 0x1d1318: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d131c:
    // 0x1d131c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d1320:
    // 0x1d1320: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d1320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d1324:
    // 0x1d1324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1328:
    // 0x1d1328: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d132c:
    // 0x1d132c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d132cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1330:
    // 0x1d1330: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d1334:
    if (ctx->pc == 0x1D1334u) {
        ctx->pc = 0x1D1334u;
            // 0x1d1334: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1D1338u;
        goto label_1d1338;
    }
    ctx->pc = 0x1D1330u;
    {
        const bool branch_taken_0x1d1330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1330u;
            // 0x1d1334: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1330) {
            ctx->pc = 0x1D1350u;
            goto label_1d1350;
        }
    }
    ctx->pc = 0x1D1338u;
label_1d1338:
    // 0x1d1338: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d1338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d133c:
    // 0x1d133c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d133cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d1340:
    // 0x1d1340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1344:
    // 0x1d1344: 0x0  nop
    ctx->pc = 0x1d1344u;
    // NOP
label_1d1348:
    // 0x1d1348: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d1348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d134c:
    // 0x1d134c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d1350:
    // 0x1d1350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1354:
    // 0x1d1354: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d1358:
    // 0x1d1358: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d1358u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d135c:
    // 0x1d135c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d135cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1360:
    // 0x1d1360: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d1360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1364:
    // 0x1d1364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1368:
    // 0x1d1368: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d136c:
    if (ctx->pc == 0x1D136Cu) {
        ctx->pc = 0x1D136Cu;
            // 0x1d136c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1D1370u;
        goto label_1d1370;
    }
    ctx->pc = 0x1D1368u;
    {
        const bool branch_taken_0x1d1368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1368u;
            // 0x1d136c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1368) {
            ctx->pc = 0x1D1388u;
            goto label_1d1388;
        }
    }
    ctx->pc = 0x1D1370u;
label_1d1370:
    // 0x1d1370: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d1374:
    // 0x1d1374: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d1374u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d1378:
    // 0x1d1378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d137c:
    // 0x1d137c: 0x0  nop
    ctx->pc = 0x1d137cu;
    // NOP
label_1d1380:
    // 0x1d1380: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d1380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1384:
    // 0x1d1384: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d1384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d1388:
    // 0x1d1388: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d138c:
    // 0x1d138c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d1390:
    // 0x1d1390: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d1390u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d1394:
    // 0x1d1394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1398:
    // 0x1d1398: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1d1398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d139c:
    // 0x1d139c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d139cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d13a0:
    // 0x1d13a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d13a4:
    if (ctx->pc == 0x1D13A4u) {
        ctx->pc = 0x1D13A4u;
            // 0x1d13a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1D13A8u;
        goto label_1d13a8;
    }
    ctx->pc = 0x1D13A0u;
    {
        const bool branch_taken_0x1d13a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D13A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13A0u;
            // 0x1d13a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13a0) {
            ctx->pc = 0x1D13C0u;
            goto label_1d13c0;
        }
    }
    ctx->pc = 0x1D13A8u;
label_1d13a8:
    // 0x1d13a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d13ac:
    // 0x1d13ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d13acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d13b0:
    // 0x1d13b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d13b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d13b4:
    // 0x1d13b4: 0x0  nop
    ctx->pc = 0x1d13b4u;
    // NOP
label_1d13b8:
    // 0x1d13b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d13b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d13bc:
    // 0x1d13bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d13bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d13c0:
    // 0x1d13c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d13c4:
    // 0x1d13c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d13c8:
    // 0x1d13c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d13c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d13cc:
    // 0x1d13cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d13ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d13d0:
    // 0x1d13d0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1d13d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d13d4:
    // 0x1d13d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d13d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d13d8:
    // 0x1d13d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d13dc:
    if (ctx->pc == 0x1D13DCu) {
        ctx->pc = 0x1D13DCu;
            // 0x1d13dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1D13E0u;
        goto label_1d13e0;
    }
    ctx->pc = 0x1D13D8u;
    {
        const bool branch_taken_0x1d13d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D13DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13D8u;
            // 0x1d13dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d8) {
            ctx->pc = 0x1D13F8u;
            goto label_1d13f8;
        }
    }
    ctx->pc = 0x1D13E0u;
label_1d13e0:
    // 0x1d13e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d13e4:
    // 0x1d13e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d13e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d13e8:
    // 0x1d13e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d13e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d13ec:
    // 0x1d13ec: 0x0  nop
    ctx->pc = 0x1d13ecu;
    // NOP
label_1d13f0:
    // 0x1d13f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d13f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d13f4:
    // 0x1d13f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d13f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d13f8:
    // 0x1d13f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d13fc:
    // 0x1d13fc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1d1400:
    // 0x1d1400: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d1400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1404:
    // 0x1d1404: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d1408:
    // 0x1d1408: 0xc074948  jal         func_1D2520
label_1d140c:
    if (ctx->pc == 0x1D140Cu) {
        ctx->pc = 0x1D140Cu;
            // 0x1d140c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1D1410u;
        goto label_1d1410;
    }
    ctx->pc = 0x1D1408u;
    SET_GPR_U32(ctx, 31, 0x1D1410u);
    ctx->pc = 0x1D140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1408u;
            // 0x1d140c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2520u;
    if (runtime->hasFunction(0x1D2520u)) {
        auto targetFn = runtime->lookupFunction(0x1D2520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1410u; }
        if (ctx->pc != 0x1D1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1410u; }
        if (ctx->pc != 0x1D1410u) { return; }
    }
    ctx->pc = 0x1D1410u;
label_1d1410:
    // 0x1d1410: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1414:
    // 0x1d1414: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d1414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1d1418:
    // 0x1d1418: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d141c:
    // 0x1d141c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d141cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1d1420:
    // 0x1d1420: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d1420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d1424:
    // 0x1d1424: 0x18400288  blez        $v0, . + 4 + (0x288 << 2)
label_1d1428:
    if (ctx->pc == 0x1D1428u) {
        ctx->pc = 0x1D142Cu;
        goto label_1d142c;
    }
    ctx->pc = 0x1D1424u;
    {
        const bool branch_taken_0x1d1424 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d1424) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D142Cu;
label_1d142c:
    // 0x1d142c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d142cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d1430:
    // 0x1d1430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1434:
    // 0x1d1434: 0x10c3017a  beq         $a2, $v1, . + 4 + (0x17A << 2)
label_1d1438:
    if (ctx->pc == 0x1D1438u) {
        ctx->pc = 0x1D1438u;
            // 0x1d1438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D143Cu;
        goto label_1d143c;
    }
    ctx->pc = 0x1D1434u;
    {
        const bool branch_taken_0x1d1434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1434u;
            // 0x1d1438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1434) {
            ctx->pc = 0x1D1A20u;
            goto label_1d1a20;
        }
    }
    ctx->pc = 0x1D143Cu;
label_1d143c:
    // 0x1d143c: 0x10c2006e  beq         $a2, $v0, . + 4 + (0x6E << 2)
label_1d1440:
    if (ctx->pc == 0x1D1440u) {
        ctx->pc = 0x1D1444u;
        goto label_1d1444;
    }
    ctx->pc = 0x1D143Cu;
    {
        const bool branch_taken_0x1d143c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d143c) {
            ctx->pc = 0x1D15F8u;
            goto label_1d15f8;
        }
    }
    ctx->pc = 0x1D1444u;
label_1d1444:
    // 0x1d1444: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1d1448:
    if (ctx->pc == 0x1D1448u) {
        ctx->pc = 0x1D144Cu;
        goto label_1d144c;
    }
    ctx->pc = 0x1D1444u;
    {
        const bool branch_taken_0x1d1444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1444) {
            ctx->pc = 0x1D1458u;
            goto label_1d1458;
        }
    }
    ctx->pc = 0x1D144Cu;
label_1d144c:
    // 0x1d144c: 0x1000027e  b           . + 4 + (0x27E << 2)
label_1d1450:
    if (ctx->pc == 0x1D1450u) {
        ctx->pc = 0x1D1454u;
        goto label_1d1454;
    }
    ctx->pc = 0x1D144Cu;
    {
        const bool branch_taken_0x1d144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d144c) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1454u;
label_1d1454:
    // 0x1d1454: 0x0  nop
    ctx->pc = 0x1d1454u;
    // NOP
label_1d1458:
    // 0x1d1458: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1d1458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d145c:
    // 0x1d145c: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
label_1d1460:
    if (ctx->pc == 0x1D1460u) {
        ctx->pc = 0x1D1464u;
        goto label_1d1464;
    }
    ctx->pc = 0x1D145Cu;
    {
        const bool branch_taken_0x1d145c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d145c) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D1464u;
label_1d1464:
    // 0x1d1464: 0xc040d72  jal         func_1035C8
label_1d1468:
    if (ctx->pc == 0x1D1468u) {
        ctx->pc = 0x1D1468u;
            // 0x1d1468: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D146Cu;
        goto label_1d146c;
    }
    ctx->pc = 0x1D1464u;
    SET_GPR_U32(ctx, 31, 0x1D146Cu);
    ctx->pc = 0x1D1468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1464u;
            // 0x1d1468: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D146Cu; }
        if (ctx->pc != 0x1D146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D146Cu; }
        if (ctx->pc != 0x1D146Cu) { return; }
    }
    ctx->pc = 0x1D146Cu;
label_1d146c:
    // 0x1d146c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1470:
    // 0x1d1470: 0xc040078  jal         func_1001E0
label_1d1474:
    if (ctx->pc == 0x1D1474u) {
        ctx->pc = 0x1D1474u;
            // 0x1d1474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1478u;
        goto label_1d1478;
    }
    ctx->pc = 0x1D1470u;
    SET_GPR_U32(ctx, 31, 0x1D1478u);
    ctx->pc = 0x1D1474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1470u;
            // 0x1d1474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1478u; }
        if (ctx->pc != 0x1D1478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1478u; }
        if (ctx->pc != 0x1D1478u) { return; }
    }
    ctx->pc = 0x1D1478u;
label_1d1478:
    // 0x1d1478: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d147c:
    if (ctx->pc == 0x1D147Cu) {
        ctx->pc = 0x1D1480u;
        goto label_1d1480;
    }
    ctx->pc = 0x1D1478u;
    {
        const bool branch_taken_0x1d1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1478) {
            ctx->pc = 0x1D14A0u;
            goto label_1d14a0;
        }
    }
    ctx->pc = 0x1D1480u;
label_1d1480:
    // 0x1d1480: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d1480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1484:
    // 0x1d1484: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1d1488:
    // 0x1d1488: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1d1488u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1d148c:
    // 0x1d148c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1490:
    // 0x1d1490: 0x0  nop
    ctx->pc = 0x1d1490u;
    // NOP
label_1d1494:
    // 0x1d1494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d1494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1498:
    // 0x1d1498: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d149c:
    if (ctx->pc == 0x1D149Cu) {
        ctx->pc = 0x1D149Cu;
            // 0x1d149c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D14A0u;
        goto label_1d14a0;
    }
    ctx->pc = 0x1D1498u;
    {
        const bool branch_taken_0x1d1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1498u;
            // 0x1d149c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1498) {
            ctx->pc = 0x1D14B0u;
            goto label_1d14b0;
        }
    }
    ctx->pc = 0x1D14A0u;
label_1d14a0:
    // 0x1d14a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d14a4:
    // 0x1d14a4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d14a8:
    // 0x1d14a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d14ac:
    // 0x1d14ac: 0x0  nop
    ctx->pc = 0x1d14acu;
    // NOP
label_1d14b0:
    // 0x1d14b0: 0xc065d00  jal         func_197400
label_1d14b4:
    if (ctx->pc == 0x1D14B4u) {
        ctx->pc = 0x1D14B8u;
        goto label_1d14b8;
    }
    ctx->pc = 0x1D14B0u;
    SET_GPR_U32(ctx, 31, 0x1D14B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14B8u; }
        if (ctx->pc != 0x1D14B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14B8u; }
        if (ctx->pc != 0x1D14B8u) { return; }
    }
    ctx->pc = 0x1D14B8u;
label_1d14b8:
    // 0x1d14b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d14bc:
    // 0x1d14bc: 0x14430262  bne         $v0, $v1, . + 4 + (0x262 << 2)
label_1d14c0:
    if (ctx->pc == 0x1D14C0u) {
        ctx->pc = 0x1D14C4u;
        goto label_1d14c4;
    }
    ctx->pc = 0x1D14BCu;
    {
        const bool branch_taken_0x1d14bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d14bc) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D14C4u;
label_1d14c4:
    // 0x1d14c4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d14c8:
    // 0x1d14c8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d14cc:
    // 0x1d14cc: 0x1462025e  bne         $v1, $v0, . + 4 + (0x25E << 2)
label_1d14d0:
    if (ctx->pc == 0x1D14D0u) {
        ctx->pc = 0x1D14D4u;
        goto label_1d14d4;
    }
    ctx->pc = 0x1D14CCu;
    {
        const bool branch_taken_0x1d14cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d14cc) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D14D4u;
label_1d14d4:
    // 0x1d14d4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d14d8:
    // 0x1d14d8: 0xc06560c  jal         func_195830
label_1d14dc:
    if (ctx->pc == 0x1D14DCu) {
        ctx->pc = 0x1D14DCu;
            // 0x1d14dc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D14E0u;
        goto label_1d14e0;
    }
    ctx->pc = 0x1D14D8u;
    SET_GPR_U32(ctx, 31, 0x1D14E0u);
    ctx->pc = 0x1D14DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14D8u;
            // 0x1d14dc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14E0u; }
        if (ctx->pc != 0x1D14E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D14E0u; }
        if (ctx->pc != 0x1D14E0u) { return; }
    }
    ctx->pc = 0x1D14E0u;
label_1d14e0:
    // 0x1d14e0: 0x10000259  b           . + 4 + (0x259 << 2)
label_1d14e4:
    if (ctx->pc == 0x1D14E4u) {
        ctx->pc = 0x1D14E8u;
        goto label_1d14e8;
    }
    ctx->pc = 0x1D14E0u;
    {
        const bool branch_taken_0x1d14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14e0) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D14E8u;
label_1d14e8:
    // 0x1d14e8: 0x14c2001f  bne         $a2, $v0, . + 4 + (0x1F << 2)
label_1d14ec:
    if (ctx->pc == 0x1D14ECu) {
        ctx->pc = 0x1D14F0u;
        goto label_1d14f0;
    }
    ctx->pc = 0x1D14E8u;
    {
        const bool branch_taken_0x1d14e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d14e8) {
            ctx->pc = 0x1D1568u;
            goto label_1d1568;
        }
    }
    ctx->pc = 0x1D14F0u;
label_1d14f0:
    // 0x1d14f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d14f4:
    // 0x1d14f4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1d14f8:
    if (ctx->pc == 0x1D14F8u) {
        ctx->pc = 0x1D14FCu;
        goto label_1d14fc;
    }
    ctx->pc = 0x1D14F4u;
    {
        const bool branch_taken_0x1d14f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d14f4) {
            ctx->pc = 0x1D1510u;
            goto label_1d1510;
        }
    }
    ctx->pc = 0x1D14FCu;
label_1d14fc:
    // 0x1d14fc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d1500:
    // 0x1d1500: 0xc065390  jal         func_194E40
label_1d1504:
    if (ctx->pc == 0x1D1504u) {
        ctx->pc = 0x1D1504u;
            // 0x1d1504: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1D1508u;
        goto label_1d1508;
    }
    ctx->pc = 0x1D1500u;
    SET_GPR_U32(ctx, 31, 0x1D1508u);
    ctx->pc = 0x1D1504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1500u;
            // 0x1d1504: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194E40u;
    if (runtime->hasFunction(0x194E40u)) {
        auto targetFn = runtime->lookupFunction(0x194E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1508u; }
        if (ctx->pc != 0x1D1508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Ryushi_Add_0x194e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1508u; }
        if (ctx->pc != 0x1D1508u) { return; }
    }
    ctx->pc = 0x1D1508u;
label_1d1508:
    // 0x1d1508: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d150c:
    if (ctx->pc == 0x1D150Cu) {
        ctx->pc = 0x1D1510u;
        goto label_1d1510;
    }
    ctx->pc = 0x1D1508u;
    {
        const bool branch_taken_0x1d1508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1508) {
            ctx->pc = 0x1D1548u;
            goto label_1d1548;
        }
    }
    ctx->pc = 0x1D1510u;
label_1d1510:
    // 0x1d1510: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1d1510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1d1514:
    // 0x1d1514: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1d1518:
    if (ctx->pc == 0x1D1518u) {
        ctx->pc = 0x1D151Cu;
        goto label_1d151c;
    }
    ctx->pc = 0x1D1514u;
    {
        const bool branch_taken_0x1d1514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1514) {
            ctx->pc = 0x1D1530u;
            goto label_1d1530;
        }
    }
    ctx->pc = 0x1D151Cu;
label_1d151c:
    // 0x1d151c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d151cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d1520:
    // 0x1d1520: 0xc0653b8  jal         func_194EE0
label_1d1524:
    if (ctx->pc == 0x1D1524u) {
        ctx->pc = 0x1D1524u;
            // 0x1d1524: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1D1528u;
        goto label_1d1528;
    }
    ctx->pc = 0x1D1520u;
    SET_GPR_U32(ctx, 31, 0x1D1528u);
    ctx->pc = 0x1D1524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1520u;
            // 0x1d1524: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194EE0u;
    if (runtime->hasFunction(0x194EE0u)) {
        auto targetFn = runtime->lookupFunction(0x194EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1528u; }
        if (ctx->pc != 0x1D1528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Ryushi_Chibi_0x194ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1528u; }
        if (ctx->pc != 0x1D1528u) { return; }
    }
    ctx->pc = 0x1D1528u;
label_1d1528:
    // 0x1d1528: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d152c:
    if (ctx->pc == 0x1D152Cu) {
        ctx->pc = 0x1D1530u;
        goto label_1d1530;
    }
    ctx->pc = 0x1D1528u;
    {
        const bool branch_taken_0x1d1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1528) {
            ctx->pc = 0x1D1548u;
            goto label_1d1548;
        }
    }
    ctx->pc = 0x1D1530u;
label_1d1530:
    // 0x1d1530: 0xc0656a4  jal         func_195A90
label_1d1534:
    if (ctx->pc == 0x1D1534u) {
        ctx->pc = 0x1D1538u;
        goto label_1d1538;
    }
    ctx->pc = 0x1D1530u;
    SET_GPR_U32(ctx, 31, 0x1D1538u);
    ctx->pc = 0x195A90u;
    if (runtime->hasFunction(0x195A90u)) {
        auto targetFn = runtime->lookupFunction(0x195A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1538u; }
        if (ctx->pc != 0x1D1538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastFire_0x195a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1538u; }
        if (ctx->pc != 0x1D1538u) { return; }
    }
    ctx->pc = 0x1D1538u;
label_1d1538:
    // 0x1d1538: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d153c:
    // 0x1d153c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d153cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d1540:
    // 0x1d1540: 0xc065200  jal         func_194800
label_1d1544:
    if (ctx->pc == 0x1D1544u) {
        ctx->pc = 0x1D1544u;
            // 0x1d1544: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1D1548u;
        goto label_1d1548;
    }
    ctx->pc = 0x1D1540u;
    SET_GPR_U32(ctx, 31, 0x1D1548u);
    ctx->pc = 0x1D1544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1540u;
            // 0x1d1544: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194800u;
    if (runtime->hasFunction(0x194800u)) {
        auto targetFn = runtime->lookupFunction(0x194800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1548u; }
        if (ctx->pc != 0x1D1548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_0x194800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1548u; }
        if (ctx->pc != 0x1D1548u) { return; }
    }
    ctx->pc = 0x1D1548u;
label_1d1548:
    // 0x1d1548: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d154c:
    // 0x1d154c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1d154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1d1550:
    // 0x1d1550: 0x1462023d  bne         $v1, $v0, . + 4 + (0x23D << 2)
label_1d1554:
    if (ctx->pc == 0x1D1554u) {
        ctx->pc = 0x1D1554u;
            // 0x1d1554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D1558u;
        goto label_1d1558;
    }
    ctx->pc = 0x1D1550u;
    {
        const bool branch_taken_0x1d1550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1550u;
            // 0x1d1554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1550) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1558u;
label_1d1558:
    // 0x1d1558: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d1558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d155c:
    // 0x1d155c: 0x1000023a  b           . + 4 + (0x23A << 2)
label_1d1560:
    if (ctx->pc == 0x1D1560u) {
        ctx->pc = 0x1D1560u;
            // 0x1d1560: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1564u;
        goto label_1d1564;
    }
    ctx->pc = 0x1D155Cu;
    {
        const bool branch_taken_0x1d155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D155Cu;
            // 0x1d1560: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d155c) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1564u;
label_1d1564:
    // 0x1d1564: 0x0  nop
    ctx->pc = 0x1d1564u;
    // NOP
label_1d1568:
    // 0x1d1568: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
label_1d156c:
    if (ctx->pc == 0x1D156Cu) {
        ctx->pc = 0x1D1570u;
        goto label_1d1570;
    }
    ctx->pc = 0x1D1568u;
    {
        const bool branch_taken_0x1d1568 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1568) {
            ctx->pc = 0x1D1598u;
            goto label_1d1598;
        }
    }
    ctx->pc = 0x1D1570u;
label_1d1570:
    // 0x1d1570: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1574:
    // 0x1d1574: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d1574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1d1578:
    // 0x1d1578: 0x14620233  bne         $v1, $v0, . + 4 + (0x233 << 2)
label_1d157c:
    if (ctx->pc == 0x1D157Cu) {
        ctx->pc = 0x1D1580u;
        goto label_1d1580;
    }
    ctx->pc = 0x1D1578u;
    {
        const bool branch_taken_0x1d1578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1578) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1580u;
label_1d1580:
    // 0x1d1580: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1584:
    // 0x1d1584: 0xc065590  jal         func_195640
label_1d1588:
    if (ctx->pc == 0x1D1588u) {
        ctx->pc = 0x1D1588u;
            // 0x1d1588: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D158Cu;
        goto label_1d158c;
    }
    ctx->pc = 0x1D1584u;
    SET_GPR_U32(ctx, 31, 0x1D158Cu);
    ctx->pc = 0x1D1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1584u;
            // 0x1d1588: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D158Cu; }
        if (ctx->pc != 0x1D158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D158Cu; }
        if (ctx->pc != 0x1D158Cu) { return; }
    }
    ctx->pc = 0x1D158Cu;
label_1d158c:
    // 0x1d158c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1590:
    // 0x1d1590: 0x1000022d  b           . + 4 + (0x22D << 2)
label_1d1594:
    if (ctx->pc == 0x1D1594u) {
        ctx->pc = 0x1D1594u;
            // 0x1d1594: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1D1598u;
        goto label_1d1598;
    }
    ctx->pc = 0x1D1590u;
    {
        const bool branch_taken_0x1d1590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1590u;
            // 0x1d1594: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1590) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1598u;
label_1d1598:
    // 0x1d1598: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d159c:
    // 0x1d159c: 0x14c2022a  bne         $a2, $v0, . + 4 + (0x22A << 2)
label_1d15a0:
    if (ctx->pc == 0x1D15A0u) {
        ctx->pc = 0x1D15A4u;
        goto label_1d15a4;
    }
    ctx->pc = 0x1D159Cu;
    {
        const bool branch_taken_0x1d159c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d159c) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D15A4u;
label_1d15a4:
    // 0x1d15a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d15a8:
    // 0x1d15a8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d15ac:
    if (ctx->pc == 0x1D15ACu) {
        ctx->pc = 0x1D15ACu;
            // 0x1d15ac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1D15B0u;
        goto label_1d15b0;
    }
    ctx->pc = 0x1D15A8u;
    {
        const bool branch_taken_0x1d15a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D15ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15A8u;
            // 0x1d15ac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15a8) {
            ctx->pc = 0x1D15BCu;
            goto label_1d15bc;
        }
    }
    ctx->pc = 0x1D15B0u;
label_1d15b0:
    // 0x1d15b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d15b4:
    if (ctx->pc == 0x1D15B4u) {
        ctx->pc = 0x1D15B8u;
        goto label_1d15b8;
    }
    ctx->pc = 0x1D15B0u;
    {
        const bool branch_taken_0x1d15b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d15b0) {
            ctx->pc = 0x1D15BCu;
            goto label_1d15bc;
        }
    }
    ctx->pc = 0x1D15B8u;
label_1d15b8:
    // 0x1d15b8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1d15bc:
    // 0x1d15bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d15c0:
    if (ctx->pc == 0x1D15C0u) {
        ctx->pc = 0x1D15C4u;
        goto label_1d15c4;
    }
    ctx->pc = 0x1D15BCu;
    {
        const bool branch_taken_0x1d15bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d15bc) {
            ctx->pc = 0x1D15D8u;
            goto label_1d15d8;
        }
    }
    ctx->pc = 0x1D15C4u;
label_1d15c4:
    // 0x1d15c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d15c8:
    // 0x1d15c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d15cc:
    // 0x1d15cc: 0xc0655a0  jal         func_195680
label_1d15d0:
    if (ctx->pc == 0x1D15D0u) {
        ctx->pc = 0x1D15D0u;
            // 0x1d15d0: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1D15D4u;
        goto label_1d15d4;
    }
    ctx->pc = 0x1D15CCu;
    SET_GPR_U32(ctx, 31, 0x1D15D4u);
    ctx->pc = 0x1D15D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15CCu;
            // 0x1d15d0: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15D4u; }
        if (ctx->pc != 0x1D15D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D15D4u; }
        if (ctx->pc != 0x1D15D4u) { return; }
    }
    ctx->pc = 0x1D15D4u;
label_1d15d4:
    // 0x1d15d4: 0x0  nop
    ctx->pc = 0x1d15d4u;
    // NOP
label_1d15d8:
    // 0x1d15d8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1d15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1d15dc:
    // 0x1d15dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d15e0:
    // 0x1d15e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d15e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d15e4:
    // 0x1d15e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d15e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d15e8:
    // 0x1d15e8: 0x0  nop
    ctx->pc = 0x1d15e8u;
    // NOP
label_1d15ec:
    // 0x1d15ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d15ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d15f0:
    // 0x1d15f0: 0x10000215  b           . + 4 + (0x215 << 2)
label_1d15f4:
    if (ctx->pc == 0x1D15F4u) {
        ctx->pc = 0x1D15F4u;
            // 0x1d15f4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D15F8u;
        goto label_1d15f8;
    }
    ctx->pc = 0x1D15F0u;
    {
        const bool branch_taken_0x1d15f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D15F0u;
            // 0x1d15f4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15f0) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D15F8u;
label_1d15f8:
    // 0x1d15f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d15fc:
    // 0x1d15fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d1600:
    // 0x1d1600: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d1600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1604:
    // 0x1d1604: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d1604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d1608:
    // 0x1d1608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d160c:
    // 0x1d160c: 0x0  nop
    ctx->pc = 0x1d160cu;
    // NOP
label_1d1610:
    // 0x1d1610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1614:
    // 0x1d1614: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d1614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d1618:
    // 0x1d1618: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d161c:
    // 0x1d161c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d161cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d1620:
    // 0x1d1620: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d1620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d1624:
    // 0x1d1624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1628:
    // 0x1d1628: 0x0  nop
    ctx->pc = 0x1d1628u;
    // NOP
label_1d162c:
    // 0x1d162c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d162cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1630:
    // 0x1d1630: 0xc04b6ee  jal         func_12DBB8
label_1d1634:
    if (ctx->pc == 0x1D1634u) {
        ctx->pc = 0x1D1634u;
            // 0x1d1634: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D1638u;
        goto label_1d1638;
    }
    ctx->pc = 0x1D1630u;
    SET_GPR_U32(ctx, 31, 0x1D1638u);
    ctx->pc = 0x1D1634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1630u;
            // 0x1d1634: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1638u; }
        if (ctx->pc != 0x1D1638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1638u; }
        if (ctx->pc != 0x1D1638u) { return; }
    }
    ctx->pc = 0x1D1638u;
label_1d1638:
    // 0x1d1638: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d163c:
    // 0x1d163c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_1d1640:
    if (ctx->pc == 0x1D1640u) {
        ctx->pc = 0x1D1644u;
        goto label_1d1644;
    }
    ctx->pc = 0x1D163Cu;
    {
        const bool branch_taken_0x1d163c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d163c) {
            ctx->pc = 0x1D1710u;
            goto label_1d1710;
        }
    }
    ctx->pc = 0x1D1644u;
label_1d1644:
    // 0x1d1644: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1648:
    // 0x1d1648: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1d1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1d164c:
    // 0x1d164c: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1d164cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1d1650:
    // 0x1d1650: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d1650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d1654:
    // 0x1d1654: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1d1658:
    // 0x1d1658: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1d1658u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1d165c:
    // 0x1d165c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d165cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1660:
    // 0x1d1660: 0x0  nop
    ctx->pc = 0x1d1660u;
    // NOP
label_1d1664:
    // 0x1d1664: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d1664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d1668:
    // 0x1d1668: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d166c:
    // 0x1d166c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1670:
    // 0x1d1670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1674:
    // 0x1d1674: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d1678:
    // 0x1d1678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d167c:
    // 0x1d167c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1680:
    // 0x1d1680: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d1680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1684:
    // 0x1d1684: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d1684u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d1688:
    // 0x1d1688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d168c:
    // 0x1d168c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d1690:
    if (ctx->pc == 0x1D1690u) {
        ctx->pc = 0x1D1690u;
            // 0x1d1690: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1D1694u;
        goto label_1d1694;
    }
    ctx->pc = 0x1D168Cu;
    {
        const bool branch_taken_0x1d168c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D168Cu;
            // 0x1d1690: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d168c) {
            ctx->pc = 0x1D16A0u;
            goto label_1d16a0;
        }
    }
    ctx->pc = 0x1D1694u;
label_1d1694:
    // 0x1d1694: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d1694u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d1698:
    // 0x1d1698: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d1698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d169c:
    // 0x1d169c: 0x0  nop
    ctx->pc = 0x1d169cu;
    // NOP
label_1d16a0:
    // 0x1d16a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d16a4:
    // 0x1d16a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d16a8:
    // 0x1d16a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d16ac:
    // 0x1d16ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d16acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d16b0:
    // 0x1d16b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d16b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d16b4:
    // 0x1d16b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d16b8:
    if (ctx->pc == 0x1D16B8u) {
        ctx->pc = 0x1D16B8u;
            // 0x1d16b8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1D16BCu;
        goto label_1d16bc;
    }
    ctx->pc = 0x1D16B4u;
    {
        const bool branch_taken_0x1d16b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D16B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16B4u;
            // 0x1d16b8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16b4) {
            ctx->pc = 0x1D16C8u;
            goto label_1d16c8;
        }
    }
    ctx->pc = 0x1D16BCu;
label_1d16bc:
    // 0x1d16bc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d16bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d16c0:
    // 0x1d16c0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d16c4:
    // 0x1d16c4: 0x0  nop
    ctx->pc = 0x1d16c4u;
    // NOP
label_1d16c8:
    // 0x1d16c8: 0xc040d72  jal         func_1035C8
label_1d16cc:
    if (ctx->pc == 0x1D16CCu) {
        ctx->pc = 0x1D16CCu;
            // 0x1d16cc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D16D0u;
        goto label_1d16d0;
    }
    ctx->pc = 0x1D16C8u;
    SET_GPR_U32(ctx, 31, 0x1D16D0u);
    ctx->pc = 0x1D16CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16C8u;
            // 0x1d16cc: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16D0u; }
        if (ctx->pc != 0x1D16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16D0u; }
        if (ctx->pc != 0x1D16D0u) { return; }
    }
    ctx->pc = 0x1D16D0u;
label_1d16d0:
    // 0x1d16d0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
label_1d16d4:
    // 0x1d16d4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1d16d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1d16d8:
    // 0x1d16d8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1d16d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1d16dc:
    // 0x1d16dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d16dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d16e0:
    // 0x1d16e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d16e4:
    // 0x1d16e4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1d16e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1d16e8:
    // 0x1d16e8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1d16e8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d16ec:
    // 0x1d16ec: 0xc040098  jal         func_100260
label_1d16f0:
    if (ctx->pc == 0x1D16F0u) {
        ctx->pc = 0x1D16F0u;
            // 0x1d16f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D16F4u;
        goto label_1d16f4;
    }
    ctx->pc = 0x1D16ECu;
    SET_GPR_U32(ctx, 31, 0x1D16F4u);
    ctx->pc = 0x1D16F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16ECu;
            // 0x1d16f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16F4u; }
        if (ctx->pc != 0x1D16F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D16F4u; }
        if (ctx->pc != 0x1D16F4u) { return; }
    }
    ctx->pc = 0x1D16F4u;
label_1d16f4:
    // 0x1d16f4: 0x104001d4  beqz        $v0, . + 4 + (0x1D4 << 2)
label_1d16f8:
    if (ctx->pc == 0x1D16F8u) {
        ctx->pc = 0x1D16FCu;
        goto label_1d16fc;
    }
    ctx->pc = 0x1D16F4u;
    {
        const bool branch_taken_0x1d16f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16f4) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D16FCu;
label_1d16fc:
    // 0x1d16fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1700:
    // 0x1d1700: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d1700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d1704:
    // 0x1d1704: 0x100001d0  b           . + 4 + (0x1D0 << 2)
label_1d1708:
    if (ctx->pc == 0x1D1708u) {
        ctx->pc = 0x1D1708u;
            // 0x1d1708: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D170Cu;
        goto label_1d170c;
    }
    ctx->pc = 0x1D1704u;
    {
        const bool branch_taken_0x1d1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1704u;
            // 0x1d1708: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1704) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D170Cu;
label_1d170c:
    // 0x1d170c: 0x0  nop
    ctx->pc = 0x1d170cu;
    // NOP
label_1d1710:
    // 0x1d1710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1714:
    // 0x1d1714: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
label_1d1718:
    if (ctx->pc == 0x1D1718u) {
        ctx->pc = 0x1D171Cu;
        goto label_1d171c;
    }
    ctx->pc = 0x1D1714u;
    {
        const bool branch_taken_0x1d1714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1714) {
            ctx->pc = 0x1D19E8u;
            goto label_1d19e8;
        }
    }
    ctx->pc = 0x1D171Cu;
label_1d171c:
    // 0x1d171c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1720:
    // 0x1d1720: 0x3c033f58  lui         $v1, 0x3F58
    ctx->pc = 0x1d1720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16216 << 16));
label_1d1724:
    // 0x1d1724: 0x3402bc6a  ori         $v0, $zero, 0xBC6A
    ctx->pc = 0x1d1724u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1d1728:
    // 0x1d1728: 0x34639374  ori         $v1, $v1, 0x9374
    ctx->pc = 0x1d1728u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)37748u)));
label_1d172c:
    // 0x1d172c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d1730:
    // 0x1d1730: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d1734:
    // 0x1d1734: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1d1734u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32506u)));
label_1d1738:
    // 0x1d1738: 0xc040d72  jal         func_1035C8
label_1d173c:
    if (ctx->pc == 0x1D173Cu) {
        ctx->pc = 0x1D173Cu;
            // 0x1d173c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D1740u;
        goto label_1d1740;
    }
    ctx->pc = 0x1D1738u;
    SET_GPR_U32(ctx, 31, 0x1D1740u);
    ctx->pc = 0x1D173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1738u;
            // 0x1d173c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1740u; }
        if (ctx->pc != 0x1D1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1740u; }
        if (ctx->pc != 0x1D1740u) { return; }
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1744:
    // 0x1d1744: 0xc040880  jal         func_102200
label_1d1748:
    if (ctx->pc == 0x1D1748u) {
        ctx->pc = 0x1D1748u;
            // 0x1d1748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D174Cu;
        goto label_1d174c;
    }
    ctx->pc = 0x1D1744u;
    SET_GPR_U32(ctx, 31, 0x1D174Cu);
    ctx->pc = 0x1D1748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1744u;
            // 0x1d1748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D174Cu; }
        if (ctx->pc != 0x1D174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D174Cu; }
        if (ctx->pc != 0x1D174Cu) { return; }
    }
    ctx->pc = 0x1D174Cu;
label_1d174c:
    // 0x1d174c: 0xc040a74  jal         func_1029D0
label_1d1750:
    if (ctx->pc == 0x1D1750u) {
        ctx->pc = 0x1D1750u;
            // 0x1d1750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1754u;
        goto label_1d1754;
    }
    ctx->pc = 0x1D174Cu;
    SET_GPR_U32(ctx, 31, 0x1D1754u);
    ctx->pc = 0x1D1750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D174Cu;
            // 0x1d1750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1754u; }
        if (ctx->pc != 0x1D1754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1754u; }
        if (ctx->pc != 0x1D1754u) { return; }
    }
    ctx->pc = 0x1D1754u;
label_1d1754:
    // 0x1d1754: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d1754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1758:
    // 0x1d1758: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d175c:
    // 0x1d175c: 0x0  nop
    ctx->pc = 0x1d175cu;
    // NOP
label_1d1760:
    // 0x1d1760: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d1760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d1764:
    // 0x1d1764: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d1768:
    // 0x1d1768: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d1768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d176c:
    // 0x1d176c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d176cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1770:
    // 0x1d1770: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1d1774:
    if (ctx->pc == 0x1D1774u) {
        ctx->pc = 0x1D1774u;
            // 0x1d1774: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->pc = 0x1D1778u;
        goto label_1d1778;
    }
    ctx->pc = 0x1D1770u;
    {
        const bool branch_taken_0x1d1770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1770u;
            // 0x1d1774: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1770) {
            ctx->pc = 0x1D17B8u;
            goto label_1d17b8;
        }
    }
    ctx->pc = 0x1D1778u;
label_1d1778:
    // 0x1d1778: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1d1778u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d177c:
    // 0x1d177c: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1d177cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1d1780:
    // 0x1d1780: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d1784:
    // 0x1d1784: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d1788:
    // 0x1d1788: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1d1788u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1d178c:
    // 0x1d178c: 0xc040d72  jal         func_1035C8
label_1d1790:
    if (ctx->pc == 0x1D1790u) {
        ctx->pc = 0x1D1790u;
            // 0x1d1790: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D1794u;
        goto label_1d1794;
    }
    ctx->pc = 0x1D178Cu;
    SET_GPR_U32(ctx, 31, 0x1D1794u);
    ctx->pc = 0x1D1790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D178Cu;
            // 0x1d1790: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1794u; }
        if (ctx->pc != 0x1D1794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1794u; }
        if (ctx->pc != 0x1D1794u) { return; }
    }
    ctx->pc = 0x1D1794u;
label_1d1794:
    // 0x1d1794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1798:
    // 0x1d1798: 0xc040880  jal         func_102200
label_1d179c:
    if (ctx->pc == 0x1D179Cu) {
        ctx->pc = 0x1D179Cu;
            // 0x1d179c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D17A0u;
        goto label_1d17a0;
    }
    ctx->pc = 0x1D1798u;
    SET_GPR_U32(ctx, 31, 0x1D17A0u);
    ctx->pc = 0x1D179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1798u;
            // 0x1d179c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17A0u; }
        if (ctx->pc != 0x1D17A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17A0u; }
        if (ctx->pc != 0x1D17A0u) { return; }
    }
    ctx->pc = 0x1D17A0u;
label_1d17a0:
    // 0x1d17a0: 0xc040a74  jal         func_1029D0
label_1d17a4:
    if (ctx->pc == 0x1D17A4u) {
        ctx->pc = 0x1D17A4u;
            // 0x1d17a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D17A8u;
        goto label_1d17a8;
    }
    ctx->pc = 0x1D17A0u;
    SET_GPR_U32(ctx, 31, 0x1D17A8u);
    ctx->pc = 0x1D17A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17A0u;
            // 0x1d17a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17A8u; }
        if (ctx->pc != 0x1D17A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17A8u; }
        if (ctx->pc != 0x1D17A8u) { return; }
    }
    ctx->pc = 0x1D17A8u;
label_1d17a8:
    // 0x1d17a8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d17ac:
    // 0x1d17ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d17acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d17b0:
    // 0x1d17b0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d17b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d17b4:
    // 0x1d17b4: 0x0  nop
    ctx->pc = 0x1d17b4u;
    // NOP
label_1d17b8:
    // 0x1d17b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d17bc:
    // 0x1d17bc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d17c0:
    // 0x1d17c0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d17c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d17c4:
    // 0x1d17c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d17c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d17c8:
    // 0x1d17c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d17c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d17cc:
    // 0x1d17cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d17d0:
    if (ctx->pc == 0x1D17D0u) {
        ctx->pc = 0x1D17D0u;
            // 0x1d17d0: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1D17D4u;
        goto label_1d17d4;
    }
    ctx->pc = 0x1D17CCu;
    {
        const bool branch_taken_0x1d17cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D17D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17CCu;
            // 0x1d17d0: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17cc) {
            ctx->pc = 0x1D17E0u;
            goto label_1d17e0;
        }
    }
    ctx->pc = 0x1D17D4u;
label_1d17d4:
    // 0x1d17d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d17d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d17d8:
    // 0x1d17d8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d17dc:
    // 0x1d17dc: 0x0  nop
    ctx->pc = 0x1d17dcu;
    // NOP
label_1d17e0:
    // 0x1d17e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d17e4:
    // 0x1d17e4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d17e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d17e8:
    // 0x1d17e8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d17ec:
    // 0x1d17ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d17ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d17f0:
    // 0x1d17f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d17f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d17f4:
    // 0x1d17f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d17f8:
    if (ctx->pc == 0x1D17F8u) {
        ctx->pc = 0x1D17F8u;
            // 0x1d17f8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1D17FCu;
        goto label_1d17fc;
    }
    ctx->pc = 0x1D17F4u;
    {
        const bool branch_taken_0x1d17f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D17F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17F4u;
            // 0x1d17f8: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17f4) {
            ctx->pc = 0x1D1808u;
            goto label_1d1808;
        }
    }
    ctx->pc = 0x1D17FCu;
label_1d17fc:
    // 0x1d17fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d17fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d1800:
    // 0x1d1800: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d1800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d1804:
    // 0x1d1804: 0x0  nop
    ctx->pc = 0x1d1804u;
    // NOP
label_1d1808:
    // 0x1d1808: 0xc065d00  jal         func_197400
label_1d180c:
    if (ctx->pc == 0x1D180Cu) {
        ctx->pc = 0x1D1810u;
        goto label_1d1810;
    }
    ctx->pc = 0x1D1808u;
    SET_GPR_U32(ctx, 31, 0x1D1810u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1810u; }
        if (ctx->pc != 0x1D1810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1810u; }
        if (ctx->pc != 0x1D1810u) { return; }
    }
    ctx->pc = 0x1D1810u;
label_1d1810:
    // 0x1d1810: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d1810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1814:
    // 0x1d1814: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_1d1818:
    if (ctx->pc == 0x1D1818u) {
        ctx->pc = 0x1D181Cu;
        goto label_1d181c;
    }
    ctx->pc = 0x1D1814u;
    {
        const bool branch_taken_0x1d1814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1814) {
            ctx->pc = 0x1D18A0u;
            goto label_1d18a0;
        }
    }
    ctx->pc = 0x1D181Cu;
label_1d181c:
    // 0x1d181c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1820:
    // 0x1d1820: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1824:
    // 0x1d1824: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d1824u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d1828:
    // 0x1d1828: 0x0  nop
    ctx->pc = 0x1d1828u;
    // NOP
label_1d182c:
    // 0x1d182c: 0x0  nop
    ctx->pc = 0x1d182cu;
    // NOP
label_1d1830:
    // 0x1d1830: 0x1010  mfhi        $v0
    ctx->pc = 0x1d1830u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d1834:
    // 0x1d1834: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_1d1838:
    if (ctx->pc == 0x1D1838u) {
        ctx->pc = 0x1D183Cu;
        goto label_1d183c;
    }
    ctx->pc = 0x1D1834u;
    {
        const bool branch_taken_0x1d1834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1834) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D183Cu;
label_1d183c:
    // 0x1d183c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1840:
    // 0x1d1840: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d1840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d1844:
    // 0x1d1844: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1848:
    // 0x1d1848: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d1848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d184c:
    // 0x1d184c: 0xc05d080  jal         func_174200
label_1d1850:
    if (ctx->pc == 0x1D1850u) {
        ctx->pc = 0x1D1850u;
            // 0x1d1850: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D1854u;
        goto label_1d1854;
    }
    ctx->pc = 0x1D184Cu;
    SET_GPR_U32(ctx, 31, 0x1D1854u);
    ctx->pc = 0x1D1850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D184Cu;
            // 0x1d1850: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1854u; }
        if (ctx->pc != 0x1D1854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1854u; }
        if (ctx->pc != 0x1D1854u) { return; }
    }
    ctx->pc = 0x1D1854u;
label_1d1854:
    // 0x1d1854: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1858:
    // 0x1d1858: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d185c:
    // 0x1d185c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1860:
    // 0x1d1860: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1864:
    // 0x1d1864: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1d1868:
    // 0x1d1868: 0xc065508  jal         func_195420
label_1d186c:
    if (ctx->pc == 0x1D186Cu) {
        ctx->pc = 0x1D186Cu;
            // 0x1d186c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1870u;
        goto label_1d1870;
    }
    ctx->pc = 0x1D1868u;
    SET_GPR_U32(ctx, 31, 0x1D1870u);
    ctx->pc = 0x1D186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1868u;
            // 0x1d186c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1870u; }
        if (ctx->pc != 0x1D1870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1870u; }
        if (ctx->pc != 0x1D1870u) { return; }
    }
    ctx->pc = 0x1D1870u;
label_1d1870:
    // 0x1d1870: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1874:
    // 0x1d1874: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1878:
    // 0x1d1878: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d187c:
    // 0x1d187c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1880:
    // 0x1d1880: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1884:
    // 0x1d1884: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d1884u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d1888:
    // 0x1d1888: 0xc065508  jal         func_195420
label_1d188c:
    if (ctx->pc == 0x1D188Cu) {
        ctx->pc = 0x1D188Cu;
            // 0x1d188c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1890u;
        goto label_1d1890;
    }
    ctx->pc = 0x1D1888u;
    SET_GPR_U32(ctx, 31, 0x1D1890u);
    ctx->pc = 0x1D188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1888u;
            // 0x1d188c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1890u; }
        if (ctx->pc != 0x1D1890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1890u; }
        if (ctx->pc != 0x1D1890u) { return; }
    }
    ctx->pc = 0x1D1890u;
label_1d1890:
    // 0x1d1890: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1894:
    // 0x1d1894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d1898:
    // 0x1d1898: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d189c:
    if (ctx->pc == 0x1D189Cu) {
        ctx->pc = 0x1D189Cu;
            // 0x1d189c: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1D18A0u;
        goto label_1d18a0;
    }
    ctx->pc = 0x1D1898u;
    {
        const bool branch_taken_0x1d1898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1898u;
            // 0x1d189c: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1898) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D18A0u;
label_1d18a0:
    // 0x1d18a0: 0xc065d00  jal         func_197400
label_1d18a4:
    if (ctx->pc == 0x1D18A4u) {
        ctx->pc = 0x1D18A8u;
        goto label_1d18a8;
    }
    ctx->pc = 0x1D18A0u;
    SET_GPR_U32(ctx, 31, 0x1D18A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18A8u; }
        if (ctx->pc != 0x1D18A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18A8u; }
        if (ctx->pc != 0x1D18A8u) { return; }
    }
    ctx->pc = 0x1D18A8u;
label_1d18a8:
    // 0x1d18a8: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_1d18ac:
    if (ctx->pc == 0x1D18ACu) {
        ctx->pc = 0x1D18B0u;
        goto label_1d18b0;
    }
    ctx->pc = 0x1D18A8u;
    {
        const bool branch_taken_0x1d18a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d18a8) {
            ctx->pc = 0x1D1938u;
            goto label_1d1938;
        }
    }
    ctx->pc = 0x1D18B0u;
label_1d18b0:
    // 0x1d18b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d18b4:
    // 0x1d18b4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d18b8:
    if (ctx->pc == 0x1D18B8u) {
        ctx->pc = 0x1D18B8u;
            // 0x1d18b8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->pc = 0x1D18BCu;
        goto label_1d18bc;
    }
    ctx->pc = 0x1D18B4u;
    {
        const bool branch_taken_0x1d18b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D18B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18B4u;
            // 0x1d18b8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18b4) {
            ctx->pc = 0x1D18C8u;
            goto label_1d18c8;
        }
    }
    ctx->pc = 0x1D18BCu;
label_1d18bc:
    // 0x1d18bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d18c0:
    if (ctx->pc == 0x1D18C0u) {
        ctx->pc = 0x1D18C4u;
        goto label_1d18c4;
    }
    ctx->pc = 0x1D18BCu;
    {
        const bool branch_taken_0x1d18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d18bc) {
            ctx->pc = 0x1D18C8u;
            goto label_1d18c8;
        }
    }
    ctx->pc = 0x1D18C4u;
label_1d18c4:
    // 0x1d18c4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1d18c8:
    // 0x1d18c8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1d18cc:
    if (ctx->pc == 0x1D18CCu) {
        ctx->pc = 0x1D18D0u;
        goto label_1d18d0;
    }
    ctx->pc = 0x1D18C8u;
    {
        const bool branch_taken_0x1d18c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d18c8) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D18D0u;
label_1d18d0:
    // 0x1d18d0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d18d4:
    // 0x1d18d4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d18d8:
    // 0x1d18d8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d18dc:
    // 0x1d18dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d18dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d18e0:
    // 0x1d18e0: 0xc05d080  jal         func_174200
label_1d18e4:
    if (ctx->pc == 0x1D18E4u) {
        ctx->pc = 0x1D18E4u;
            // 0x1d18e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D18E8u;
        goto label_1d18e8;
    }
    ctx->pc = 0x1D18E0u;
    SET_GPR_U32(ctx, 31, 0x1D18E8u);
    ctx->pc = 0x1D18E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18E0u;
            // 0x1d18e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18E8u; }
        if (ctx->pc != 0x1D18E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D18E8u; }
        if (ctx->pc != 0x1D18E8u) { return; }
    }
    ctx->pc = 0x1D18E8u;
label_1d18e8:
    // 0x1d18e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d18ec:
    // 0x1d18ec: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d18f0:
    // 0x1d18f0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d18f4:
    // 0x1d18f4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d18f8:
    // 0x1d18f8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1d18fc:
    // 0x1d18fc: 0xc065508  jal         func_195420
label_1d1900:
    if (ctx->pc == 0x1D1900u) {
        ctx->pc = 0x1D1900u;
            // 0x1d1900: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1904u;
        goto label_1d1904;
    }
    ctx->pc = 0x1D18FCu;
    SET_GPR_U32(ctx, 31, 0x1D1904u);
    ctx->pc = 0x1D1900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18FCu;
            // 0x1d1900: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1904u; }
        if (ctx->pc != 0x1D1904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1904u; }
        if (ctx->pc != 0x1D1904u) { return; }
    }
    ctx->pc = 0x1D1904u;
label_1d1904:
    // 0x1d1904: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d1904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1908:
    // 0x1d1908: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d190c:
    // 0x1d190c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1910:
    // 0x1d1910: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1914:
    // 0x1d1914: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1918:
    // 0x1d1918: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d1918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d191c:
    // 0x1d191c: 0xc065508  jal         func_195420
label_1d1920:
    if (ctx->pc == 0x1D1920u) {
        ctx->pc = 0x1D1920u;
            // 0x1d1920: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1924u;
        goto label_1d1924;
    }
    ctx->pc = 0x1D191Cu;
    SET_GPR_U32(ctx, 31, 0x1D1924u);
    ctx->pc = 0x1D1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D191Cu;
            // 0x1d1920: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1924u; }
        if (ctx->pc != 0x1D1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1924u; }
        if (ctx->pc != 0x1D1924u) { return; }
    }
    ctx->pc = 0x1D1924u;
label_1d1924:
    // 0x1d1924: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1928:
    // 0x1d1928: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d192c:
    // 0x1d192c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1d1930:
    if (ctx->pc == 0x1D1930u) {
        ctx->pc = 0x1D1930u;
            // 0x1d1930: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1D1934u;
        goto label_1d1934;
    }
    ctx->pc = 0x1D192Cu;
    {
        const bool branch_taken_0x1d192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D192Cu;
            // 0x1d1930: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d192c) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D1934u;
label_1d1934:
    // 0x1d1934: 0x0  nop
    ctx->pc = 0x1d1934u;
    // NOP
label_1d1938:
    // 0x1d1938: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d193c:
    // 0x1d193c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d1940:
    // 0x1d1940: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d1940u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d1944:
    // 0x1d1944: 0x0  nop
    ctx->pc = 0x1d1944u;
    // NOP
label_1d1948:
    // 0x1d1948: 0x0  nop
    ctx->pc = 0x1d1948u;
    // NOP
label_1d194c:
    // 0x1d194c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d194cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d1950:
    // 0x1d1950: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1d1954:
    if (ctx->pc == 0x1D1954u) {
        ctx->pc = 0x1D1958u;
        goto label_1d1958;
    }
    ctx->pc = 0x1D1950u;
    {
        const bool branch_taken_0x1d1950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1950) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D1958u;
label_1d1958:
    // 0x1d1958: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d195c:
    // 0x1d195c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d1960:
    // 0x1d1960: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1964:
    // 0x1d1964: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d1964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d1968:
    // 0x1d1968: 0xc05d080  jal         func_174200
label_1d196c:
    if (ctx->pc == 0x1D196Cu) {
        ctx->pc = 0x1D196Cu;
            // 0x1d196c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D1970u;
        goto label_1d1970;
    }
    ctx->pc = 0x1D1968u;
    SET_GPR_U32(ctx, 31, 0x1D1970u);
    ctx->pc = 0x1D196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1968u;
            // 0x1d196c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1970u; }
        if (ctx->pc != 0x1D1970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1970u; }
        if (ctx->pc != 0x1D1970u) { return; }
    }
    ctx->pc = 0x1D1970u;
label_1d1970:
    // 0x1d1970: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1974:
    // 0x1d1974: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1978:
    // 0x1d1978: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d197c:
    // 0x1d197c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d197cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1980:
    // 0x1d1980: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d1980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1d1984:
    // 0x1d1984: 0xc065508  jal         func_195420
label_1d1988:
    if (ctx->pc == 0x1D1988u) {
        ctx->pc = 0x1D1988u;
            // 0x1d1988: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D198Cu;
        goto label_1d198c;
    }
    ctx->pc = 0x1D1984u;
    SET_GPR_U32(ctx, 31, 0x1D198Cu);
    ctx->pc = 0x1D1988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1984u;
            // 0x1d1988: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D198Cu; }
        if (ctx->pc != 0x1D198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D198Cu; }
        if (ctx->pc != 0x1D198Cu) { return; }
    }
    ctx->pc = 0x1D198Cu;
label_1d198c:
    // 0x1d198c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d198cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1990:
    // 0x1d1990: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1994:
    // 0x1d1994: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1998:
    // 0x1d1998: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d199c:
    // 0x1d199c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d199cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d19a0:
    // 0x1d19a0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d19a4:
    // 0x1d19a4: 0xc065508  jal         func_195420
label_1d19a8:
    if (ctx->pc == 0x1D19A8u) {
        ctx->pc = 0x1D19A8u;
            // 0x1d19a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D19ACu;
        goto label_1d19ac;
    }
    ctx->pc = 0x1D19A4u;
    SET_GPR_U32(ctx, 31, 0x1D19ACu);
    ctx->pc = 0x1D19A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19A4u;
            // 0x1d19a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19ACu; }
        if (ctx->pc != 0x1D19ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19ACu; }
        if (ctx->pc != 0x1D19ACu) { return; }
    }
    ctx->pc = 0x1D19ACu;
label_1d19ac:
    // 0x1d19ac: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d19b0:
    // 0x1d19b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d19b4:
    // 0x1d19b4: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1d19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1d19b8:
    // 0x1d19b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d19bc:
    // 0x1d19bc: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1d19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1d19c0:
    // 0x1d19c0: 0x14620121  bne         $v1, $v0, . + 4 + (0x121 << 2)
label_1d19c4:
    if (ctx->pc == 0x1D19C4u) {
        ctx->pc = 0x1D19C4u;
            // 0x1d19c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D19C8u;
        goto label_1d19c8;
    }
    ctx->pc = 0x1D19C0u;
    {
        const bool branch_taken_0x1d19c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D19C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19C0u;
            // 0x1d19c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19c0) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D19C8u;
label_1d19c8:
    // 0x1d19c8: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d19cc:
    // 0x1d19cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d19d0:
    // 0x1d19d0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d19d4:
    // 0x1d19d4: 0xc065590  jal         func_195640
label_1d19d8:
    if (ctx->pc == 0x1D19D8u) {
        ctx->pc = 0x1D19D8u;
            // 0x1d19d8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D19DCu;
        goto label_1d19dc;
    }
    ctx->pc = 0x1D19D4u;
    SET_GPR_U32(ctx, 31, 0x1D19DCu);
    ctx->pc = 0x1D19D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19D4u;
            // 0x1d19d8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19DCu; }
        if (ctx->pc != 0x1D19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19DCu; }
        if (ctx->pc != 0x1D19DCu) { return; }
    }
    ctx->pc = 0x1D19DCu;
label_1d19dc:
    // 0x1d19dc: 0x1000011a  b           . + 4 + (0x11A << 2)
label_1d19e0:
    if (ctx->pc == 0x1D19E0u) {
        ctx->pc = 0x1D19E4u;
        goto label_1d19e4;
    }
    ctx->pc = 0x1D19DCu;
    {
        const bool branch_taken_0x1d19dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19dc) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D19E4u;
label_1d19e4:
    // 0x1d19e4: 0x0  nop
    ctx->pc = 0x1d19e4u;
    // NOP
label_1d19e8:
    // 0x1d19e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d19ec:
    // 0x1d19ec: 0x14620116  bne         $v1, $v0, . + 4 + (0x116 << 2)
label_1d19f0:
    if (ctx->pc == 0x1D19F0u) {
        ctx->pc = 0x1D19F4u;
        goto label_1d19f4;
    }
    ctx->pc = 0x1D19ECu;
    {
        const bool branch_taken_0x1d19ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d19ec) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D19F4u;
label_1d19f4:
    // 0x1d19f4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d19f8:
    // 0x1d19f8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d19fc:
    // 0x1d19fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d19fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d1a00:
    // 0x1d1a00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1a04:
    // 0x1d1a04: 0x0  nop
    ctx->pc = 0x1d1a04u;
    // NOP
label_1d1a08:
    // 0x1d1a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d1a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d1a0c:
    // 0x1d1a0c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d1a10:
    // 0x1d1a10: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a14:
    // 0x1d1a14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d1a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d1a18:
    // 0x1d1a18: 0x1000010b  b           . + 4 + (0x10B << 2)
label_1d1a1c:
    if (ctx->pc == 0x1D1A1Cu) {
        ctx->pc = 0x1D1A1Cu;
            // 0x1d1a1c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D1A20u;
        goto label_1d1a20;
    }
    ctx->pc = 0x1D1A18u;
    {
        const bool branch_taken_0x1d1a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A18u;
            // 0x1d1a1c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a18) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1A20u;
label_1d1a20:
    // 0x1d1a20: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d1a24:
    // 0x1d1a24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d1a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d1a28:
    // 0x1d1a28: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d1a2c:
    // 0x1d1a2c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d1a30:
    // 0x1d1a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1a34:
    // 0x1d1a34: 0x0  nop
    ctx->pc = 0x1d1a34u;
    // NOP
label_1d1a38:
    // 0x1d1a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1a3c:
    // 0x1d1a3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d1a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d1a40:
    // 0x1d1a40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d1a44:
    // 0x1d1a44: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d1a48:
    // 0x1d1a48: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d1a4c:
    // 0x1d1a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1a50:
    // 0x1d1a50: 0x0  nop
    ctx->pc = 0x1d1a50u;
    // NOP
label_1d1a54:
    // 0x1d1a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1a58:
    // 0x1d1a58: 0xc04b6ee  jal         func_12DBB8
label_1d1a5c:
    if (ctx->pc == 0x1D1A5Cu) {
        ctx->pc = 0x1D1A5Cu;
            // 0x1d1a5c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D1A60u;
        goto label_1d1a60;
    }
    ctx->pc = 0x1D1A58u;
    SET_GPR_U32(ctx, 31, 0x1D1A60u);
    ctx->pc = 0x1D1A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A58u;
            // 0x1d1a5c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A60u; }
        if (ctx->pc != 0x1D1A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A60u; }
        if (ctx->pc != 0x1D1A60u) { return; }
    }
    ctx->pc = 0x1D1A60u;
label_1d1a60:
    // 0x1d1a60: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1d1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d1a64:
    // 0x1d1a64: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_1d1a68:
    if (ctx->pc == 0x1D1A68u) {
        ctx->pc = 0x1D1A6Cu;
        goto label_1d1a6c;
    }
    ctx->pc = 0x1D1A64u;
    {
        const bool branch_taken_0x1d1a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a64) {
            ctx->pc = 0x1D1B38u;
            goto label_1d1b38;
        }
    }
    ctx->pc = 0x1D1A6Cu;
label_1d1a6c:
    // 0x1d1a6c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a70:
    // 0x1d1a70: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1d1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1d1a74:
    // 0x1d1a74: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1d1a74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1d1a78:
    // 0x1d1a78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d1a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d1a7c:
    // 0x1d1a7c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1d1a80:
    // 0x1d1a80: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1d1a80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1d1a84:
    // 0x1d1a84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1a88:
    // 0x1d1a88: 0x0  nop
    ctx->pc = 0x1d1a88u;
    // NOP
label_1d1a8c:
    // 0x1d1a8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d1a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d1a90:
    // 0x1d1a90: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d1a94:
    // 0x1d1a94: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1a98:
    // 0x1d1a98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1a9c:
    // 0x1d1a9c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d1aa0:
    // 0x1d1aa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1aa4:
    // 0x1d1aa4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d1aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1aa8:
    // 0x1d1aa8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d1aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1aac:
    // 0x1d1aac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d1aacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d1ab0:
    // 0x1d1ab0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1ab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1ab4:
    // 0x1d1ab4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d1ab8:
    if (ctx->pc == 0x1D1AB8u) {
        ctx->pc = 0x1D1AB8u;
            // 0x1d1ab8: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1D1ABCu;
        goto label_1d1abc;
    }
    ctx->pc = 0x1D1AB4u;
    {
        const bool branch_taken_0x1d1ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AB4u;
            // 0x1d1ab8: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ab4) {
            ctx->pc = 0x1D1AC8u;
            goto label_1d1ac8;
        }
    }
    ctx->pc = 0x1D1ABCu;
label_1d1abc:
    // 0x1d1abc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d1abcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d1ac0:
    // 0x1d1ac0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d1ac4:
    // 0x1d1ac4: 0x0  nop
    ctx->pc = 0x1d1ac4u;
    // NOP
label_1d1ac8:
    // 0x1d1ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1acc:
    // 0x1d1acc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d1accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1ad0:
    // 0x1d1ad0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d1ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1ad4:
    // 0x1d1ad4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d1ad4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d1ad8:
    // 0x1d1ad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d1ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1adc:
    // 0x1d1adc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d1ae0:
    if (ctx->pc == 0x1D1AE0u) {
        ctx->pc = 0x1D1AE0u;
            // 0x1d1ae0: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1D1AE4u;
        goto label_1d1ae4;
    }
    ctx->pc = 0x1D1ADCu;
    {
        const bool branch_taken_0x1d1adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1ADCu;
            // 0x1d1ae0: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1adc) {
            ctx->pc = 0x1D1AF0u;
            goto label_1d1af0;
        }
    }
    ctx->pc = 0x1D1AE4u;
label_1d1ae4:
    // 0x1d1ae4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d1ae4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d1ae8:
    // 0x1d1ae8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d1aec:
    // 0x1d1aec: 0x0  nop
    ctx->pc = 0x1d1aecu;
    // NOP
label_1d1af0:
    // 0x1d1af0: 0xc040d72  jal         func_1035C8
label_1d1af4:
    if (ctx->pc == 0x1D1AF4u) {
        ctx->pc = 0x1D1AF4u;
            // 0x1d1af4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D1AF8u;
        goto label_1d1af8;
    }
    ctx->pc = 0x1D1AF0u;
    SET_GPR_U32(ctx, 31, 0x1D1AF8u);
    ctx->pc = 0x1D1AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AF0u;
            // 0x1d1af4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AF8u; }
        if (ctx->pc != 0x1D1AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AF8u; }
        if (ctx->pc != 0x1D1AF8u) { return; }
    }
    ctx->pc = 0x1D1AF8u;
label_1d1af8:
    // 0x1d1af8: 0x3c04bfb9  lui         $a0, 0xBFB9
    ctx->pc = 0x1d1af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49081 << 16));
label_1d1afc:
    // 0x1d1afc: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1d1afcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1d1b00:
    // 0x1d1b00: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1d1b00u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1d1b04:
    // 0x1d1b04: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d1b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d1b08:
    // 0x1d1b08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d1b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d1b0c:
    // 0x1d1b0c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1d1b0cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1d1b10:
    // 0x1d1b10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d1b10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d1b14:
    // 0x1d1b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b18:
    // 0x1d1b18: 0xc040084  jal         func_100210
label_1d1b1c:
    if (ctx->pc == 0x1D1B1Cu) {
        ctx->pc = 0x1D1B1Cu;
            // 0x1d1b1c: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D1B20u;
        goto label_1d1b20;
    }
    ctx->pc = 0x1D1B18u;
    SET_GPR_U32(ctx, 31, 0x1D1B20u);
    ctx->pc = 0x1D1B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B18u;
            // 0x1d1b1c: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B20u; }
        if (ctx->pc != 0x1D1B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B20u; }
        if (ctx->pc != 0x1D1B20u) { return; }
    }
    ctx->pc = 0x1D1B20u;
label_1d1b20:
    // 0x1d1b20: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_1d1b24:
    if (ctx->pc == 0x1D1B24u) {
        ctx->pc = 0x1D1B28u;
        goto label_1d1b28;
    }
    ctx->pc = 0x1D1B20u;
    {
        const bool branch_taken_0x1d1b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b20) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1B28u;
label_1d1b28:
    // 0x1d1b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1b2c:
    // 0x1d1b2c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d1b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d1b30:
    // 0x1d1b30: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_1d1b34:
    if (ctx->pc == 0x1D1B34u) {
        ctx->pc = 0x1D1B34u;
            // 0x1d1b34: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1B38u;
        goto label_1d1b38;
    }
    ctx->pc = 0x1D1B30u;
    {
        const bool branch_taken_0x1d1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B30u;
            // 0x1d1b34: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b30) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1B38u;
label_1d1b38:
    // 0x1d1b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1b3c:
    // 0x1d1b3c: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
label_1d1b40:
    if (ctx->pc == 0x1D1B40u) {
        ctx->pc = 0x1D1B44u;
        goto label_1d1b44;
    }
    ctx->pc = 0x1D1B3Cu;
    {
        const bool branch_taken_0x1d1b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1b3c) {
            ctx->pc = 0x1D1E10u;
            goto label_1d1e10;
        }
    }
    ctx->pc = 0x1D1B44u;
label_1d1b44:
    // 0x1d1b44: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1b48:
    // 0x1d1b48: 0x3c033f58  lui         $v1, 0x3F58
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16216 << 16));
label_1d1b4c:
    // 0x1d1b4c: 0x3402bc6a  ori         $v0, $zero, 0xBC6A
    ctx->pc = 0x1d1b4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1d1b50:
    // 0x1d1b50: 0x34639374  ori         $v1, $v1, 0x9374
    ctx->pc = 0x1d1b50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)37748u)));
label_1d1b54:
    // 0x1d1b54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d1b58:
    // 0x1d1b58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d1b5c:
    // 0x1d1b5c: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1d1b5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32506u)));
label_1d1b60:
    // 0x1d1b60: 0xc040d72  jal         func_1035C8
label_1d1b64:
    if (ctx->pc == 0x1D1B64u) {
        ctx->pc = 0x1D1B64u;
            // 0x1d1b64: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D1B68u;
        goto label_1d1b68;
    }
    ctx->pc = 0x1D1B60u;
    SET_GPR_U32(ctx, 31, 0x1D1B68u);
    ctx->pc = 0x1D1B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B60u;
            // 0x1d1b64: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B68u; }
        if (ctx->pc != 0x1D1B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B68u; }
        if (ctx->pc != 0x1D1B68u) { return; }
    }
    ctx->pc = 0x1D1B68u;
label_1d1b68:
    // 0x1d1b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b6c:
    // 0x1d1b6c: 0xc040880  jal         func_102200
label_1d1b70:
    if (ctx->pc == 0x1D1B70u) {
        ctx->pc = 0x1D1B70u;
            // 0x1d1b70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B74u;
        goto label_1d1b74;
    }
    ctx->pc = 0x1D1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B74u);
    ctx->pc = 0x1D1B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B6Cu;
            // 0x1d1b70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B74u; }
        if (ctx->pc != 0x1D1B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B74u; }
        if (ctx->pc != 0x1D1B74u) { return; }
    }
    ctx->pc = 0x1D1B74u;
label_1d1b74:
    // 0x1d1b74: 0xc040a74  jal         func_1029D0
label_1d1b78:
    if (ctx->pc == 0x1D1B78u) {
        ctx->pc = 0x1D1B78u;
            // 0x1d1b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B7Cu;
        goto label_1d1b7c;
    }
    ctx->pc = 0x1D1B74u;
    SET_GPR_U32(ctx, 31, 0x1D1B7Cu);
    ctx->pc = 0x1D1B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B74u;
            // 0x1d1b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B7Cu; }
        if (ctx->pc != 0x1D1B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B7Cu; }
        if (ctx->pc != 0x1D1B7Cu) { return; }
    }
    ctx->pc = 0x1D1B7Cu;
label_1d1b7c:
    // 0x1d1b7c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1b80:
    // 0x1d1b80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1b84:
    // 0x1d1b84: 0x0  nop
    ctx->pc = 0x1d1b84u;
    // NOP
label_1d1b88:
    // 0x1d1b88: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d1b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d1b8c:
    // 0x1d1b8c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d1b90:
    // 0x1d1b90: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d1b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1b94:
    // 0x1d1b94: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d1b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1b98:
    // 0x1d1b98: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1d1b9c:
    if (ctx->pc == 0x1D1B9Cu) {
        ctx->pc = 0x1D1B9Cu;
            // 0x1d1b9c: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->pc = 0x1D1BA0u;
        goto label_1d1ba0;
    }
    ctx->pc = 0x1D1B98u;
    {
        const bool branch_taken_0x1d1b98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B98u;
            // 0x1d1b9c: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b98) {
            ctx->pc = 0x1D1BE0u;
            goto label_1d1be0;
        }
    }
    ctx->pc = 0x1D1BA0u;
label_1d1ba0:
    // 0x1d1ba0: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1d1ba0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d1ba4:
    // 0x1d1ba4: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1d1ba4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1d1ba8:
    // 0x1d1ba8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d1bac:
    // 0x1d1bac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d1bb0:
    // 0x1d1bb0: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1d1bb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1d1bb4:
    // 0x1d1bb4: 0xc040d72  jal         func_1035C8
label_1d1bb8:
    if (ctx->pc == 0x1D1BB8u) {
        ctx->pc = 0x1D1BB8u;
            // 0x1d1bb8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D1BBCu;
        goto label_1d1bbc;
    }
    ctx->pc = 0x1D1BB4u;
    SET_GPR_U32(ctx, 31, 0x1D1BBCu);
    ctx->pc = 0x1D1BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BB4u;
            // 0x1d1bb8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BBCu; }
        if (ctx->pc != 0x1D1BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BBCu; }
        if (ctx->pc != 0x1D1BBCu) { return; }
    }
    ctx->pc = 0x1D1BBCu;
label_1d1bbc:
    // 0x1d1bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1bc0:
    // 0x1d1bc0: 0xc040880  jal         func_102200
label_1d1bc4:
    if (ctx->pc == 0x1D1BC4u) {
        ctx->pc = 0x1D1BC4u;
            // 0x1d1bc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC8u;
        goto label_1d1bc8;
    }
    ctx->pc = 0x1D1BC0u;
    SET_GPR_U32(ctx, 31, 0x1D1BC8u);
    ctx->pc = 0x1D1BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BC0u;
            // 0x1d1bc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BC8u; }
        if (ctx->pc != 0x1D1BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BC8u; }
        if (ctx->pc != 0x1D1BC8u) { return; }
    }
    ctx->pc = 0x1D1BC8u;
label_1d1bc8:
    // 0x1d1bc8: 0xc040a74  jal         func_1029D0
label_1d1bcc:
    if (ctx->pc == 0x1D1BCCu) {
        ctx->pc = 0x1D1BCCu;
            // 0x1d1bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BD0u;
        goto label_1d1bd0;
    }
    ctx->pc = 0x1D1BC8u;
    SET_GPR_U32(ctx, 31, 0x1D1BD0u);
    ctx->pc = 0x1D1BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BC8u;
            // 0x1d1bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BD0u; }
        if (ctx->pc != 0x1D1BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BD0u; }
        if (ctx->pc != 0x1D1BD0u) { return; }
    }
    ctx->pc = 0x1D1BD0u;
label_1d1bd0:
    // 0x1d1bd0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1bd4:
    // 0x1d1bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d1bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d1bd8:
    // 0x1d1bd8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d1bdc:
    // 0x1d1bdc: 0x0  nop
    ctx->pc = 0x1d1bdcu;
    // NOP
label_1d1be0:
    // 0x1d1be0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1be4:
    // 0x1d1be4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d1be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1be8:
    // 0x1d1be8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d1be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1bec:
    // 0x1d1bec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d1becu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d1bf0:
    // 0x1d1bf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1bf4:
    // 0x1d1bf4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d1bf8:
    if (ctx->pc == 0x1D1BF8u) {
        ctx->pc = 0x1D1BF8u;
            // 0x1d1bf8: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->pc = 0x1D1BFCu;
        goto label_1d1bfc;
    }
    ctx->pc = 0x1D1BF4u;
    {
        const bool branch_taken_0x1d1bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BF4u;
            // 0x1d1bf8: 0x3c023c75  lui         $v0, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf4) {
            ctx->pc = 0x1D1C08u;
            goto label_1d1c08;
        }
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d1bfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d1c00:
    // 0x1d1c00: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d1c04:
    // 0x1d1c04: 0x0  nop
    ctx->pc = 0x1d1c04u;
    // NOP
label_1d1c08:
    // 0x1d1c08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1c0c:
    // 0x1d1c0c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d1c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c10:
    // 0x1d1c10: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1c14:
    // 0x1d1c14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d1c14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d1c18:
    // 0x1d1c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d1c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1c1c:
    // 0x1d1c1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d1c20:
    if (ctx->pc == 0x1D1C20u) {
        ctx->pc = 0x1D1C20u;
            // 0x1d1c20: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->pc = 0x1D1C24u;
        goto label_1d1c24;
    }
    ctx->pc = 0x1D1C1Cu;
    {
        const bool branch_taken_0x1d1c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C1Cu;
            // 0x1d1c20: 0x3c02bc75  lui         $v0, 0xBC75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c1c) {
            ctx->pc = 0x1D1C30u;
            goto label_1d1c30;
        }
    }
    ctx->pc = 0x1D1C24u;
label_1d1c24:
    // 0x1d1c24: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d1c24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d1c28:
    // 0x1d1c28: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d1c2c:
    // 0x1d1c2c: 0x0  nop
    ctx->pc = 0x1d1c2cu;
    // NOP
label_1d1c30:
    // 0x1d1c30: 0xc065d00  jal         func_197400
label_1d1c34:
    if (ctx->pc == 0x1D1C34u) {
        ctx->pc = 0x1D1C38u;
        goto label_1d1c38;
    }
    ctx->pc = 0x1D1C30u;
    SET_GPR_U32(ctx, 31, 0x1D1C38u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C38u; }
        if (ctx->pc != 0x1D1C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C38u; }
        if (ctx->pc != 0x1D1C38u) { return; }
    }
    ctx->pc = 0x1D1C38u;
label_1d1c38:
    // 0x1d1c38: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d1c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1c3c:
    // 0x1d1c3c: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_1d1c40:
    if (ctx->pc == 0x1D1C40u) {
        ctx->pc = 0x1D1C44u;
        goto label_1d1c44;
    }
    ctx->pc = 0x1D1C3Cu;
    {
        const bool branch_taken_0x1d1c3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c3c) {
            ctx->pc = 0x1D1CC8u;
            goto label_1d1cc8;
        }
    }
    ctx->pc = 0x1D1C44u;
label_1d1c44:
    // 0x1d1c44: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1c48:
    // 0x1d1c48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1c4c:
    // 0x1d1c4c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d1c4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d1c50:
    // 0x1d1c50: 0x0  nop
    ctx->pc = 0x1d1c50u;
    // NOP
label_1d1c54:
    // 0x1d1c54: 0x0  nop
    ctx->pc = 0x1d1c54u;
    // NOP
label_1d1c58:
    // 0x1d1c58: 0x1010  mfhi        $v0
    ctx->pc = 0x1d1c58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d1c5c:
    // 0x1d1c5c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_1d1c60:
    if (ctx->pc == 0x1D1C60u) {
        ctx->pc = 0x1D1C64u;
        goto label_1d1c64;
    }
    ctx->pc = 0x1D1C5Cu;
    {
        const bool branch_taken_0x1d1c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c5c) {
            ctx->pc = 0x1D1DE0u;
            goto label_1d1de0;
        }
    }
    ctx->pc = 0x1D1C64u;
label_1d1c64:
    // 0x1d1c64: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1c68:
    // 0x1d1c68: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d1c6c:
    // 0x1d1c6c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1c70:
    // 0x1d1c70: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d1c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d1c74:
    // 0x1d1c74: 0xc05d080  jal         func_174200
label_1d1c78:
    if (ctx->pc == 0x1D1C78u) {
        ctx->pc = 0x1D1C78u;
            // 0x1d1c78: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D1C7Cu;
        goto label_1d1c7c;
    }
    ctx->pc = 0x1D1C74u;
    SET_GPR_U32(ctx, 31, 0x1D1C7Cu);
    ctx->pc = 0x1D1C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C74u;
            // 0x1d1c78: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C7Cu; }
        if (ctx->pc != 0x1D1C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C7Cu; }
        if (ctx->pc != 0x1D1C7Cu) { return; }
    }
    ctx->pc = 0x1D1C7Cu;
label_1d1c7c:
    // 0x1d1c7c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1c80:
    // 0x1d1c80: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1c84:
    // 0x1d1c84: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1c88:
    // 0x1d1c88: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1c8c:
    // 0x1d1c8c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1d1c90:
    // 0x1d1c90: 0xc065508  jal         func_195420
label_1d1c94:
    if (ctx->pc == 0x1D1C94u) {
        ctx->pc = 0x1D1C94u;
            // 0x1d1c94: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1C98u;
        goto label_1d1c98;
    }
    ctx->pc = 0x1D1C90u;
    SET_GPR_U32(ctx, 31, 0x1D1C98u);
    ctx->pc = 0x1D1C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C90u;
            // 0x1d1c94: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C98u; }
        if (ctx->pc != 0x1D1C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C98u; }
        if (ctx->pc != 0x1D1C98u) { return; }
    }
    ctx->pc = 0x1D1C98u;
label_1d1c98:
    // 0x1d1c98: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1c9c:
    // 0x1d1c9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1ca0:
    // 0x1d1ca0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1ca4:
    // 0x1d1ca4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1ca8:
    // 0x1d1ca8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1cac:
    // 0x1d1cac: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d1cb0:
    // 0x1d1cb0: 0xc065508  jal         func_195420
label_1d1cb4:
    if (ctx->pc == 0x1D1CB4u) {
        ctx->pc = 0x1D1CB4u;
            // 0x1d1cb4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1CB8u;
        goto label_1d1cb8;
    }
    ctx->pc = 0x1D1CB0u;
    SET_GPR_U32(ctx, 31, 0x1D1CB8u);
    ctx->pc = 0x1D1CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CB0u;
            // 0x1d1cb4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CB8u; }
        if (ctx->pc != 0x1D1CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CB8u; }
        if (ctx->pc != 0x1D1CB8u) { return; }
    }
    ctx->pc = 0x1D1CB8u;
label_1d1cb8:
    // 0x1d1cb8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1cbc:
    // 0x1d1cbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d1cc0:
    // 0x1d1cc0: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d1cc4:
    if (ctx->pc == 0x1D1CC4u) {
        ctx->pc = 0x1D1CC4u;
            // 0x1d1cc4: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1D1CC8u;
        goto label_1d1cc8;
    }
    ctx->pc = 0x1D1CC0u;
    {
        const bool branch_taken_0x1d1cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CC0u;
            // 0x1d1cc4: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cc0) {
            ctx->pc = 0x1D1DE0u;
            goto label_1d1de0;
        }
    }
    ctx->pc = 0x1D1CC8u;
label_1d1cc8:
    // 0x1d1cc8: 0xc065d00  jal         func_197400
label_1d1ccc:
    if (ctx->pc == 0x1D1CCCu) {
        ctx->pc = 0x1D1CD0u;
        goto label_1d1cd0;
    }
    ctx->pc = 0x1D1CC8u;
    SET_GPR_U32(ctx, 31, 0x1D1CD0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CD0u; }
        if (ctx->pc != 0x1D1CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CD0u; }
        if (ctx->pc != 0x1D1CD0u) { return; }
    }
    ctx->pc = 0x1D1CD0u;
label_1d1cd0:
    // 0x1d1cd0: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_1d1cd4:
    if (ctx->pc == 0x1D1CD4u) {
        ctx->pc = 0x1D1CD8u;
        goto label_1d1cd8;
    }
    ctx->pc = 0x1D1CD0u;
    {
        const bool branch_taken_0x1d1cd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d1cd0) {
            ctx->pc = 0x1D1D60u;
            goto label_1d1d60;
        }
    }
    ctx->pc = 0x1D1CD8u;
label_1d1cd8:
    // 0x1d1cd8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1cdc:
    // 0x1d1cdc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d1ce0:
    if (ctx->pc == 0x1D1CE0u) {
        ctx->pc = 0x1D1CE0u;
            // 0x1d1ce0: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->pc = 0x1D1CE4u;
        goto label_1d1ce4;
    }
    ctx->pc = 0x1D1CDCu;
    {
        const bool branch_taken_0x1d1cdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D1CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CDCu;
            // 0x1d1ce0: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cdc) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1CE4u;
label_1d1ce4:
    // 0x1d1ce4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d1ce8:
    if (ctx->pc == 0x1D1CE8u) {
        ctx->pc = 0x1D1CECu;
        goto label_1d1cec;
    }
    ctx->pc = 0x1D1CE4u;
    {
        const bool branch_taken_0x1d1ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ce4) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1CECu;
label_1d1cec:
    // 0x1d1cec: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1d1cf0:
    // 0x1d1cf0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1d1cf4:
    if (ctx->pc == 0x1D1CF4u) {
        ctx->pc = 0x1D1CF8u;
        goto label_1d1cf8;
    }
    ctx->pc = 0x1D1CF0u;
    {
        const bool branch_taken_0x1d1cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cf0) {
            ctx->pc = 0x1D1DE0u;
            goto label_1d1de0;
        }
    }
    ctx->pc = 0x1D1CF8u;
label_1d1cf8:
    // 0x1d1cf8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1cfc:
    // 0x1d1cfc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d1d00:
    // 0x1d1d00: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d04:
    // 0x1d1d04: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d1d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d1d08:
    // 0x1d1d08: 0xc05d080  jal         func_174200
label_1d1d0c:
    if (ctx->pc == 0x1D1D0Cu) {
        ctx->pc = 0x1D1D0Cu;
            // 0x1d1d0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D1D10u;
        goto label_1d1d10;
    }
    ctx->pc = 0x1D1D08u;
    SET_GPR_U32(ctx, 31, 0x1D1D10u);
    ctx->pc = 0x1D1D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D08u;
            // 0x1d1d0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D10u; }
        if (ctx->pc != 0x1D1D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D10u; }
        if (ctx->pc != 0x1D1D10u) { return; }
    }
    ctx->pc = 0x1D1D10u;
label_1d1d10:
    // 0x1d1d10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1d14:
    // 0x1d1d14: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1d18:
    // 0x1d1d18: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1d1c:
    // 0x1d1d1c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1d20:
    // 0x1d1d20: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1d1d24:
    // 0x1d1d24: 0xc065508  jal         func_195420
label_1d1d28:
    if (ctx->pc == 0x1D1D28u) {
        ctx->pc = 0x1D1D28u;
            // 0x1d1d28: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1D2Cu;
        goto label_1d1d2c;
    }
    ctx->pc = 0x1D1D24u;
    SET_GPR_U32(ctx, 31, 0x1D1D2Cu);
    ctx->pc = 0x1D1D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D24u;
            // 0x1d1d28: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D2Cu; }
        if (ctx->pc != 0x1D1D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D2Cu; }
        if (ctx->pc != 0x1D1D2Cu) { return; }
    }
    ctx->pc = 0x1D1D2Cu;
label_1d1d2c:
    // 0x1d1d2c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d1d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1d30:
    // 0x1d1d30: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1d34:
    // 0x1d1d34: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1d38:
    // 0x1d1d38: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1d3c:
    // 0x1d1d3c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1d40:
    // 0x1d1d40: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d1d44:
    // 0x1d1d44: 0xc065508  jal         func_195420
label_1d1d48:
    if (ctx->pc == 0x1D1D48u) {
        ctx->pc = 0x1D1D48u;
            // 0x1d1d48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1D4Cu;
        goto label_1d1d4c;
    }
    ctx->pc = 0x1D1D44u;
    SET_GPR_U32(ctx, 31, 0x1D1D4Cu);
    ctx->pc = 0x1D1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D44u;
            // 0x1d1d48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D4Cu; }
        if (ctx->pc != 0x1D1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D4Cu; }
        if (ctx->pc != 0x1D1D4Cu) { return; }
    }
    ctx->pc = 0x1D1D4Cu;
label_1d1d4c:
    // 0x1d1d4c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1d50:
    // 0x1d1d50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d1d54:
    // 0x1d1d54: 0x10000022  b           . + 4 + (0x22 << 2)
label_1d1d58:
    if (ctx->pc == 0x1D1D58u) {
        ctx->pc = 0x1D1D58u;
            // 0x1d1d58: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1D1D5Cu;
        goto label_1d1d5c;
    }
    ctx->pc = 0x1D1D54u;
    {
        const bool branch_taken_0x1d1d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D54u;
            // 0x1d1d58: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d54) {
            ctx->pc = 0x1D1DE0u;
            goto label_1d1de0;
        }
    }
    ctx->pc = 0x1D1D5Cu;
label_1d1d5c:
    // 0x1d1d5c: 0x0  nop
    ctx->pc = 0x1d1d5cu;
    // NOP
label_1d1d60:
    // 0x1d1d60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1d64:
    // 0x1d1d64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d1d68:
    // 0x1d1d68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d1d68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d1d6c:
    // 0x1d1d6c: 0x0  nop
    ctx->pc = 0x1d1d6cu;
    // NOP
label_1d1d70:
    // 0x1d1d70: 0x0  nop
    ctx->pc = 0x1d1d70u;
    // NOP
label_1d1d74:
    // 0x1d1d74: 0x1010  mfhi        $v0
    ctx->pc = 0x1d1d74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d1d78:
    // 0x1d1d78: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1d1d7c:
    if (ctx->pc == 0x1D1D7Cu) {
        ctx->pc = 0x1D1D80u;
        goto label_1d1d80;
    }
    ctx->pc = 0x1D1D78u;
    {
        const bool branch_taken_0x1d1d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d78) {
            ctx->pc = 0x1D1DE0u;
            goto label_1d1de0;
        }
    }
    ctx->pc = 0x1D1D80u;
label_1d1d80:
    // 0x1d1d80: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1d84:
    // 0x1d1d84: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1d1d88:
    // 0x1d1d88: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1d8c:
    // 0x1d1d8c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d1d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d1d90:
    // 0x1d1d90: 0xc05d080  jal         func_174200
label_1d1d94:
    if (ctx->pc == 0x1D1D94u) {
        ctx->pc = 0x1D1D94u;
            // 0x1d1d94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D1D98u;
        goto label_1d1d98;
    }
    ctx->pc = 0x1D1D90u;
    SET_GPR_U32(ctx, 31, 0x1D1D98u);
    ctx->pc = 0x1D1D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D90u;
            // 0x1d1d94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D98u; }
        if (ctx->pc != 0x1D1D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D98u; }
        if (ctx->pc != 0x1D1D98u) { return; }
    }
    ctx->pc = 0x1D1D98u;
label_1d1d98:
    // 0x1d1d98: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1d9c:
    // 0x1d1d9c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1da0:
    // 0x1d1da0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1da4:
    // 0x1d1da4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1da8:
    // 0x1d1da8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1d1dac:
    // 0x1d1dac: 0xc065508  jal         func_195420
label_1d1db0:
    if (ctx->pc == 0x1D1DB0u) {
        ctx->pc = 0x1D1DB0u;
            // 0x1d1db0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1DB4u;
        goto label_1d1db4;
    }
    ctx->pc = 0x1D1DACu;
    SET_GPR_U32(ctx, 31, 0x1D1DB4u);
    ctx->pc = 0x1D1DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DACu;
            // 0x1d1db0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB4u; }
        if (ctx->pc != 0x1D1DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DB4u; }
        if (ctx->pc != 0x1D1DB4u) { return; }
    }
    ctx->pc = 0x1D1DB4u;
label_1d1db4:
    // 0x1d1db4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d1db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1db8:
    // 0x1d1db8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1dbc:
    // 0x1d1dbc: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1dc0:
    // 0x1d1dc0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d1dc4:
    // 0x1d1dc4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1dc8:
    // 0x1d1dc8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d1dcc:
    // 0x1d1dcc: 0xc065508  jal         func_195420
label_1d1dd0:
    if (ctx->pc == 0x1D1DD0u) {
        ctx->pc = 0x1D1DD0u;
            // 0x1d1dd0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D1DD4u;
        goto label_1d1dd4;
    }
    ctx->pc = 0x1D1DCCu;
    SET_GPR_U32(ctx, 31, 0x1D1DD4u);
    ctx->pc = 0x1D1DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DCCu;
            // 0x1d1dd0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DD4u; }
        if (ctx->pc != 0x1D1DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1DD4u; }
        if (ctx->pc != 0x1D1DD4u) { return; }
    }
    ctx->pc = 0x1D1DD4u;
label_1d1dd4:
    // 0x1d1dd4: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1d1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1d1dd8:
    // 0x1d1dd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d1ddc:
    // 0x1d1ddc: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1d1ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1d1de0:
    // 0x1d1de0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1de4:
    // 0x1d1de4: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1d1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1d1de8:
    // 0x1d1de8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1d1dec:
    if (ctx->pc == 0x1D1DECu) {
        ctx->pc = 0x1D1DECu;
            // 0x1d1dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D1DF0u;
        goto label_1d1df0;
    }
    ctx->pc = 0x1D1DE8u;
    {
        const bool branch_taken_0x1d1de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DE8u;
            // 0x1d1dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1de8) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1DF0u;
label_1d1df0:
    // 0x1d1df0: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d1df4:
    // 0x1d1df4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d1df8:
    // 0x1d1df8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d1dfc:
    // 0x1d1dfc: 0xc065590  jal         func_195640
label_1d1e00:
    if (ctx->pc == 0x1D1E00u) {
        ctx->pc = 0x1D1E00u;
            // 0x1d1e00: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D1E04u;
        goto label_1d1e04;
    }
    ctx->pc = 0x1D1DFCu;
    SET_GPR_U32(ctx, 31, 0x1D1E04u);
    ctx->pc = 0x1D1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DFCu;
            // 0x1d1e00: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E04u; }
        if (ctx->pc != 0x1D1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E04u; }
        if (ctx->pc != 0x1D1E04u) { return; }
    }
    ctx->pc = 0x1D1E04u;
label_1d1e04:
    // 0x1d1e04: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d1e08:
    if (ctx->pc == 0x1D1E08u) {
        ctx->pc = 0x1D1E0Cu;
        goto label_1d1e0c;
    }
    ctx->pc = 0x1D1E04u;
    {
        const bool branch_taken_0x1d1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e04) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E0Cu;
label_1d1e0c:
    // 0x1d1e0c: 0x0  nop
    ctx->pc = 0x1d1e0cu;
    // NOP
label_1d1e10:
    // 0x1d1e10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1e14:
    // 0x1d1e14: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1d1e18:
    if (ctx->pc == 0x1D1E18u) {
        ctx->pc = 0x1D1E1Cu;
        goto label_1d1e1c;
    }
    ctx->pc = 0x1D1E14u;
    {
        const bool branch_taken_0x1d1e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1e14) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E1Cu;
label_1d1e1c:
    // 0x1d1e1c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e20:
    // 0x1d1e20: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d1e24:
    // 0x1d1e24: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d1e24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d1e28:
    // 0x1d1e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1e2c:
    // 0x1d1e2c: 0x0  nop
    ctx->pc = 0x1d1e2cu;
    // NOP
label_1d1e30:
    // 0x1d1e30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d1e30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d1e34:
    // 0x1d1e34: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d1e38:
    // 0x1d1e38: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1e3c:
    // 0x1d1e3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d1e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d1e40:
    // 0x1d1e40: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d1e44:
    // 0x1d1e44: 0x0  nop
    ctx->pc = 0x1d1e44u;
    // NOP
label_1d1e48:
    // 0x1d1e48: 0xc04b788  jal         func_12DE20
label_1d1e4c:
    if (ctx->pc == 0x1D1E4Cu) {
        ctx->pc = 0x1D1E4Cu;
            // 0x1d1e4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D1E50u;
        goto label_1d1e50;
    }
    ctx->pc = 0x1D1E48u;
    SET_GPR_U32(ctx, 31, 0x1D1E50u);
    ctx->pc = 0x1D1E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E48u;
            // 0x1d1e4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E50u; }
        if (ctx->pc != 0x1D1E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E50u; }
        if (ctx->pc != 0x1D1E50u) { return; }
    }
    ctx->pc = 0x1D1E50u;
label_1d1e50:
    // 0x1d1e50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1e54:
    // 0x1d1e54: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1e58:
    // 0x1d1e58: 0xc04b7da  jal         func_12DF68
label_1d1e5c:
    if (ctx->pc == 0x1D1E5Cu) {
        ctx->pc = 0x1D1E5Cu;
            // 0x1d1e5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E60u;
        goto label_1d1e60;
    }
    ctx->pc = 0x1D1E58u;
    SET_GPR_U32(ctx, 31, 0x1D1E60u);
    ctx->pc = 0x1D1E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E58u;
            // 0x1d1e5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E60u; }
        if (ctx->pc != 0x1D1E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E60u; }
        if (ctx->pc != 0x1D1E60u) { return; }
    }
    ctx->pc = 0x1D1E60u;
label_1d1e60:
    // 0x1d1e60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1e64:
    // 0x1d1e64: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d1e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1e68:
    // 0x1d1e68: 0xc04b804  jal         func_12E010
label_1d1e6c:
    if (ctx->pc == 0x1D1E6Cu) {
        ctx->pc = 0x1D1E6Cu;
            // 0x1d1e6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E70u;
        goto label_1d1e70;
    }
    ctx->pc = 0x1D1E68u;
    SET_GPR_U32(ctx, 31, 0x1D1E70u);
    ctx->pc = 0x1D1E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E68u;
            // 0x1d1e6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E70u; }
        if (ctx->pc != 0x1D1E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E70u; }
        if (ctx->pc != 0x1D1E70u) { return; }
    }
    ctx->pc = 0x1D1E70u;
label_1d1e70:
    // 0x1d1e70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1e74:
    // 0x1d1e74: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d1e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1e78:
    // 0x1d1e78: 0xc04b7b0  jal         func_12DEC0
label_1d1e7c:
    if (ctx->pc == 0x1D1E7Cu) {
        ctx->pc = 0x1D1E7Cu;
            // 0x1d1e7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E80u;
        goto label_1d1e80;
    }
    ctx->pc = 0x1D1E78u;
    SET_GPR_U32(ctx, 31, 0x1D1E80u);
    ctx->pc = 0x1D1E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E78u;
            // 0x1d1e7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E80u; }
        if (ctx->pc != 0x1D1E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E80u; }
        if (ctx->pc != 0x1D1E80u) { return; }
    }
    ctx->pc = 0x1D1E80u;
label_1d1e80:
    // 0x1d1e80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1e84:
    // 0x1d1e84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d1e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e88:
    // 0x1d1e88: 0xc04b75e  jal         func_12DD78
label_1d1e8c:
    if (ctx->pc == 0x1D1E8Cu) {
        ctx->pc = 0x1D1E8Cu;
            // 0x1d1e8c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1D1E90u;
        goto label_1d1e90;
    }
    ctx->pc = 0x1D1E88u;
    SET_GPR_U32(ctx, 31, 0x1D1E90u);
    ctx->pc = 0x1D1E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E88u;
            // 0x1d1e8c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E90u; }
        if (ctx->pc != 0x1D1E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E90u; }
        if (ctx->pc != 0x1D1E90u) { return; }
    }
    ctx->pc = 0x1D1E90u;
label_1d1e90:
    // 0x1d1e90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d1e94:
    // 0x1d1e94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d1e98:
    // 0x1d1e98: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d1e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d1e9c:
    // 0x1d1e9c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1d1ea0:
    if (ctx->pc == 0x1D1EA0u) {
        ctx->pc = 0x1D1EA4u;
        goto label_1d1ea4;
    }
    ctx->pc = 0x1D1E9Cu;
    {
        const bool branch_taken_0x1d1e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e9c) {
            ctx->pc = 0x1D1EF0u;
            goto label_1d1ef0;
        }
    }
    ctx->pc = 0x1D1EA4u;
label_1d1ea4:
    // 0x1d1ea4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1d1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d1ea8:
    // 0x1d1ea8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d1eac:
    if (ctx->pc == 0x1D1EACu) {
        ctx->pc = 0x1D1EB0u;
        goto label_1d1eb0;
    }
    ctx->pc = 0x1D1EA8u;
    {
        const bool branch_taken_0x1d1ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ea8) {
            ctx->pc = 0x1D1EC0u;
            goto label_1d1ec0;
        }
    }
    ctx->pc = 0x1D1EB0u;
label_1d1eb0:
    // 0x1d1eb0: 0xc0604f0  jal         func_1813C0
label_1d1eb4:
    if (ctx->pc == 0x1D1EB4u) {
        ctx->pc = 0x1D1EB4u;
            // 0x1d1eb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D1EB8u;
        goto label_1d1eb8;
    }
    ctx->pc = 0x1D1EB0u;
    SET_GPR_U32(ctx, 31, 0x1D1EB8u);
    ctx->pc = 0x1D1EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EB0u;
            // 0x1d1eb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EB8u; }
        if (ctx->pc != 0x1D1EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EB8u; }
        if (ctx->pc != 0x1D1EB8u) { return; }
    }
    ctx->pc = 0x1D1EB8u;
label_1d1eb8:
    // 0x1d1eb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d1ebc:
    if (ctx->pc == 0x1D1EBCu) {
        ctx->pc = 0x1D1EC0u;
        goto label_1d1ec0;
    }
    ctx->pc = 0x1D1EB8u;
    {
        const bool branch_taken_0x1d1eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1eb8) {
            ctx->pc = 0x1D1EC8u;
            goto label_1d1ec8;
        }
    }
    ctx->pc = 0x1D1EC0u;
label_1d1ec0:
    // 0x1d1ec0: 0xc0604dc  jal         func_181370
label_1d1ec4:
    if (ctx->pc == 0x1D1EC4u) {
        ctx->pc = 0x1D1EC4u;
            // 0x1d1ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D1EC8u;
        goto label_1d1ec8;
    }
    ctx->pc = 0x1D1EC0u;
    SET_GPR_U32(ctx, 31, 0x1D1EC8u);
    ctx->pc = 0x1D1EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EC0u;
            // 0x1d1ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EC8u; }
        if (ctx->pc != 0x1D1EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EC8u; }
        if (ctx->pc != 0x1D1EC8u) { return; }
    }
    ctx->pc = 0x1D1EC8u;
label_1d1ec8:
    // 0x1d1ec8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1d1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d1ecc:
    // 0x1d1ecc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d1ed0:
    if (ctx->pc == 0x1D1ED0u) {
        ctx->pc = 0x1D1ED4u;
        goto label_1d1ed4;
    }
    ctx->pc = 0x1D1ECCu;
    {
        const bool branch_taken_0x1d1ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ecc) {
            ctx->pc = 0x1D1EE0u;
            goto label_1d1ee0;
        }
    }
    ctx->pc = 0x1D1ED4u;
label_1d1ed4:
    // 0x1d1ed4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d1ed8:
    if (ctx->pc == 0x1D1ED8u) {
        ctx->pc = 0x1D1ED8u;
            // 0x1d1ed8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1D1EDCu;
        goto label_1d1edc;
    }
    ctx->pc = 0x1D1ED4u;
    {
        const bool branch_taken_0x1d1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1ED4u;
            // 0x1d1ed8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ed4) {
            ctx->pc = 0x1D1F00u;
            goto label_1d1f00;
        }
    }
    ctx->pc = 0x1D1EDCu;
label_1d1edc:
    // 0x1d1edc: 0x0  nop
    ctx->pc = 0x1d1edcu;
    // NOP
label_1d1ee0:
    // 0x1d1ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1ee4:
    // 0x1d1ee4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d1ee8:
    if (ctx->pc == 0x1D1EE8u) {
        ctx->pc = 0x1D1EE8u;
            // 0x1d1ee8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1D1EECu;
        goto label_1d1eec;
    }
    ctx->pc = 0x1D1EE4u;
    {
        const bool branch_taken_0x1d1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EE4u;
            // 0x1d1ee8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ee4) {
            ctx->pc = 0x1D1F00u;
            goto label_1d1f00;
        }
    }
    ctx->pc = 0x1D1EECu;
label_1d1eec:
    // 0x1d1eec: 0x0  nop
    ctx->pc = 0x1d1eecu;
    // NOP
label_1d1ef0:
    // 0x1d1ef0: 0xc0604dc  jal         func_181370
label_1d1ef4:
    if (ctx->pc == 0x1D1EF4u) {
        ctx->pc = 0x1D1EF4u;
            // 0x1d1ef4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D1EF8u;
        goto label_1d1ef8;
    }
    ctx->pc = 0x1D1EF0u;
    SET_GPR_U32(ctx, 31, 0x1D1EF8u);
    ctx->pc = 0x1D1EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EF0u;
            // 0x1d1ef4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EF8u; }
        if (ctx->pc != 0x1D1EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1EF8u; }
        if (ctx->pc != 0x1D1EF8u) { return; }
    }
    ctx->pc = 0x1D1EF8u;
label_1d1ef8:
    // 0x1d1ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1efc:
    // 0x1d1efc: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1d1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1d1f00:
    // 0x1d1f00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d1f04:
    // 0x1d1f04: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d1f08:
    // 0x1d1f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f0c:
    // 0x1d1f0c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d1f10:
    // 0x1d1f10: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d1f14:
    // 0x1d1f14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d1f18:
    // 0x1d1f18: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1d1f1c:
    // 0x1d1f1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1f20:
    // 0x1d1f20: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1f24:
    // 0x1d1f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d1f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1f28:
    // 0x1d1f28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d1f2c:
    if (ctx->pc == 0x1D1F2Cu) {
        ctx->pc = 0x1D1F2Cu;
            // 0x1d1f2c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1D1F30u;
        goto label_1d1f30;
    }
    ctx->pc = 0x1D1F28u;
    {
        const bool branch_taken_0x1d1f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F28u;
            // 0x1d1f2c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f28) {
            ctx->pc = 0x1D1F48u;
            goto label_1d1f48;
        }
    }
    ctx->pc = 0x1D1F30u;
label_1d1f30:
    // 0x1d1f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1f34:
    // 0x1d1f34: 0x0  nop
    ctx->pc = 0x1d1f34u;
    // NOP
label_1d1f38:
    // 0x1d1f38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1f38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d1f3c:
    // 0x1d1f3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1d1f40:
    if (ctx->pc == 0x1D1F40u) {
        ctx->pc = 0x1D1F44u;
        goto label_1d1f44;
    }
    ctx->pc = 0x1D1F3Cu;
    {
        const bool branch_taken_0x1d1f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1f3c) {
            ctx->pc = 0x1D1F60u;
            goto label_1d1f60;
        }
    }
    ctx->pc = 0x1D1F44u;
label_1d1f44:
    // 0x1d1f44: 0x0  nop
    ctx->pc = 0x1d1f44u;
    // NOP
label_1d1f48:
    // 0x1d1f48: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d1f4c:
    // 0x1d1f4c: 0x40f809  jalr        $v0
label_1d1f50:
    if (ctx->pc == 0x1D1F50u) {
        ctx->pc = 0x1D1F50u;
            // 0x1d1f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F54u;
        goto label_1d1f54;
    }
    ctx->pc = 0x1D1F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1F54u);
        ctx->pc = 0x1D1F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F4Cu;
            // 0x1d1f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1230u: goto label_1d1230;
            case 0x1D1234u: goto label_1d1234;
            case 0x1D1238u: goto label_1d1238;
            case 0x1D123Cu: goto label_1d123c;
            case 0x1D1240u: goto label_1d1240;
            case 0x1D1244u: goto label_1d1244;
            case 0x1D1248u: goto label_1d1248;
            case 0x1D124Cu: goto label_1d124c;
            case 0x1D1250u: goto label_1d1250;
            case 0x1D1254u: goto label_1d1254;
            case 0x1D1258u: goto label_1d1258;
            case 0x1D125Cu: goto label_1d125c;
            case 0x1D1260u: goto label_1d1260;
            case 0x1D1264u: goto label_1d1264;
            case 0x1D1268u: goto label_1d1268;
            case 0x1D126Cu: goto label_1d126c;
            case 0x1D1270u: goto label_1d1270;
            case 0x1D1274u: goto label_1d1274;
            case 0x1D1278u: goto label_1d1278;
            case 0x1D127Cu: goto label_1d127c;
            case 0x1D1280u: goto label_1d1280;
            case 0x1D1284u: goto label_1d1284;
            case 0x1D1288u: goto label_1d1288;
            case 0x1D128Cu: goto label_1d128c;
            case 0x1D1290u: goto label_1d1290;
            case 0x1D1294u: goto label_1d1294;
            case 0x1D1298u: goto label_1d1298;
            case 0x1D129Cu: goto label_1d129c;
            case 0x1D12A0u: goto label_1d12a0;
            case 0x1D12A4u: goto label_1d12a4;
            case 0x1D12A8u: goto label_1d12a8;
            case 0x1D12ACu: goto label_1d12ac;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12B4u: goto label_1d12b4;
            case 0x1D12B8u: goto label_1d12b8;
            case 0x1D12BCu: goto label_1d12bc;
            case 0x1D12C0u: goto label_1d12c0;
            case 0x1D12C4u: goto label_1d12c4;
            case 0x1D12C8u: goto label_1d12c8;
            case 0x1D12CCu: goto label_1d12cc;
            case 0x1D12D0u: goto label_1d12d0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12D8u: goto label_1d12d8;
            case 0x1D12DCu: goto label_1d12dc;
            case 0x1D12E0u: goto label_1d12e0;
            case 0x1D12E4u: goto label_1d12e4;
            case 0x1D12E8u: goto label_1d12e8;
            case 0x1D12ECu: goto label_1d12ec;
            case 0x1D12F0u: goto label_1d12f0;
            case 0x1D12F4u: goto label_1d12f4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D12FCu: goto label_1d12fc;
            case 0x1D1300u: goto label_1d1300;
            case 0x1D1304u: goto label_1d1304;
            case 0x1D1308u: goto label_1d1308;
            case 0x1D130Cu: goto label_1d130c;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1314u: goto label_1d1314;
            case 0x1D1318u: goto label_1d1318;
            case 0x1D131Cu: goto label_1d131c;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1324u: goto label_1d1324;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D132Cu: goto label_1d132c;
            case 0x1D1330u: goto label_1d1330;
            case 0x1D1334u: goto label_1d1334;
            case 0x1D1338u: goto label_1d1338;
            case 0x1D133Cu: goto label_1d133c;
            case 0x1D1340u: goto label_1d1340;
            case 0x1D1344u: goto label_1d1344;
            case 0x1D1348u: goto label_1d1348;
            case 0x1D134Cu: goto label_1d134c;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1354u: goto label_1d1354;
            case 0x1D1358u: goto label_1d1358;
            case 0x1D135Cu: goto label_1d135c;
            case 0x1D1360u: goto label_1d1360;
            case 0x1D1364u: goto label_1d1364;
            case 0x1D1368u: goto label_1d1368;
            case 0x1D136Cu: goto label_1d136c;
            case 0x1D1370u: goto label_1d1370;
            case 0x1D1374u: goto label_1d1374;
            case 0x1D1378u: goto label_1d1378;
            case 0x1D137Cu: goto label_1d137c;
            case 0x1D1380u: goto label_1d1380;
            case 0x1D1384u: goto label_1d1384;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D138Cu: goto label_1d138c;
            case 0x1D1390u: goto label_1d1390;
            case 0x1D1394u: goto label_1d1394;
            case 0x1D1398u: goto label_1d1398;
            case 0x1D139Cu: goto label_1d139c;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13A4u: goto label_1d13a4;
            case 0x1D13A8u: goto label_1d13a8;
            case 0x1D13ACu: goto label_1d13ac;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B4u: goto label_1d13b4;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13BCu: goto label_1d13bc;
            case 0x1D13C0u: goto label_1d13c0;
            case 0x1D13C4u: goto label_1d13c4;
            case 0x1D13C8u: goto label_1d13c8;
            case 0x1D13CCu: goto label_1d13cc;
            case 0x1D13D0u: goto label_1d13d0;
            case 0x1D13D4u: goto label_1d13d4;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13DCu: goto label_1d13dc;
            case 0x1D13E0u: goto label_1d13e0;
            case 0x1D13E4u: goto label_1d13e4;
            case 0x1D13E8u: goto label_1d13e8;
            case 0x1D13ECu: goto label_1d13ec;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            case 0x1D13F8u: goto label_1d13f8;
            case 0x1D13FCu: goto label_1d13fc;
            case 0x1D1400u: goto label_1d1400;
            case 0x1D1404u: goto label_1d1404;
            case 0x1D1408u: goto label_1d1408;
            case 0x1D140Cu: goto label_1d140c;
            case 0x1D1410u: goto label_1d1410;
            case 0x1D1414u: goto label_1d1414;
            case 0x1D1418u: goto label_1d1418;
            case 0x1D141Cu: goto label_1d141c;
            case 0x1D1420u: goto label_1d1420;
            case 0x1D1424u: goto label_1d1424;
            case 0x1D1428u: goto label_1d1428;
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D1430u: goto label_1d1430;
            case 0x1D1434u: goto label_1d1434;
            case 0x1D1438u: goto label_1d1438;
            case 0x1D143Cu: goto label_1d143c;
            case 0x1D1440u: goto label_1d1440;
            case 0x1D1444u: goto label_1d1444;
            case 0x1D1448u: goto label_1d1448;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1450u: goto label_1d1450;
            case 0x1D1454u: goto label_1d1454;
            case 0x1D1458u: goto label_1d1458;
            case 0x1D145Cu: goto label_1d145c;
            case 0x1D1460u: goto label_1d1460;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1468u: goto label_1d1468;
            case 0x1D146Cu: goto label_1d146c;
            case 0x1D1470u: goto label_1d1470;
            case 0x1D1474u: goto label_1d1474;
            case 0x1D1478u: goto label_1d1478;
            case 0x1D147Cu: goto label_1d147c;
            case 0x1D1480u: goto label_1d1480;
            case 0x1D1484u: goto label_1d1484;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D148Cu: goto label_1d148c;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D1494u: goto label_1d1494;
            case 0x1D1498u: goto label_1d1498;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A0u: goto label_1d14a0;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14A8u: goto label_1d14a8;
            case 0x1D14ACu: goto label_1d14ac;
            case 0x1D14B0u: goto label_1d14b0;
            case 0x1D14B4u: goto label_1d14b4;
            case 0x1D14B8u: goto label_1d14b8;
            case 0x1D14BCu: goto label_1d14bc;
            case 0x1D14C0u: goto label_1d14c0;
            case 0x1D14C4u: goto label_1d14c4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14CCu: goto label_1d14cc;
            case 0x1D14D0u: goto label_1d14d0;
            case 0x1D14D4u: goto label_1d14d4;
            case 0x1D14D8u: goto label_1d14d8;
            case 0x1D14DCu: goto label_1d14dc;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14E4u: goto label_1d14e4;
            case 0x1D14E8u: goto label_1d14e8;
            case 0x1D14ECu: goto label_1d14ec;
            case 0x1D14F0u: goto label_1d14f0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            case 0x1D14FCu: goto label_1d14fc;
            case 0x1D1500u: goto label_1d1500;
            case 0x1D1504u: goto label_1d1504;
            case 0x1D1508u: goto label_1d1508;
            case 0x1D150Cu: goto label_1d150c;
            case 0x1D1510u: goto label_1d1510;
            case 0x1D1514u: goto label_1d1514;
            case 0x1D1518u: goto label_1d1518;
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D1520u: goto label_1d1520;
            case 0x1D1524u: goto label_1d1524;
            case 0x1D1528u: goto label_1d1528;
            case 0x1D152Cu: goto label_1d152c;
            case 0x1D1530u: goto label_1d1530;
            case 0x1D1534u: goto label_1d1534;
            case 0x1D1538u: goto label_1d1538;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1540u: goto label_1d1540;
            case 0x1D1544u: goto label_1d1544;
            case 0x1D1548u: goto label_1d1548;
            case 0x1D154Cu: goto label_1d154c;
            case 0x1D1550u: goto label_1d1550;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1558u: goto label_1d1558;
            case 0x1D155Cu: goto label_1d155c;
            case 0x1D1560u: goto label_1d1560;
            case 0x1D1564u: goto label_1d1564;
            case 0x1D1568u: goto label_1d1568;
            case 0x1D156Cu: goto label_1d156c;
            case 0x1D1570u: goto label_1d1570;
            case 0x1D1574u: goto label_1d1574;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D157Cu: goto label_1d157c;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1584u: goto label_1d1584;
            case 0x1D1588u: goto label_1d1588;
            case 0x1D158Cu: goto label_1d158c;
            case 0x1D1590u: goto label_1d1590;
            case 0x1D1594u: goto label_1d1594;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D159Cu: goto label_1d159c;
            case 0x1D15A0u: goto label_1d15a0;
            case 0x1D15A4u: goto label_1d15a4;
            case 0x1D15A8u: goto label_1d15a8;
            case 0x1D15ACu: goto label_1d15ac;
            case 0x1D15B0u: goto label_1d15b0;
            case 0x1D15B4u: goto label_1d15b4;
            case 0x1D15B8u: goto label_1d15b8;
            case 0x1D15BCu: goto label_1d15bc;
            case 0x1D15C0u: goto label_1d15c0;
            case 0x1D15C4u: goto label_1d15c4;
            case 0x1D15C8u: goto label_1d15c8;
            case 0x1D15CCu: goto label_1d15cc;
            case 0x1D15D0u: goto label_1d15d0;
            case 0x1D15D4u: goto label_1d15d4;
            case 0x1D15D8u: goto label_1d15d8;
            case 0x1D15DCu: goto label_1d15dc;
            case 0x1D15E0u: goto label_1d15e0;
            case 0x1D15E4u: goto label_1d15e4;
            case 0x1D15E8u: goto label_1d15e8;
            case 0x1D15ECu: goto label_1d15ec;
            case 0x1D15F0u: goto label_1d15f0;
            case 0x1D15F4u: goto label_1d15f4;
            case 0x1D15F8u: goto label_1d15f8;
            case 0x1D15FCu: goto label_1d15fc;
            case 0x1D1600u: goto label_1d1600;
            case 0x1D1604u: goto label_1d1604;
            case 0x1D1608u: goto label_1d1608;
            case 0x1D160Cu: goto label_1d160c;
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1614u: goto label_1d1614;
            case 0x1D1618u: goto label_1d1618;
            case 0x1D161Cu: goto label_1d161c;
            case 0x1D1620u: goto label_1d1620;
            case 0x1D1624u: goto label_1d1624;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D162Cu: goto label_1d162c;
            case 0x1D1630u: goto label_1d1630;
            case 0x1D1634u: goto label_1d1634;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D163Cu: goto label_1d163c;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1644u: goto label_1d1644;
            case 0x1D1648u: goto label_1d1648;
            case 0x1D164Cu: goto label_1d164c;
            case 0x1D1650u: goto label_1d1650;
            case 0x1D1654u: goto label_1d1654;
            case 0x1D1658u: goto label_1d1658;
            case 0x1D165Cu: goto label_1d165c;
            case 0x1D1660u: goto label_1d1660;
            case 0x1D1664u: goto label_1d1664;
            case 0x1D1668u: goto label_1d1668;
            case 0x1D166Cu: goto label_1d166c;
            case 0x1D1670u: goto label_1d1670;
            case 0x1D1674u: goto label_1d1674;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D167Cu: goto label_1d167c;
            case 0x1D1680u: goto label_1d1680;
            case 0x1D1684u: goto label_1d1684;
            case 0x1D1688u: goto label_1d1688;
            case 0x1D168Cu: goto label_1d168c;
            case 0x1D1690u: goto label_1d1690;
            case 0x1D1694u: goto label_1d1694;
            case 0x1D1698u: goto label_1d1698;
            case 0x1D169Cu: goto label_1d169c;
            case 0x1D16A0u: goto label_1d16a0;
            case 0x1D16A4u: goto label_1d16a4;
            case 0x1D16A8u: goto label_1d16a8;
            case 0x1D16ACu: goto label_1d16ac;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16B8u: goto label_1d16b8;
            case 0x1D16BCu: goto label_1d16bc;
            case 0x1D16C0u: goto label_1d16c0;
            case 0x1D16C4u: goto label_1d16c4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16CCu: goto label_1d16cc;
            case 0x1D16D0u: goto label_1d16d0;
            case 0x1D16D4u: goto label_1d16d4;
            case 0x1D16D8u: goto label_1d16d8;
            case 0x1D16DCu: goto label_1d16dc;
            case 0x1D16E0u: goto label_1d16e0;
            case 0x1D16E4u: goto label_1d16e4;
            case 0x1D16E8u: goto label_1d16e8;
            case 0x1D16ECu: goto label_1d16ec;
            case 0x1D16F0u: goto label_1d16f0;
            case 0x1D16F4u: goto label_1d16f4;
            case 0x1D16F8u: goto label_1d16f8;
            case 0x1D16FCu: goto label_1d16fc;
            case 0x1D1700u: goto label_1d1700;
            case 0x1D1704u: goto label_1d1704;
            case 0x1D1708u: goto label_1d1708;
            case 0x1D170Cu: goto label_1d170c;
            case 0x1D1710u: goto label_1d1710;
            case 0x1D1714u: goto label_1d1714;
            case 0x1D1718u: goto label_1d1718;
            case 0x1D171Cu: goto label_1d171c;
            case 0x1D1720u: goto label_1d1720;
            case 0x1D1724u: goto label_1d1724;
            case 0x1D1728u: goto label_1d1728;
            case 0x1D172Cu: goto label_1d172c;
            case 0x1D1730u: goto label_1d1730;
            case 0x1D1734u: goto label_1d1734;
            case 0x1D1738u: goto label_1d1738;
            case 0x1D173Cu: goto label_1d173c;
            case 0x1D1740u: goto label_1d1740;
            case 0x1D1744u: goto label_1d1744;
            case 0x1D1748u: goto label_1d1748;
            case 0x1D174Cu: goto label_1d174c;
            case 0x1D1750u: goto label_1d1750;
            case 0x1D1754u: goto label_1d1754;
            case 0x1D1758u: goto label_1d1758;
            case 0x1D175Cu: goto label_1d175c;
            case 0x1D1760u: goto label_1d1760;
            case 0x1D1764u: goto label_1d1764;
            case 0x1D1768u: goto label_1d1768;
            case 0x1D176Cu: goto label_1d176c;
            case 0x1D1770u: goto label_1d1770;
            case 0x1D1774u: goto label_1d1774;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D177Cu: goto label_1d177c;
            case 0x1D1780u: goto label_1d1780;
            case 0x1D1784u: goto label_1d1784;
            case 0x1D1788u: goto label_1d1788;
            case 0x1D178Cu: goto label_1d178c;
            case 0x1D1790u: goto label_1d1790;
            case 0x1D1794u: goto label_1d1794;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D179Cu: goto label_1d179c;
            case 0x1D17A0u: goto label_1d17a0;
            case 0x1D17A4u: goto label_1d17a4;
            case 0x1D17A8u: goto label_1d17a8;
            case 0x1D17ACu: goto label_1d17ac;
            case 0x1D17B0u: goto label_1d17b0;
            case 0x1D17B4u: goto label_1d17b4;
            case 0x1D17B8u: goto label_1d17b8;
            case 0x1D17BCu: goto label_1d17bc;
            case 0x1D17C0u: goto label_1d17c0;
            case 0x1D17C4u: goto label_1d17c4;
            case 0x1D17C8u: goto label_1d17c8;
            case 0x1D17CCu: goto label_1d17cc;
            case 0x1D17D0u: goto label_1d17d0;
            case 0x1D17D4u: goto label_1d17d4;
            case 0x1D17D8u: goto label_1d17d8;
            case 0x1D17DCu: goto label_1d17dc;
            case 0x1D17E0u: goto label_1d17e0;
            case 0x1D17E4u: goto label_1d17e4;
            case 0x1D17E8u: goto label_1d17e8;
            case 0x1D17ECu: goto label_1d17ec;
            case 0x1D17F0u: goto label_1d17f0;
            case 0x1D17F4u: goto label_1d17f4;
            case 0x1D17F8u: goto label_1d17f8;
            case 0x1D17FCu: goto label_1d17fc;
            case 0x1D1800u: goto label_1d1800;
            case 0x1D1804u: goto label_1d1804;
            case 0x1D1808u: goto label_1d1808;
            case 0x1D180Cu: goto label_1d180c;
            case 0x1D1810u: goto label_1d1810;
            case 0x1D1814u: goto label_1d1814;
            case 0x1D1818u: goto label_1d1818;
            case 0x1D181Cu: goto label_1d181c;
            case 0x1D1820u: goto label_1d1820;
            case 0x1D1824u: goto label_1d1824;
            case 0x1D1828u: goto label_1d1828;
            case 0x1D182Cu: goto label_1d182c;
            case 0x1D1830u: goto label_1d1830;
            case 0x1D1834u: goto label_1d1834;
            case 0x1D1838u: goto label_1d1838;
            case 0x1D183Cu: goto label_1d183c;
            case 0x1D1840u: goto label_1d1840;
            case 0x1D1844u: goto label_1d1844;
            case 0x1D1848u: goto label_1d1848;
            case 0x1D184Cu: goto label_1d184c;
            case 0x1D1850u: goto label_1d1850;
            case 0x1D1854u: goto label_1d1854;
            case 0x1D1858u: goto label_1d1858;
            case 0x1D185Cu: goto label_1d185c;
            case 0x1D1860u: goto label_1d1860;
            case 0x1D1864u: goto label_1d1864;
            case 0x1D1868u: goto label_1d1868;
            case 0x1D186Cu: goto label_1d186c;
            case 0x1D1870u: goto label_1d1870;
            case 0x1D1874u: goto label_1d1874;
            case 0x1D1878u: goto label_1d1878;
            case 0x1D187Cu: goto label_1d187c;
            case 0x1D1880u: goto label_1d1880;
            case 0x1D1884u: goto label_1d1884;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1890u: goto label_1d1890;
            case 0x1D1894u: goto label_1d1894;
            case 0x1D1898u: goto label_1d1898;
            case 0x1D189Cu: goto label_1d189c;
            case 0x1D18A0u: goto label_1d18a0;
            case 0x1D18A4u: goto label_1d18a4;
            case 0x1D18A8u: goto label_1d18a8;
            case 0x1D18ACu: goto label_1d18ac;
            case 0x1D18B0u: goto label_1d18b0;
            case 0x1D18B4u: goto label_1d18b4;
            case 0x1D18B8u: goto label_1d18b8;
            case 0x1D18BCu: goto label_1d18bc;
            case 0x1D18C0u: goto label_1d18c0;
            case 0x1D18C4u: goto label_1d18c4;
            case 0x1D18C8u: goto label_1d18c8;
            case 0x1D18CCu: goto label_1d18cc;
            case 0x1D18D0u: goto label_1d18d0;
            case 0x1D18D4u: goto label_1d18d4;
            case 0x1D18D8u: goto label_1d18d8;
            case 0x1D18DCu: goto label_1d18dc;
            case 0x1D18E0u: goto label_1d18e0;
            case 0x1D18E4u: goto label_1d18e4;
            case 0x1D18E8u: goto label_1d18e8;
            case 0x1D18ECu: goto label_1d18ec;
            case 0x1D18F0u: goto label_1d18f0;
            case 0x1D18F4u: goto label_1d18f4;
            case 0x1D18F8u: goto label_1d18f8;
            case 0x1D18FCu: goto label_1d18fc;
            case 0x1D1900u: goto label_1d1900;
            case 0x1D1904u: goto label_1d1904;
            case 0x1D1908u: goto label_1d1908;
            case 0x1D190Cu: goto label_1d190c;
            case 0x1D1910u: goto label_1d1910;
            case 0x1D1914u: goto label_1d1914;
            case 0x1D1918u: goto label_1d1918;
            case 0x1D191Cu: goto label_1d191c;
            case 0x1D1920u: goto label_1d1920;
            case 0x1D1924u: goto label_1d1924;
            case 0x1D1928u: goto label_1d1928;
            case 0x1D192Cu: goto label_1d192c;
            case 0x1D1930u: goto label_1d1930;
            case 0x1D1934u: goto label_1d1934;
            case 0x1D1938u: goto label_1d1938;
            case 0x1D193Cu: goto label_1d193c;
            case 0x1D1940u: goto label_1d1940;
            case 0x1D1944u: goto label_1d1944;
            case 0x1D1948u: goto label_1d1948;
            case 0x1D194Cu: goto label_1d194c;
            case 0x1D1950u: goto label_1d1950;
            case 0x1D1954u: goto label_1d1954;
            case 0x1D1958u: goto label_1d1958;
            case 0x1D195Cu: goto label_1d195c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1964u: goto label_1d1964;
            case 0x1D1968u: goto label_1d1968;
            case 0x1D196Cu: goto label_1d196c;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D1974u: goto label_1d1974;
            case 0x1D1978u: goto label_1d1978;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D1980u: goto label_1d1980;
            case 0x1D1984u: goto label_1d1984;
            case 0x1D1988u: goto label_1d1988;
            case 0x1D198Cu: goto label_1d198c;
            case 0x1D1990u: goto label_1d1990;
            case 0x1D1994u: goto label_1d1994;
            case 0x1D1998u: goto label_1d1998;
            case 0x1D199Cu: goto label_1d199c;
            case 0x1D19A0u: goto label_1d19a0;
            case 0x1D19A4u: goto label_1d19a4;
            case 0x1D19A8u: goto label_1d19a8;
            case 0x1D19ACu: goto label_1d19ac;
            case 0x1D19B0u: goto label_1d19b0;
            case 0x1D19B4u: goto label_1d19b4;
            case 0x1D19B8u: goto label_1d19b8;
            case 0x1D19BCu: goto label_1d19bc;
            case 0x1D19C0u: goto label_1d19c0;
            case 0x1D19C4u: goto label_1d19c4;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D19CCu: goto label_1d19cc;
            case 0x1D19D0u: goto label_1d19d0;
            case 0x1D19D4u: goto label_1d19d4;
            case 0x1D19D8u: goto label_1d19d8;
            case 0x1D19DCu: goto label_1d19dc;
            case 0x1D19E0u: goto label_1d19e0;
            case 0x1D19E4u: goto label_1d19e4;
            case 0x1D19E8u: goto label_1d19e8;
            case 0x1D19ECu: goto label_1d19ec;
            case 0x1D19F0u: goto label_1d19f0;
            case 0x1D19F4u: goto label_1d19f4;
            case 0x1D19F8u: goto label_1d19f8;
            case 0x1D19FCu: goto label_1d19fc;
            case 0x1D1A00u: goto label_1d1a00;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A08u: goto label_1d1a08;
            case 0x1D1A0Cu: goto label_1d1a0c;
            case 0x1D1A10u: goto label_1d1a10;
            case 0x1D1A14u: goto label_1d1a14;
            case 0x1D1A18u: goto label_1d1a18;
            case 0x1D1A1Cu: goto label_1d1a1c;
            case 0x1D1A20u: goto label_1d1a20;
            case 0x1D1A24u: goto label_1d1a24;
            case 0x1D1A28u: goto label_1d1a28;
            case 0x1D1A2Cu: goto label_1d1a2c;
            case 0x1D1A30u: goto label_1d1a30;
            case 0x1D1A34u: goto label_1d1a34;
            case 0x1D1A38u: goto label_1d1a38;
            case 0x1D1A3Cu: goto label_1d1a3c;
            case 0x1D1A40u: goto label_1d1a40;
            case 0x1D1A44u: goto label_1d1a44;
            case 0x1D1A48u: goto label_1d1a48;
            case 0x1D1A4Cu: goto label_1d1a4c;
            case 0x1D1A50u: goto label_1d1a50;
            case 0x1D1A54u: goto label_1d1a54;
            case 0x1D1A58u: goto label_1d1a58;
            case 0x1D1A5Cu: goto label_1d1a5c;
            case 0x1D1A60u: goto label_1d1a60;
            case 0x1D1A64u: goto label_1d1a64;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A6Cu: goto label_1d1a6c;
            case 0x1D1A70u: goto label_1d1a70;
            case 0x1D1A74u: goto label_1d1a74;
            case 0x1D1A78u: goto label_1d1a78;
            case 0x1D1A7Cu: goto label_1d1a7c;
            case 0x1D1A80u: goto label_1d1a80;
            case 0x1D1A84u: goto label_1d1a84;
            case 0x1D1A88u: goto label_1d1a88;
            case 0x1D1A8Cu: goto label_1d1a8c;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1A94u: goto label_1d1a94;
            case 0x1D1A98u: goto label_1d1a98;
            case 0x1D1A9Cu: goto label_1d1a9c;
            case 0x1D1AA0u: goto label_1d1aa0;
            case 0x1D1AA4u: goto label_1d1aa4;
            case 0x1D1AA8u: goto label_1d1aa8;
            case 0x1D1AACu: goto label_1d1aac;
            case 0x1D1AB0u: goto label_1d1ab0;
            case 0x1D1AB4u: goto label_1d1ab4;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1ABCu: goto label_1d1abc;
            case 0x1D1AC0u: goto label_1d1ac0;
            case 0x1D1AC4u: goto label_1d1ac4;
            case 0x1D1AC8u: goto label_1d1ac8;
            case 0x1D1ACCu: goto label_1d1acc;
            case 0x1D1AD0u: goto label_1d1ad0;
            case 0x1D1AD4u: goto label_1d1ad4;
            case 0x1D1AD8u: goto label_1d1ad8;
            case 0x1D1ADCu: goto label_1d1adc;
            case 0x1D1AE0u: goto label_1d1ae0;
            case 0x1D1AE4u: goto label_1d1ae4;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1AECu: goto label_1d1aec;
            case 0x1D1AF0u: goto label_1d1af0;
            case 0x1D1AF4u: goto label_1d1af4;
            case 0x1D1AF8u: goto label_1d1af8;
            case 0x1D1AFCu: goto label_1d1afc;
            case 0x1D1B00u: goto label_1d1b00;
            case 0x1D1B04u: goto label_1d1b04;
            case 0x1D1B08u: goto label_1d1b08;
            case 0x1D1B0Cu: goto label_1d1b0c;
            case 0x1D1B10u: goto label_1d1b10;
            case 0x1D1B14u: goto label_1d1b14;
            case 0x1D1B18u: goto label_1d1b18;
            case 0x1D1B1Cu: goto label_1d1b1c;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B24u: goto label_1d1b24;
            case 0x1D1B28u: goto label_1d1b28;
            case 0x1D1B2Cu: goto label_1d1b2c;
            case 0x1D1B30u: goto label_1d1b30;
            case 0x1D1B34u: goto label_1d1b34;
            case 0x1D1B38u: goto label_1d1b38;
            case 0x1D1B3Cu: goto label_1d1b3c;
            case 0x1D1B40u: goto label_1d1b40;
            case 0x1D1B44u: goto label_1d1b44;
            case 0x1D1B48u: goto label_1d1b48;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B50u: goto label_1d1b50;
            case 0x1D1B54u: goto label_1d1b54;
            case 0x1D1B58u: goto label_1d1b58;
            case 0x1D1B5Cu: goto label_1d1b5c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B64u: goto label_1d1b64;
            case 0x1D1B68u: goto label_1d1b68;
            case 0x1D1B6Cu: goto label_1d1b6c;
            case 0x1D1B70u: goto label_1d1b70;
            case 0x1D1B74u: goto label_1d1b74;
            case 0x1D1B78u: goto label_1d1b78;
            case 0x1D1B7Cu: goto label_1d1b7c;
            case 0x1D1B80u: goto label_1d1b80;
            case 0x1D1B84u: goto label_1d1b84;
            case 0x1D1B88u: goto label_1d1b88;
            case 0x1D1B8Cu: goto label_1d1b8c;
            case 0x1D1B90u: goto label_1d1b90;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1B98u: goto label_1d1b98;
            case 0x1D1B9Cu: goto label_1d1b9c;
            case 0x1D1BA0u: goto label_1d1ba0;
            case 0x1D1BA4u: goto label_1d1ba4;
            case 0x1D1BA8u: goto label_1d1ba8;
            case 0x1D1BACu: goto label_1d1bac;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BB4u: goto label_1d1bb4;
            case 0x1D1BB8u: goto label_1d1bb8;
            case 0x1D1BBCu: goto label_1d1bbc;
            case 0x1D1BC0u: goto label_1d1bc0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1BC8u: goto label_1d1bc8;
            case 0x1D1BCCu: goto label_1d1bcc;
            case 0x1D1BD0u: goto label_1d1bd0;
            case 0x1D1BD4u: goto label_1d1bd4;
            case 0x1D1BD8u: goto label_1d1bd8;
            case 0x1D1BDCu: goto label_1d1bdc;
            case 0x1D1BE0u: goto label_1d1be0;
            case 0x1D1BE4u: goto label_1d1be4;
            case 0x1D1BE8u: goto label_1d1be8;
            case 0x1D1BECu: goto label_1d1bec;
            case 0x1D1BF0u: goto label_1d1bf0;
            case 0x1D1BF4u: goto label_1d1bf4;
            case 0x1D1BF8u: goto label_1d1bf8;
            case 0x1D1BFCu: goto label_1d1bfc;
            case 0x1D1C00u: goto label_1d1c00;
            case 0x1D1C04u: goto label_1d1c04;
            case 0x1D1C08u: goto label_1d1c08;
            case 0x1D1C0Cu: goto label_1d1c0c;
            case 0x1D1C10u: goto label_1d1c10;
            case 0x1D1C14u: goto label_1d1c14;
            case 0x1D1C18u: goto label_1d1c18;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C20u: goto label_1d1c20;
            case 0x1D1C24u: goto label_1d1c24;
            case 0x1D1C28u: goto label_1d1c28;
            case 0x1D1C2Cu: goto label_1d1c2c;
            case 0x1D1C30u: goto label_1d1c30;
            case 0x1D1C34u: goto label_1d1c34;
            case 0x1D1C38u: goto label_1d1c38;
            case 0x1D1C3Cu: goto label_1d1c3c;
            case 0x1D1C40u: goto label_1d1c40;
            case 0x1D1C44u: goto label_1d1c44;
            case 0x1D1C48u: goto label_1d1c48;
            case 0x1D1C4Cu: goto label_1d1c4c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C54u: goto label_1d1c54;
            case 0x1D1C58u: goto label_1d1c58;
            case 0x1D1C5Cu: goto label_1d1c5c;
            case 0x1D1C60u: goto label_1d1c60;
            case 0x1D1C64u: goto label_1d1c64;
            case 0x1D1C68u: goto label_1d1c68;
            case 0x1D1C6Cu: goto label_1d1c6c;
            case 0x1D1C70u: goto label_1d1c70;
            case 0x1D1C74u: goto label_1d1c74;
            case 0x1D1C78u: goto label_1d1c78;
            case 0x1D1C7Cu: goto label_1d1c7c;
            case 0x1D1C80u: goto label_1d1c80;
            case 0x1D1C84u: goto label_1d1c84;
            case 0x1D1C88u: goto label_1d1c88;
            case 0x1D1C8Cu: goto label_1d1c8c;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1C94u: goto label_1d1c94;
            case 0x1D1C98u: goto label_1d1c98;
            case 0x1D1C9Cu: goto label_1d1c9c;
            case 0x1D1CA0u: goto label_1d1ca0;
            case 0x1D1CA4u: goto label_1d1ca4;
            case 0x1D1CA8u: goto label_1d1ca8;
            case 0x1D1CACu: goto label_1d1cac;
            case 0x1D1CB0u: goto label_1d1cb0;
            case 0x1D1CB4u: goto label_1d1cb4;
            case 0x1D1CB8u: goto label_1d1cb8;
            case 0x1D1CBCu: goto label_1d1cbc;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CC4u: goto label_1d1cc4;
            case 0x1D1CC8u: goto label_1d1cc8;
            case 0x1D1CCCu: goto label_1d1ccc;
            case 0x1D1CD0u: goto label_1d1cd0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CDCu: goto label_1d1cdc;
            case 0x1D1CE0u: goto label_1d1ce0;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            case 0x1D1CECu: goto label_1d1cec;
            case 0x1D1CF0u: goto label_1d1cf0;
            case 0x1D1CF4u: goto label_1d1cf4;
            case 0x1D1CF8u: goto label_1d1cf8;
            case 0x1D1CFCu: goto label_1d1cfc;
            case 0x1D1D00u: goto label_1d1d00;
            case 0x1D1D04u: goto label_1d1d04;
            case 0x1D1D08u: goto label_1d1d08;
            case 0x1D1D0Cu: goto label_1d1d0c;
            case 0x1D1D10u: goto label_1d1d10;
            case 0x1D1D14u: goto label_1d1d14;
            case 0x1D1D18u: goto label_1d1d18;
            case 0x1D1D1Cu: goto label_1d1d1c;
            case 0x1D1D20u: goto label_1d1d20;
            case 0x1D1D24u: goto label_1d1d24;
            case 0x1D1D28u: goto label_1d1d28;
            case 0x1D1D2Cu: goto label_1d1d2c;
            case 0x1D1D30u: goto label_1d1d30;
            case 0x1D1D34u: goto label_1d1d34;
            case 0x1D1D38u: goto label_1d1d38;
            case 0x1D1D3Cu: goto label_1d1d3c;
            case 0x1D1D40u: goto label_1d1d40;
            case 0x1D1D44u: goto label_1d1d44;
            case 0x1D1D48u: goto label_1d1d48;
            case 0x1D1D4Cu: goto label_1d1d4c;
            case 0x1D1D50u: goto label_1d1d50;
            case 0x1D1D54u: goto label_1d1d54;
            case 0x1D1D58u: goto label_1d1d58;
            case 0x1D1D5Cu: goto label_1d1d5c;
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D64u: goto label_1d1d64;
            case 0x1D1D68u: goto label_1d1d68;
            case 0x1D1D6Cu: goto label_1d1d6c;
            case 0x1D1D70u: goto label_1d1d70;
            case 0x1D1D74u: goto label_1d1d74;
            case 0x1D1D78u: goto label_1d1d78;
            case 0x1D1D7Cu: goto label_1d1d7c;
            case 0x1D1D80u: goto label_1d1d80;
            case 0x1D1D84u: goto label_1d1d84;
            case 0x1D1D88u: goto label_1d1d88;
            case 0x1D1D8Cu: goto label_1d1d8c;
            case 0x1D1D90u: goto label_1d1d90;
            case 0x1D1D94u: goto label_1d1d94;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1D9Cu: goto label_1d1d9c;
            case 0x1D1DA0u: goto label_1d1da0;
            case 0x1D1DA4u: goto label_1d1da4;
            case 0x1D1DA8u: goto label_1d1da8;
            case 0x1D1DACu: goto label_1d1dac;
            case 0x1D1DB0u: goto label_1d1db0;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1DB8u: goto label_1d1db8;
            case 0x1D1DBCu: goto label_1d1dbc;
            case 0x1D1DC0u: goto label_1d1dc0;
            case 0x1D1DC4u: goto label_1d1dc4;
            case 0x1D1DC8u: goto label_1d1dc8;
            case 0x1D1DCCu: goto label_1d1dcc;
            case 0x1D1DD0u: goto label_1d1dd0;
            case 0x1D1DD4u: goto label_1d1dd4;
            case 0x1D1DD8u: goto label_1d1dd8;
            case 0x1D1DDCu: goto label_1d1ddc;
            case 0x1D1DE0u: goto label_1d1de0;
            case 0x1D1DE4u: goto label_1d1de4;
            case 0x1D1DE8u: goto label_1d1de8;
            case 0x1D1DECu: goto label_1d1dec;
            case 0x1D1DF0u: goto label_1d1df0;
            case 0x1D1DF4u: goto label_1d1df4;
            case 0x1D1DF8u: goto label_1d1df8;
            case 0x1D1DFCu: goto label_1d1dfc;
            case 0x1D1E00u: goto label_1d1e00;
            case 0x1D1E04u: goto label_1d1e04;
            case 0x1D1E08u: goto label_1d1e08;
            case 0x1D1E0Cu: goto label_1d1e0c;
            case 0x1D1E10u: goto label_1d1e10;
            case 0x1D1E14u: goto label_1d1e14;
            case 0x1D1E18u: goto label_1d1e18;
            case 0x1D1E1Cu: goto label_1d1e1c;
            case 0x1D1E20u: goto label_1d1e20;
            case 0x1D1E24u: goto label_1d1e24;
            case 0x1D1E28u: goto label_1d1e28;
            case 0x1D1E2Cu: goto label_1d1e2c;
            case 0x1D1E30u: goto label_1d1e30;
            case 0x1D1E34u: goto label_1d1e34;
            case 0x1D1E38u: goto label_1d1e38;
            case 0x1D1E3Cu: goto label_1d1e3c;
            case 0x1D1E40u: goto label_1d1e40;
            case 0x1D1E44u: goto label_1d1e44;
            case 0x1D1E48u: goto label_1d1e48;
            case 0x1D1E4Cu: goto label_1d1e4c;
            case 0x1D1E50u: goto label_1d1e50;
            case 0x1D1E54u: goto label_1d1e54;
            case 0x1D1E58u: goto label_1d1e58;
            case 0x1D1E5Cu: goto label_1d1e5c;
            case 0x1D1E60u: goto label_1d1e60;
            case 0x1D1E64u: goto label_1d1e64;
            case 0x1D1E68u: goto label_1d1e68;
            case 0x1D1E6Cu: goto label_1d1e6c;
            case 0x1D1E70u: goto label_1d1e70;
            case 0x1D1E74u: goto label_1d1e74;
            case 0x1D1E78u: goto label_1d1e78;
            case 0x1D1E7Cu: goto label_1d1e7c;
            case 0x1D1E80u: goto label_1d1e80;
            case 0x1D1E84u: goto label_1d1e84;
            case 0x1D1E88u: goto label_1d1e88;
            case 0x1D1E8Cu: goto label_1d1e8c;
            case 0x1D1E90u: goto label_1d1e90;
            case 0x1D1E94u: goto label_1d1e94;
            case 0x1D1E98u: goto label_1d1e98;
            case 0x1D1E9Cu: goto label_1d1e9c;
            case 0x1D1EA0u: goto label_1d1ea0;
            case 0x1D1EA4u: goto label_1d1ea4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EACu: goto label_1d1eac;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1EB4u: goto label_1d1eb4;
            case 0x1D1EB8u: goto label_1d1eb8;
            case 0x1D1EBCu: goto label_1d1ebc;
            case 0x1D1EC0u: goto label_1d1ec0;
            case 0x1D1EC4u: goto label_1d1ec4;
            case 0x1D1EC8u: goto label_1d1ec8;
            case 0x1D1ECCu: goto label_1d1ecc;
            case 0x1D1ED0u: goto label_1d1ed0;
            case 0x1D1ED4u: goto label_1d1ed4;
            case 0x1D1ED8u: goto label_1d1ed8;
            case 0x1D1EDCu: goto label_1d1edc;
            case 0x1D1EE0u: goto label_1d1ee0;
            case 0x1D1EE4u: goto label_1d1ee4;
            case 0x1D1EE8u: goto label_1d1ee8;
            case 0x1D1EECu: goto label_1d1eec;
            case 0x1D1EF0u: goto label_1d1ef0;
            case 0x1D1EF4u: goto label_1d1ef4;
            case 0x1D1EF8u: goto label_1d1ef8;
            case 0x1D1EFCu: goto label_1d1efc;
            case 0x1D1F00u: goto label_1d1f00;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F0Cu: goto label_1d1f0c;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F14u: goto label_1d1f14;
            case 0x1D1F18u: goto label_1d1f18;
            case 0x1D1F1Cu: goto label_1d1f1c;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D1F24u: goto label_1d1f24;
            case 0x1D1F28u: goto label_1d1f28;
            case 0x1D1F2Cu: goto label_1d1f2c;
            case 0x1D1F30u: goto label_1d1f30;
            case 0x1D1F34u: goto label_1d1f34;
            case 0x1D1F38u: goto label_1d1f38;
            case 0x1D1F3Cu: goto label_1d1f3c;
            case 0x1D1F40u: goto label_1d1f40;
            case 0x1D1F44u: goto label_1d1f44;
            case 0x1D1F48u: goto label_1d1f48;
            case 0x1D1F4Cu: goto label_1d1f4c;
            case 0x1D1F50u: goto label_1d1f50;
            case 0x1D1F54u: goto label_1d1f54;
            case 0x1D1F58u: goto label_1d1f58;
            case 0x1D1F5Cu: goto label_1d1f5c;
            case 0x1D1F60u: goto label_1d1f60;
            case 0x1D1F64u: goto label_1d1f64;
            case 0x1D1F68u: goto label_1d1f68;
            case 0x1D1F6Cu: goto label_1d1f6c;
            case 0x1D1F70u: goto label_1d1f70;
            case 0x1D1F74u: goto label_1d1f74;
            case 0x1D1F78u: goto label_1d1f78;
            case 0x1D1F7Cu: goto label_1d1f7c;
            case 0x1D1F80u: goto label_1d1f80;
            case 0x1D1F84u: goto label_1d1f84;
            case 0x1D1F88u: goto label_1d1f88;
            case 0x1D1F8Cu: goto label_1d1f8c;
            case 0x1D1F90u: goto label_1d1f90;
            case 0x1D1F94u: goto label_1d1f94;
            case 0x1D1F98u: goto label_1d1f98;
            case 0x1D1F9Cu: goto label_1d1f9c;
            case 0x1D1FA0u: goto label_1d1fa0;
            case 0x1D1FA4u: goto label_1d1fa4;
            case 0x1D1FA8u: goto label_1d1fa8;
            case 0x1D1FACu: goto label_1d1fac;
            case 0x1D1FB0u: goto label_1d1fb0;
            case 0x1D1FB4u: goto label_1d1fb4;
            case 0x1D1FB8u: goto label_1d1fb8;
            case 0x1D1FBCu: goto label_1d1fbc;
            case 0x1D1FC0u: goto label_1d1fc0;
            case 0x1D1FC4u: goto label_1d1fc4;
            case 0x1D1FC8u: goto label_1d1fc8;
            case 0x1D1FCCu: goto label_1d1fcc;
            case 0x1D1FD0u: goto label_1d1fd0;
            case 0x1D1FD4u: goto label_1d1fd4;
            case 0x1D1FD8u: goto label_1d1fd8;
            case 0x1D1FDCu: goto label_1d1fdc;
            case 0x1D1FE0u: goto label_1d1fe0;
            case 0x1D1FE4u: goto label_1d1fe4;
            case 0x1D1FE8u: goto label_1d1fe8;
            case 0x1D1FECu: goto label_1d1fec;
            case 0x1D1FF0u: goto label_1d1ff0;
            case 0x1D1FF4u: goto label_1d1ff4;
            case 0x1D1FF8u: goto label_1d1ff8;
            case 0x1D1FFCu: goto label_1d1ffc;
            case 0x1D2000u: goto label_1d2000;
            case 0x1D2004u: goto label_1d2004;
            case 0x1D2008u: goto label_1d2008;
            case 0x1D200Cu: goto label_1d200c;
            case 0x1D2010u: goto label_1d2010;
            case 0x1D2014u: goto label_1d2014;
            case 0x1D2018u: goto label_1d2018;
            case 0x1D201Cu: goto label_1d201c;
            case 0x1D2020u: goto label_1d2020;
            case 0x1D2024u: goto label_1d2024;
            case 0x1D2028u: goto label_1d2028;
            case 0x1D202Cu: goto label_1d202c;
            case 0x1D2030u: goto label_1d2030;
            case 0x1D2034u: goto label_1d2034;
            case 0x1D2038u: goto label_1d2038;
            case 0x1D203Cu: goto label_1d203c;
            case 0x1D2040u: goto label_1d2040;
            case 0x1D2044u: goto label_1d2044;
            case 0x1D2048u: goto label_1d2048;
            case 0x1D204Cu: goto label_1d204c;
            case 0x1D2050u: goto label_1d2050;
            case 0x1D2054u: goto label_1d2054;
            case 0x1D2058u: goto label_1d2058;
            case 0x1D205Cu: goto label_1d205c;
            case 0x1D2060u: goto label_1d2060;
            case 0x1D2064u: goto label_1d2064;
            case 0x1D2068u: goto label_1d2068;
            case 0x1D206Cu: goto label_1d206c;
            case 0x1D2070u: goto label_1d2070;
            case 0x1D2074u: goto label_1d2074;
            case 0x1D2078u: goto label_1d2078;
            case 0x1D207Cu: goto label_1d207c;
            case 0x1D2080u: goto label_1d2080;
            case 0x1D2084u: goto label_1d2084;
            case 0x1D2088u: goto label_1d2088;
            case 0x1D208Cu: goto label_1d208c;
            case 0x1D2090u: goto label_1d2090;
            case 0x1D2094u: goto label_1d2094;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D209Cu: goto label_1d209c;
            case 0x1D20A0u: goto label_1d20a0;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20ACu: goto label_1d20ac;
            case 0x1D20B0u: goto label_1d20b0;
            case 0x1D20B4u: goto label_1d20b4;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D20BCu: goto label_1d20bc;
            case 0x1D20C0u: goto label_1d20c0;
            case 0x1D20C4u: goto label_1d20c4;
            case 0x1D20C8u: goto label_1d20c8;
            case 0x1D20CCu: goto label_1d20cc;
            case 0x1D20D0u: goto label_1d20d0;
            case 0x1D20D4u: goto label_1d20d4;
            case 0x1D20D8u: goto label_1d20d8;
            case 0x1D20DCu: goto label_1d20dc;
            case 0x1D20E0u: goto label_1d20e0;
            case 0x1D20E4u: goto label_1d20e4;
            case 0x1D20E8u: goto label_1d20e8;
            case 0x1D20ECu: goto label_1d20ec;
            case 0x1D20F0u: goto label_1d20f0;
            case 0x1D20F4u: goto label_1d20f4;
            case 0x1D20F8u: goto label_1d20f8;
            case 0x1D20FCu: goto label_1d20fc;
            case 0x1D2100u: goto label_1d2100;
            case 0x1D2104u: goto label_1d2104;
            case 0x1D2108u: goto label_1d2108;
            case 0x1D210Cu: goto label_1d210c;
            case 0x1D2110u: goto label_1d2110;
            case 0x1D2114u: goto label_1d2114;
            case 0x1D2118u: goto label_1d2118;
            case 0x1D211Cu: goto label_1d211c;
            case 0x1D2120u: goto label_1d2120;
            case 0x1D2124u: goto label_1d2124;
            case 0x1D2128u: goto label_1d2128;
            case 0x1D212Cu: goto label_1d212c;
            case 0x1D2130u: goto label_1d2130;
            case 0x1D2134u: goto label_1d2134;
            case 0x1D2138u: goto label_1d2138;
            case 0x1D213Cu: goto label_1d213c;
            case 0x1D2140u: goto label_1d2140;
            case 0x1D2144u: goto label_1d2144;
            case 0x1D2148u: goto label_1d2148;
            case 0x1D214Cu: goto label_1d214c;
            case 0x1D2150u: goto label_1d2150;
            case 0x1D2154u: goto label_1d2154;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D215Cu: goto label_1d215c;
            case 0x1D2160u: goto label_1d2160;
            case 0x1D2164u: goto label_1d2164;
            case 0x1D2168u: goto label_1d2168;
            case 0x1D216Cu: goto label_1d216c;
            case 0x1D2170u: goto label_1d2170;
            case 0x1D2174u: goto label_1d2174;
            case 0x1D2178u: goto label_1d2178;
            case 0x1D217Cu: goto label_1d217c;
            case 0x1D2180u: goto label_1d2180;
            case 0x1D2184u: goto label_1d2184;
            case 0x1D2188u: goto label_1d2188;
            case 0x1D218Cu: goto label_1d218c;
            case 0x1D2190u: goto label_1d2190;
            case 0x1D2194u: goto label_1d2194;
            case 0x1D2198u: goto label_1d2198;
            case 0x1D219Cu: goto label_1d219c;
            case 0x1D21A0u: goto label_1d21a0;
            case 0x1D21A4u: goto label_1d21a4;
            case 0x1D21A8u: goto label_1d21a8;
            case 0x1D21ACu: goto label_1d21ac;
            case 0x1D21B0u: goto label_1d21b0;
            case 0x1D21B4u: goto label_1d21b4;
            case 0x1D21B8u: goto label_1d21b8;
            case 0x1D21BCu: goto label_1d21bc;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C4u: goto label_1d21c4;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21CCu: goto label_1d21cc;
            case 0x1D21D0u: goto label_1d21d0;
            case 0x1D21D4u: goto label_1d21d4;
            case 0x1D21D8u: goto label_1d21d8;
            case 0x1D21DCu: goto label_1d21dc;
            case 0x1D21E0u: goto label_1d21e0;
            case 0x1D21E4u: goto label_1d21e4;
            case 0x1D21E8u: goto label_1d21e8;
            case 0x1D21ECu: goto label_1d21ec;
            case 0x1D21F0u: goto label_1d21f0;
            case 0x1D21F4u: goto label_1d21f4;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D21FCu: goto label_1d21fc;
            case 0x1D2200u: goto label_1d2200;
            case 0x1D2204u: goto label_1d2204;
            case 0x1D2208u: goto label_1d2208;
            case 0x1D220Cu: goto label_1d220c;
            case 0x1D2210u: goto label_1d2210;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2218u: goto label_1d2218;
            case 0x1D221Cu: goto label_1d221c;
            case 0x1D2220u: goto label_1d2220;
            case 0x1D2224u: goto label_1d2224;
            case 0x1D2228u: goto label_1d2228;
            case 0x1D222Cu: goto label_1d222c;
            case 0x1D2230u: goto label_1d2230;
            case 0x1D2234u: goto label_1d2234;
            case 0x1D2238u: goto label_1d2238;
            case 0x1D223Cu: goto label_1d223c;
            case 0x1D2240u: goto label_1d2240;
            case 0x1D2244u: goto label_1d2244;
            case 0x1D2248u: goto label_1d2248;
            case 0x1D224Cu: goto label_1d224c;
            case 0x1D2250u: goto label_1d2250;
            case 0x1D2254u: goto label_1d2254;
            case 0x1D2258u: goto label_1d2258;
            case 0x1D225Cu: goto label_1d225c;
            case 0x1D2260u: goto label_1d2260;
            case 0x1D2264u: goto label_1d2264;
            case 0x1D2268u: goto label_1d2268;
            case 0x1D226Cu: goto label_1d226c;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D2274u: goto label_1d2274;
            case 0x1D2278u: goto label_1d2278;
            case 0x1D227Cu: goto label_1d227c;
            case 0x1D2280u: goto label_1d2280;
            case 0x1D2284u: goto label_1d2284;
            case 0x1D2288u: goto label_1d2288;
            case 0x1D228Cu: goto label_1d228c;
            case 0x1D2290u: goto label_1d2290;
            case 0x1D2294u: goto label_1d2294;
            case 0x1D2298u: goto label_1d2298;
            case 0x1D229Cu: goto label_1d229c;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22A4u: goto label_1d22a4;
            case 0x1D22A8u: goto label_1d22a8;
            case 0x1D22ACu: goto label_1d22ac;
            case 0x1D22B0u: goto label_1d22b0;
            case 0x1D22B4u: goto label_1d22b4;
            case 0x1D22B8u: goto label_1d22b8;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22C0u: goto label_1d22c0;
            case 0x1D22C4u: goto label_1d22c4;
            case 0x1D22C8u: goto label_1d22c8;
            case 0x1D22CCu: goto label_1d22cc;
            case 0x1D22D0u: goto label_1d22d0;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D22DCu: goto label_1d22dc;
            case 0x1D22E0u: goto label_1d22e0;
            case 0x1D22E4u: goto label_1d22e4;
            case 0x1D22E8u: goto label_1d22e8;
            case 0x1D22ECu: goto label_1d22ec;
            case 0x1D22F0u: goto label_1d22f0;
            case 0x1D22F4u: goto label_1d22f4;
            case 0x1D22F8u: goto label_1d22f8;
            case 0x1D22FCu: goto label_1d22fc;
            case 0x1D2300u: goto label_1d2300;
            case 0x1D2304u: goto label_1d2304;
            case 0x1D2308u: goto label_1d2308;
            case 0x1D230Cu: goto label_1d230c;
            case 0x1D2310u: goto label_1d2310;
            case 0x1D2314u: goto label_1d2314;
            case 0x1D2318u: goto label_1d2318;
            case 0x1D231Cu: goto label_1d231c;
            case 0x1D2320u: goto label_1d2320;
            case 0x1D2324u: goto label_1d2324;
            case 0x1D2328u: goto label_1d2328;
            case 0x1D232Cu: goto label_1d232c;
            case 0x1D2330u: goto label_1d2330;
            case 0x1D2334u: goto label_1d2334;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D233Cu: goto label_1d233c;
            case 0x1D2340u: goto label_1d2340;
            case 0x1D2344u: goto label_1d2344;
            case 0x1D2348u: goto label_1d2348;
            case 0x1D234Cu: goto label_1d234c;
            case 0x1D2350u: goto label_1d2350;
            case 0x1D2354u: goto label_1d2354;
            case 0x1D2358u: goto label_1d2358;
            case 0x1D235Cu: goto label_1d235c;
            case 0x1D2360u: goto label_1d2360;
            case 0x1D2364u: goto label_1d2364;
            case 0x1D2368u: goto label_1d2368;
            case 0x1D236Cu: goto label_1d236c;
            case 0x1D2370u: goto label_1d2370;
            case 0x1D2374u: goto label_1d2374;
            case 0x1D2378u: goto label_1d2378;
            case 0x1D237Cu: goto label_1d237c;
            case 0x1D2380u: goto label_1d2380;
            case 0x1D2384u: goto label_1d2384;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D238Cu: goto label_1d238c;
            case 0x1D2390u: goto label_1d2390;
            case 0x1D2394u: goto label_1d2394;
            case 0x1D2398u: goto label_1d2398;
            case 0x1D239Cu: goto label_1d239c;
            case 0x1D23A0u: goto label_1d23a0;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23A8u: goto label_1d23a8;
            case 0x1D23ACu: goto label_1d23ac;
            case 0x1D23B0u: goto label_1d23b0;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23B8u: goto label_1d23b8;
            case 0x1D23BCu: goto label_1d23bc;
            case 0x1D23C0u: goto label_1d23c0;
            case 0x1D23C4u: goto label_1d23c4;
            case 0x1D23C8u: goto label_1d23c8;
            case 0x1D23CCu: goto label_1d23cc;
            case 0x1D23D0u: goto label_1d23d0;
            case 0x1D23D4u: goto label_1d23d4;
            case 0x1D23D8u: goto label_1d23d8;
            case 0x1D23DCu: goto label_1d23dc;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            case 0x1D23E8u: goto label_1d23e8;
            case 0x1D23ECu: goto label_1d23ec;
            case 0x1D23F0u: goto label_1d23f0;
            case 0x1D23F4u: goto label_1d23f4;
            case 0x1D23F8u: goto label_1d23f8;
            case 0x1D23FCu: goto label_1d23fc;
            case 0x1D2400u: goto label_1d2400;
            case 0x1D2404u: goto label_1d2404;
            case 0x1D2408u: goto label_1d2408;
            case 0x1D240Cu: goto label_1d240c;
            case 0x1D2410u: goto label_1d2410;
            case 0x1D2414u: goto label_1d2414;
            case 0x1D2418u: goto label_1d2418;
            case 0x1D241Cu: goto label_1d241c;
            case 0x1D2420u: goto label_1d2420;
            case 0x1D2424u: goto label_1d2424;
            case 0x1D2428u: goto label_1d2428;
            case 0x1D242Cu: goto label_1d242c;
            case 0x1D2430u: goto label_1d2430;
            case 0x1D2434u: goto label_1d2434;
            case 0x1D2438u: goto label_1d2438;
            case 0x1D243Cu: goto label_1d243c;
            case 0x1D2440u: goto label_1d2440;
            case 0x1D2444u: goto label_1d2444;
            case 0x1D2448u: goto label_1d2448;
            case 0x1D244Cu: goto label_1d244c;
            case 0x1D2450u: goto label_1d2450;
            case 0x1D2454u: goto label_1d2454;
            case 0x1D2458u: goto label_1d2458;
            case 0x1D245Cu: goto label_1d245c;
            case 0x1D2460u: goto label_1d2460;
            case 0x1D2464u: goto label_1d2464;
            case 0x1D2468u: goto label_1d2468;
            case 0x1D246Cu: goto label_1d246c;
            case 0x1D2470u: goto label_1d2470;
            case 0x1D2474u: goto label_1d2474;
            case 0x1D2478u: goto label_1d2478;
            case 0x1D247Cu: goto label_1d247c;
            case 0x1D2480u: goto label_1d2480;
            case 0x1D2484u: goto label_1d2484;
            case 0x1D2488u: goto label_1d2488;
            case 0x1D248Cu: goto label_1d248c;
            case 0x1D2490u: goto label_1d2490;
            case 0x1D2494u: goto label_1d2494;
            case 0x1D2498u: goto label_1d2498;
            case 0x1D249Cu: goto label_1d249c;
            case 0x1D24A0u: goto label_1d24a0;
            case 0x1D24A4u: goto label_1d24a4;
            case 0x1D24A8u: goto label_1d24a8;
            case 0x1D24ACu: goto label_1d24ac;
            case 0x1D24B0u: goto label_1d24b0;
            case 0x1D24B4u: goto label_1d24b4;
            case 0x1D24B8u: goto label_1d24b8;
            case 0x1D24BCu: goto label_1d24bc;
            case 0x1D24C0u: goto label_1d24c0;
            case 0x1D24C4u: goto label_1d24c4;
            case 0x1D24C8u: goto label_1d24c8;
            case 0x1D24CCu: goto label_1d24cc;
            case 0x1D24D0u: goto label_1d24d0;
            case 0x1D24D4u: goto label_1d24d4;
            case 0x1D24D8u: goto label_1d24d8;
            case 0x1D24DCu: goto label_1d24dc;
            case 0x1D24E0u: goto label_1d24e0;
            case 0x1D24E4u: goto label_1d24e4;
            case 0x1D24E8u: goto label_1d24e8;
            case 0x1D24ECu: goto label_1d24ec;
            case 0x1D24F0u: goto label_1d24f0;
            case 0x1D24F4u: goto label_1d24f4;
            case 0x1D24F8u: goto label_1d24f8;
            case 0x1D24FCu: goto label_1d24fc;
            case 0x1D2500u: goto label_1d2500;
            case 0x1D2504u: goto label_1d2504;
            case 0x1D2508u: goto label_1d2508;
            case 0x1D250Cu: goto label_1d250c;
            case 0x1D2510u: goto label_1d2510;
            case 0x1D2514u: goto label_1d2514;
            case 0x1D2518u: goto label_1d2518;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F54u; }
            if (ctx->pc != 0x1D1F54u) { return; }
        }
    }
    ctx->pc = 0x1D1F54u;
label_1d1f54:
    // 0x1d1f54: 0x1000016c  b           . + 4 + (0x16C << 2)
label_1d1f58:
    if (ctx->pc == 0x1D1F58u) {
        ctx->pc = 0x1D1F5Cu;
        goto label_1d1f5c;
    }
    ctx->pc = 0x1D1F54u;
    {
        const bool branch_taken_0x1d1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f54) {
            ctx->pc = 0x1D2508u;
            goto label_1d2508;
        }
    }
    ctx->pc = 0x1D1F5Cu;
label_1d1f5c:
    // 0x1d1f5c: 0x0  nop
    ctx->pc = 0x1d1f5cu;
    // NOP
label_1d1f60:
    // 0x1d1f60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d1f64:
    // 0x1d1f64: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_1d1f68:
    if (ctx->pc == 0x1D1F68u) {
        ctx->pc = 0x1D1F6Cu;
        goto label_1d1f6c;
    }
    ctx->pc = 0x1D1F64u;
    {
        const bool branch_taken_0x1d1f64 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d1f64) {
            ctx->pc = 0x1D2488u;
            goto label_1d2488;
        }
    }
    ctx->pc = 0x1D1F6Cu;
label_1d1f6c:
    // 0x1d1f6c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1d1f70:
    // 0x1d1f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d1f74:
    // 0x1d1f74: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1d1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1d1f78:
    // 0x1d1f78: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1d1f7c:
    // 0x1d1f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d1f80:
    // 0x1d1f80: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1d1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1d1f84:
    // 0x1d1f84: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1d1f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1d1f88:
    // 0x1d1f88: 0xc0604b0  jal         func_1812C0
label_1d1f8c:
    if (ctx->pc == 0x1D1F8Cu) {
        ctx->pc = 0x1D1F8Cu;
            // 0x1d1f8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D1F90u;
        goto label_1d1f90;
    }
    ctx->pc = 0x1D1F88u;
    SET_GPR_U32(ctx, 31, 0x1D1F90u);
    ctx->pc = 0x1D1F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F88u;
            // 0x1d1f8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F90u; }
        if (ctx->pc != 0x1D1F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F90u; }
        if (ctx->pc != 0x1D1F90u) { return; }
    }
    ctx->pc = 0x1D1F90u;
label_1d1f90:
    // 0x1d1f90: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1f94:
    // 0x1d1f94: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1d1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1d1f98:
    // 0x1d1f98: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1d1f98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1d1f9c:
    // 0x1d1f9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d1f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1fa0:
    // 0x1d1fa0: 0x0  nop
    ctx->pc = 0x1d1fa0u;
    // NOP
label_1d1fa4:
    // 0x1d1fa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1fa8:
    // 0x1d1fa8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d1fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d1fac:
    // 0x1d1fac: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d1facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1fb0:
    // 0x1d1fb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1fb4:
    // 0x1d1fb4: 0xc050ba4  jal         func_142E90
label_1d1fb8:
    if (ctx->pc == 0x1D1FB8u) {
        ctx->pc = 0x1D1FB8u;
            // 0x1d1fb8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D1FBCu;
        goto label_1d1fbc;
    }
    ctx->pc = 0x1D1FB4u;
    SET_GPR_U32(ctx, 31, 0x1D1FBCu);
    ctx->pc = 0x1D1FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FB4u;
            // 0x1d1fb8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FBCu; }
        if (ctx->pc != 0x1D1FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FBCu; }
        if (ctx->pc != 0x1D1FBCu) { return; }
    }
    ctx->pc = 0x1D1FBCu;
label_1d1fbc:
    // 0x1d1fbc: 0xc040d72  jal         func_1035C8
label_1d1fc0:
    if (ctx->pc == 0x1D1FC0u) {
        ctx->pc = 0x1D1FC0u;
            // 0x1d1fc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D1FC4u;
        goto label_1d1fc4;
    }
    ctx->pc = 0x1D1FBCu;
    SET_GPR_U32(ctx, 31, 0x1D1FC4u);
    ctx->pc = 0x1D1FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FBCu;
            // 0x1d1fc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FC4u; }
        if (ctx->pc != 0x1D1FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FC4u; }
        if (ctx->pc != 0x1D1FC4u) { return; }
    }
    ctx->pc = 0x1D1FC4u;
label_1d1fc4:
    // 0x1d1fc4: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1d1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1d1fc8:
    // 0x1d1fc8: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d1fc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d1fcc:
    // 0x1d1fcc: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d1fccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d1fd0:
    // 0x1d1fd0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d1fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d1fd4:
    // 0x1d1fd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d1fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d1fd8:
    // 0x1d1fd8: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d1fd8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d1fdc:
    // 0x1d1fdc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1fdcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d1fe0:
    // 0x1d1fe0: 0xc040880  jal         func_102200
label_1d1fe4:
    if (ctx->pc == 0x1D1FE4u) {
        ctx->pc = 0x1D1FE4u;
            // 0x1d1fe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FE8u;
        goto label_1d1fe8;
    }
    ctx->pc = 0x1D1FE0u;
    SET_GPR_U32(ctx, 31, 0x1D1FE8u);
    ctx->pc = 0x1D1FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FE0u;
            // 0x1d1fe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FE8u; }
        if (ctx->pc != 0x1D1FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FE8u; }
        if (ctx->pc != 0x1D1FE8u) { return; }
    }
    ctx->pc = 0x1D1FE8u;
label_1d1fe8:
    // 0x1d1fe8: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1d1fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1d1fec:
    // 0x1d1fec: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d1fecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d1ff0:
    // 0x1d1ff0: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d1ff0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d1ff4:
    // 0x1d1ff4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d1ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d1ff8:
    // 0x1d1ff8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d1ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d1ffc:
    // 0x1d1ffc: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d1ffcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d2000:
    // 0x1d2000: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2000u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d2004:
    // 0x1d2004: 0xc040866  jal         func_102198
label_1d2008:
    if (ctx->pc == 0x1D2008u) {
        ctx->pc = 0x1D2008u;
            // 0x1d2008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D200Cu;
        goto label_1d200c;
    }
    ctx->pc = 0x1D2004u;
    SET_GPR_U32(ctx, 31, 0x1D200Cu);
    ctx->pc = 0x1D2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2004u;
            // 0x1d2008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D200Cu; }
        if (ctx->pc != 0x1D200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D200Cu; }
        if (ctx->pc != 0x1D200Cu) { return; }
    }
    ctx->pc = 0x1D200Cu;
label_1d200c:
    // 0x1d200c: 0xc040a74  jal         func_1029D0
label_1d2010:
    if (ctx->pc == 0x1D2010u) {
        ctx->pc = 0x1D2010u;
            // 0x1d2010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2014u;
        goto label_1d2014;
    }
    ctx->pc = 0x1D200Cu;
    SET_GPR_U32(ctx, 31, 0x1D2014u);
    ctx->pc = 0x1D2010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D200Cu;
            // 0x1d2010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2014u; }
        if (ctx->pc != 0x1D2014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2014u; }
        if (ctx->pc != 0x1D2014u) { return; }
    }
    ctx->pc = 0x1D2014u;
label_1d2014:
    // 0x1d2014: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d2014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2018:
    // 0x1d2018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d201c:
    // 0x1d201c: 0xc050ba4  jal         func_142E90
label_1d2020:
    if (ctx->pc == 0x1D2020u) {
        ctx->pc = 0x1D2020u;
            // 0x1d2020: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1D2024u;
        goto label_1d2024;
    }
    ctx->pc = 0x1D201Cu;
    SET_GPR_U32(ctx, 31, 0x1D2024u);
    ctx->pc = 0x1D2020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D201Cu;
            // 0x1d2020: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2024u; }
        if (ctx->pc != 0x1D2024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2024u; }
        if (ctx->pc != 0x1D2024u) { return; }
    }
    ctx->pc = 0x1D2024u;
label_1d2024:
    // 0x1d2024: 0xc040d72  jal         func_1035C8
label_1d2028:
    if (ctx->pc == 0x1D2028u) {
        ctx->pc = 0x1D2028u;
            // 0x1d2028: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D202Cu;
        goto label_1d202c;
    }
    ctx->pc = 0x1D2024u;
    SET_GPR_U32(ctx, 31, 0x1D202Cu);
    ctx->pc = 0x1D2028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2024u;
            // 0x1d2028: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D202Cu; }
        if (ctx->pc != 0x1D202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D202Cu; }
        if (ctx->pc != 0x1D202Cu) { return; }
    }
    ctx->pc = 0x1D202Cu;
label_1d202c:
    // 0x1d202c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1d202cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1d2030:
    // 0x1d2030: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d2030u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d2034:
    // 0x1d2034: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d2034u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d2038:
    // 0x1d2038: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d2038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d203c:
    // 0x1d203c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d203cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d2040:
    // 0x1d2040: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d2040u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d2044:
    // 0x1d2044: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2044u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d2048:
    // 0x1d2048: 0xc040880  jal         func_102200
label_1d204c:
    if (ctx->pc == 0x1D204Cu) {
        ctx->pc = 0x1D204Cu;
            // 0x1d204c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2050u;
        goto label_1d2050;
    }
    ctx->pc = 0x1D2048u;
    SET_GPR_U32(ctx, 31, 0x1D2050u);
    ctx->pc = 0x1D204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2048u;
            // 0x1d204c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2050u; }
        if (ctx->pc != 0x1D2050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2050u; }
        if (ctx->pc != 0x1D2050u) { return; }
    }
    ctx->pc = 0x1D2050u;
label_1d2050:
    // 0x1d2050: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1d2054:
    // 0x1d2054: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1d2054u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d2058:
    // 0x1d2058: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1d2058u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1d205c:
    // 0x1d205c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d205cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d2060:
    // 0x1d2060: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d2060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d2064:
    // 0x1d2064: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1d2064u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1d2068:
    // 0x1d2068: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2068u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d206c:
    // 0x1d206c: 0xc040866  jal         func_102198
label_1d2070:
    if (ctx->pc == 0x1D2070u) {
        ctx->pc = 0x1D2070u;
            // 0x1d2070: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2074u;
        goto label_1d2074;
    }
    ctx->pc = 0x1D206Cu;
    SET_GPR_U32(ctx, 31, 0x1D2074u);
    ctx->pc = 0x1D2070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D206Cu;
            // 0x1d2070: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2074u; }
        if (ctx->pc != 0x1D2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2074u; }
        if (ctx->pc != 0x1D2074u) { return; }
    }
    ctx->pc = 0x1D2074u;
label_1d2074:
    // 0x1d2074: 0xc040a74  jal         func_1029D0
label_1d2078:
    if (ctx->pc == 0x1D2078u) {
        ctx->pc = 0x1D2078u;
            // 0x1d2078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D207Cu;
        goto label_1d207c;
    }
    ctx->pc = 0x1D2074u;
    SET_GPR_U32(ctx, 31, 0x1D207Cu);
    ctx->pc = 0x1D2078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2074u;
            // 0x1d2078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D207Cu; }
        if (ctx->pc != 0x1D207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D207Cu; }
        if (ctx->pc != 0x1D207Cu) { return; }
    }
    ctx->pc = 0x1D207Cu;
label_1d207c:
    // 0x1d207c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1d207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2080:
    // 0x1d2080: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d2080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d2084:
    // 0x1d2084: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1d2084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1d2088:
    // 0x1d2088: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1d2088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1d208c:
    // 0x1d208c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1d208cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1d2090:
    // 0x1d2090: 0x1420011d  bnez        $at, . + 4 + (0x11D << 2)
label_1d2094:
    if (ctx->pc == 0x1D2094u) {
        ctx->pc = 0x1D2098u;
        goto label_1d2098;
    }
    ctx->pc = 0x1D2090u;
    {
        const bool branch_taken_0x1d2090 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2090) {
            ctx->pc = 0x1D2508u;
            goto label_1d2508;
        }
    }
    ctx->pc = 0x1D2098u;
label_1d2098:
    // 0x1d2098: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d209c:
    // 0x1d209c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d20a0:
    // 0x1d20a0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d20a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d20a4:
    // 0x1d20a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d20a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d20a8:
    // 0x1d20a8: 0xc05d080  jal         func_174200
label_1d20ac:
    if (ctx->pc == 0x1D20ACu) {
        ctx->pc = 0x1D20ACu;
            // 0x1d20ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D20B0u;
        goto label_1d20b0;
    }
    ctx->pc = 0x1D20A8u;
    SET_GPR_U32(ctx, 31, 0x1D20B0u);
    ctx->pc = 0x1D20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20A8u;
            // 0x1d20ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20B0u; }
        if (ctx->pc != 0x1D20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20B0u; }
        if (ctx->pc != 0x1D20B0u) { return; }
    }
    ctx->pc = 0x1D20B0u;
label_1d20b0:
    // 0x1d20b0: 0xc050bb4  jal         func_142ED0
label_1d20b4:
    if (ctx->pc == 0x1D20B4u) {
        ctx->pc = 0x1D20B8u;
        goto label_1d20b8;
    }
    ctx->pc = 0x1D20B0u;
    SET_GPR_U32(ctx, 31, 0x1D20B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20B8u; }
        if (ctx->pc != 0x1D20B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20B8u; }
        if (ctx->pc != 0x1D20B8u) { return; }
    }
    ctx->pc = 0x1D20B8u;
label_1d20b8:
    // 0x1d20b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d20b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d20bc:
    // 0x1d20bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d20c0:
    if (ctx->pc == 0x1D20C0u) {
        ctx->pc = 0x1D20C4u;
        goto label_1d20c4;
    }
    ctx->pc = 0x1D20BCu;
    {
        const bool branch_taken_0x1d20bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d20bc) {
            ctx->pc = 0x1D20E0u;
            goto label_1d20e0;
        }
    }
    ctx->pc = 0x1D20C4u;
label_1d20c4:
    // 0x1d20c4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d20c8:
    // 0x1d20c8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d20cc:
    // 0x1d20cc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d20d0:
    // 0x1d20d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d20d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d20d4:
    // 0x1d20d4: 0xc05d080  jal         func_174200
label_1d20d8:
    if (ctx->pc == 0x1D20D8u) {
        ctx->pc = 0x1D20D8u;
            // 0x1d20d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D20DCu;
        goto label_1d20dc;
    }
    ctx->pc = 0x1D20D4u;
    SET_GPR_U32(ctx, 31, 0x1D20DCu);
    ctx->pc = 0x1D20D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20D4u;
            // 0x1d20d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20DCu; }
        if (ctx->pc != 0x1D20DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20DCu; }
        if (ctx->pc != 0x1D20DCu) { return; }
    }
    ctx->pc = 0x1D20DCu;
label_1d20dc:
    // 0x1d20dc: 0x0  nop
    ctx->pc = 0x1d20dcu;
    // NOP
label_1d20e0:
    // 0x1d20e0: 0xc050bb4  jal         func_142ED0
label_1d20e4:
    if (ctx->pc == 0x1D20E4u) {
        ctx->pc = 0x1D20E8u;
        goto label_1d20e8;
    }
    ctx->pc = 0x1D20E0u;
    SET_GPR_U32(ctx, 31, 0x1D20E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20E8u; }
        if (ctx->pc != 0x1D20E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20E8u; }
        if (ctx->pc != 0x1D20E8u) { return; }
    }
    ctx->pc = 0x1D20E8u;
label_1d20e8:
    // 0x1d20e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d20e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d20ec:
    // 0x1d20ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d20f0:
    if (ctx->pc == 0x1D20F0u) {
        ctx->pc = 0x1D20F4u;
        goto label_1d20f4;
    }
    ctx->pc = 0x1D20ECu;
    {
        const bool branch_taken_0x1d20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d20ec) {
            ctx->pc = 0x1D2110u;
            goto label_1d2110;
        }
    }
    ctx->pc = 0x1D20F4u;
label_1d20f4:
    // 0x1d20f4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d20f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d20f8:
    // 0x1d20f8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d20f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d20fc:
    // 0x1d20fc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d20fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2100:
    // 0x1d2100: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d2100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d2104:
    // 0x1d2104: 0xc05d080  jal         func_174200
label_1d2108:
    if (ctx->pc == 0x1D2108u) {
        ctx->pc = 0x1D2108u;
            // 0x1d2108: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D210Cu;
        goto label_1d210c;
    }
    ctx->pc = 0x1D2104u;
    SET_GPR_U32(ctx, 31, 0x1D210Cu);
    ctx->pc = 0x1D2108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2104u;
            // 0x1d2108: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D210Cu; }
        if (ctx->pc != 0x1D210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D210Cu; }
        if (ctx->pc != 0x1D210Cu) { return; }
    }
    ctx->pc = 0x1D210Cu;
label_1d210c:
    // 0x1d210c: 0x0  nop
    ctx->pc = 0x1d210cu;
    // NOP
label_1d2110:
    // 0x1d2110: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d2110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2114:
    // 0x1d2114: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d2118:
    // 0x1d2118: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d211c:
    // 0x1d211c: 0xc053740  jal         func_14DD00
label_1d2120:
    if (ctx->pc == 0x1D2120u) {
        ctx->pc = 0x1D2120u;
            // 0x1d2120: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D2124u;
        goto label_1d2124;
    }
    ctx->pc = 0x1D211Cu;
    SET_GPR_U32(ctx, 31, 0x1D2124u);
    ctx->pc = 0x1D2120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D211Cu;
            // 0x1d2120: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2124u; }
        if (ctx->pc != 0x1D2124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2124u; }
        if (ctx->pc != 0x1D2124u) { return; }
    }
    ctx->pc = 0x1D2124u;
label_1d2124:
    // 0x1d2124: 0xc050bb4  jal         func_142ED0
label_1d2128:
    if (ctx->pc == 0x1D2128u) {
        ctx->pc = 0x1D212Cu;
        goto label_1d212c;
    }
    ctx->pc = 0x1D2124u;
    SET_GPR_U32(ctx, 31, 0x1D212Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D212Cu; }
        if (ctx->pc != 0x1D212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D212Cu; }
        if (ctx->pc != 0x1D212Cu) { return; }
    }
    ctx->pc = 0x1D212Cu;
label_1d212c:
    // 0x1d212c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2130:
    // 0x1d2130: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2134:
    // 0x1d2134: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2134u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2138:
    // 0x1d2138: 0x0  nop
    ctx->pc = 0x1d2138u;
    // NOP
label_1d213c:
    // 0x1d213c: 0x0  nop
    ctx->pc = 0x1d213cu;
    // NOP
label_1d2140:
    // 0x1d2140: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2140u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2144:
    // 0x1d2144: 0xc050bb4  jal         func_142ED0
label_1d2148:
    if (ctx->pc == 0x1D2148u) {
        ctx->pc = 0x1D2148u;
            // 0x1d2148: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D214Cu;
        goto label_1d214c;
    }
    ctx->pc = 0x1D2144u;
    SET_GPR_U32(ctx, 31, 0x1D214Cu);
    ctx->pc = 0x1D2148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2144u;
            // 0x1d2148: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D214Cu; }
        if (ctx->pc != 0x1D214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D214Cu; }
        if (ctx->pc != 0x1D214Cu) { return; }
    }
    ctx->pc = 0x1D214Cu;
label_1d214c:
    // 0x1d214c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2150:
    // 0x1d2150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2154:
    // 0x1d2154: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2154u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2158:
    // 0x1d2158: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d215c:
    // 0x1d215c: 0x0  nop
    ctx->pc = 0x1d215cu;
    // NOP
label_1d2160:
    // 0x1d2160: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d2160u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d2164:
    // 0x1d2164: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d2168:
    // 0x1d2168: 0x1810  mfhi        $v1
    ctx->pc = 0x1d2168u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d216c:
    // 0x1d216c: 0xc053740  jal         func_14DD00
label_1d2170:
    if (ctx->pc == 0x1D2170u) {
        ctx->pc = 0x1D2170u;
            // 0x1d2170: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1D2174u;
        goto label_1d2174;
    }
    ctx->pc = 0x1D216Cu;
    SET_GPR_U32(ctx, 31, 0x1D2174u);
    ctx->pc = 0x1D2170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D216Cu;
            // 0x1d2170: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2174u; }
        if (ctx->pc != 0x1D2174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2174u; }
        if (ctx->pc != 0x1D2174u) { return; }
    }
    ctx->pc = 0x1D2174u;
label_1d2174:
    // 0x1d2174: 0xc050bb4  jal         func_142ED0
label_1d2178:
    if (ctx->pc == 0x1D2178u) {
        ctx->pc = 0x1D217Cu;
        goto label_1d217c;
    }
    ctx->pc = 0x1D2174u;
    SET_GPR_U32(ctx, 31, 0x1D217Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D217Cu; }
        if (ctx->pc != 0x1D217Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D217Cu; }
        if (ctx->pc != 0x1D217Cu) { return; }
    }
    ctx->pc = 0x1D217Cu;
label_1d217c:
    // 0x1d217c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2180:
    // 0x1d2180: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2184:
    // 0x1d2184: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2184u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2188:
    // 0x1d2188: 0x0  nop
    ctx->pc = 0x1d2188u;
    // NOP
label_1d218c:
    // 0x1d218c: 0x0  nop
    ctx->pc = 0x1d218cu;
    // NOP
label_1d2190:
    // 0x1d2190: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2190u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2194:
    // 0x1d2194: 0xc050bb4  jal         func_142ED0
label_1d2198:
    if (ctx->pc == 0x1D2198u) {
        ctx->pc = 0x1D2198u;
            // 0x1d2198: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D219Cu;
        goto label_1d219c;
    }
    ctx->pc = 0x1D2194u;
    SET_GPR_U32(ctx, 31, 0x1D219Cu);
    ctx->pc = 0x1D2198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2194u;
            // 0x1d2198: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D219Cu; }
        if (ctx->pc != 0x1D219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D219Cu; }
        if (ctx->pc != 0x1D219Cu) { return; }
    }
    ctx->pc = 0x1D219Cu;
label_1d219c:
    // 0x1d219c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d21a0:
    // 0x1d21a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d21a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d21a4:
    // 0x1d21a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d21a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d21a8:
    // 0x1d21a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d21a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d21ac:
    // 0x1d21ac: 0x0  nop
    ctx->pc = 0x1d21acu;
    // NOP
label_1d21b0:
    // 0x1d21b0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d21b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d21b4:
    // 0x1d21b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d21b8:
    // 0x1d21b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1d21b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d21bc:
    // 0x1d21bc: 0xc053740  jal         func_14DD00
label_1d21c0:
    if (ctx->pc == 0x1D21C0u) {
        ctx->pc = 0x1D21C0u;
            // 0x1d21c0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1D21C4u;
        goto label_1d21c4;
    }
    ctx->pc = 0x1D21BCu;
    SET_GPR_U32(ctx, 31, 0x1D21C4u);
    ctx->pc = 0x1D21C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21BCu;
            // 0x1d21c0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21C4u; }
        if (ctx->pc != 0x1D21C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21C4u; }
        if (ctx->pc != 0x1D21C4u) { return; }
    }
    ctx->pc = 0x1D21C4u;
label_1d21c4:
    // 0x1d21c4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d21c8:
    // 0x1d21c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d21c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d21cc:
    // 0x1d21cc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d21d0:
    // 0x1d21d0: 0xc053740  jal         func_14DD00
label_1d21d4:
    if (ctx->pc == 0x1D21D4u) {
        ctx->pc = 0x1D21D4u;
            // 0x1d21d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D21D8u;
        goto label_1d21d8;
    }
    ctx->pc = 0x1D21D0u;
    SET_GPR_U32(ctx, 31, 0x1D21D8u);
    ctx->pc = 0x1D21D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21D0u;
            // 0x1d21d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21D8u; }
        if (ctx->pc != 0x1D21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21D8u; }
        if (ctx->pc != 0x1D21D8u) { return; }
    }
    ctx->pc = 0x1D21D8u;
label_1d21d8:
    // 0x1d21d8: 0xc050bb4  jal         func_142ED0
label_1d21dc:
    if (ctx->pc == 0x1D21DCu) {
        ctx->pc = 0x1D21E0u;
        goto label_1d21e0;
    }
    ctx->pc = 0x1D21D8u;
    SET_GPR_U32(ctx, 31, 0x1D21E0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21E0u; }
        if (ctx->pc != 0x1D21E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D21E0u; }
        if (ctx->pc != 0x1D21E0u) { return; }
    }
    ctx->pc = 0x1D21E0u;
label_1d21e0:
    // 0x1d21e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d21e4:
    // 0x1d21e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d21e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d21e8:
    // 0x1d21e8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d21e8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d21ec:
    // 0x1d21ec: 0x0  nop
    ctx->pc = 0x1d21ecu;
    // NOP
label_1d21f0:
    // 0x1d21f0: 0x0  nop
    ctx->pc = 0x1d21f0u;
    // NOP
label_1d21f4:
    // 0x1d21f4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d21f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d21f8:
    // 0x1d21f8: 0xc050bb4  jal         func_142ED0
label_1d21fc:
    if (ctx->pc == 0x1D21FCu) {
        ctx->pc = 0x1D21FCu;
            // 0x1d21fc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2200u;
        goto label_1d2200;
    }
    ctx->pc = 0x1D21F8u;
    SET_GPR_U32(ctx, 31, 0x1D2200u);
    ctx->pc = 0x1D21FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21F8u;
            // 0x1d21fc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2200u; }
        if (ctx->pc != 0x1D2200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2200u; }
        if (ctx->pc != 0x1D2200u) { return; }
    }
    ctx->pc = 0x1D2200u;
label_1d2200:
    // 0x1d2200: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2204:
    // 0x1d2204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2208:
    // 0x1d2208: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2208u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d220c:
    // 0x1d220c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d2210:
    // 0x1d2210: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d2214:
    // 0x1d2214: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2218:
    // 0x1d2218: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2218u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d221c:
    // 0x1d221c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d221cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d2220:
    // 0x1d2220: 0xc053740  jal         func_14DD00
label_1d2224:
    if (ctx->pc == 0x1D2224u) {
        ctx->pc = 0x1D2224u;
            // 0x1d2224: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2228u;
        goto label_1d2228;
    }
    ctx->pc = 0x1D2220u;
    SET_GPR_U32(ctx, 31, 0x1D2228u);
    ctx->pc = 0x1D2224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2220u;
            // 0x1d2224: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2228u; }
        if (ctx->pc != 0x1D2228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2228u; }
        if (ctx->pc != 0x1D2228u) { return; }
    }
    ctx->pc = 0x1D2228u;
label_1d2228:
    // 0x1d2228: 0xc050bb4  jal         func_142ED0
label_1d222c:
    if (ctx->pc == 0x1D222Cu) {
        ctx->pc = 0x1D2230u;
        goto label_1d2230;
    }
    ctx->pc = 0x1D2228u;
    SET_GPR_U32(ctx, 31, 0x1D2230u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2230u; }
        if (ctx->pc != 0x1D2230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2230u; }
        if (ctx->pc != 0x1D2230u) { return; }
    }
    ctx->pc = 0x1D2230u;
label_1d2230:
    // 0x1d2230: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2234:
    // 0x1d2234: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2238:
    // 0x1d2238: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2238u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d223c:
    // 0x1d223c: 0x0  nop
    ctx->pc = 0x1d223cu;
    // NOP
label_1d2240:
    // 0x1d2240: 0x0  nop
    ctx->pc = 0x1d2240u;
    // NOP
label_1d2244:
    // 0x1d2244: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2244u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2248:
    // 0x1d2248: 0xc050bb4  jal         func_142ED0
label_1d224c:
    if (ctx->pc == 0x1D224Cu) {
        ctx->pc = 0x1D224Cu;
            // 0x1d224c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2250u;
        goto label_1d2250;
    }
    ctx->pc = 0x1D2248u;
    SET_GPR_U32(ctx, 31, 0x1D2250u);
    ctx->pc = 0x1D224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2248u;
            // 0x1d224c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2250u; }
        if (ctx->pc != 0x1D2250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2250u; }
        if (ctx->pc != 0x1D2250u) { return; }
    }
    ctx->pc = 0x1D2250u;
label_1d2250:
    // 0x1d2250: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2254:
    // 0x1d2254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2258:
    // 0x1d2258: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2258u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d225c:
    // 0x1d225c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d2260:
    // 0x1d2260: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d2264:
    // 0x1d2264: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2268:
    // 0x1d2268: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d226c:
    // 0x1d226c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d226cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d2270:
    // 0x1d2270: 0xc053740  jal         func_14DD00
label_1d2274:
    if (ctx->pc == 0x1D2274u) {
        ctx->pc = 0x1D2274u;
            // 0x1d2274: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2278u;
        goto label_1d2278;
    }
    ctx->pc = 0x1D2270u;
    SET_GPR_U32(ctx, 31, 0x1D2278u);
    ctx->pc = 0x1D2274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2270u;
            // 0x1d2274: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2278u; }
        if (ctx->pc != 0x1D2278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2278u; }
        if (ctx->pc != 0x1D2278u) { return; }
    }
    ctx->pc = 0x1D2278u;
label_1d2278:
    // 0x1d2278: 0xc050bb4  jal         func_142ED0
label_1d227c:
    if (ctx->pc == 0x1D227Cu) {
        ctx->pc = 0x1D2280u;
        goto label_1d2280;
    }
    ctx->pc = 0x1D2278u;
    SET_GPR_U32(ctx, 31, 0x1D2280u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2280u; }
        if (ctx->pc != 0x1D2280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2280u; }
        if (ctx->pc != 0x1D2280u) { return; }
    }
    ctx->pc = 0x1D2280u;
label_1d2280:
    // 0x1d2280: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2284:
    // 0x1d2284: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2288:
    // 0x1d2288: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2288u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d228c:
    // 0x1d228c: 0x0  nop
    ctx->pc = 0x1d228cu;
    // NOP
label_1d2290:
    // 0x1d2290: 0x0  nop
    ctx->pc = 0x1d2290u;
    // NOP
label_1d2294:
    // 0x1d2294: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2294u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2298:
    // 0x1d2298: 0xc050bb4  jal         func_142ED0
label_1d229c:
    if (ctx->pc == 0x1D229Cu) {
        ctx->pc = 0x1D229Cu;
            // 0x1d229c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D22A0u;
        goto label_1d22a0;
    }
    ctx->pc = 0x1D2298u;
    SET_GPR_U32(ctx, 31, 0x1D22A0u);
    ctx->pc = 0x1D229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2298u;
            // 0x1d229c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22A0u; }
        if (ctx->pc != 0x1D22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22A0u; }
        if (ctx->pc != 0x1D22A0u) { return; }
    }
    ctx->pc = 0x1D22A0u;
label_1d22a0:
    // 0x1d22a0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d22a4:
    // 0x1d22a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d22a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d22a8:
    // 0x1d22a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d22a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d22ac:
    // 0x1d22ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d22b0:
    // 0x1d22b0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d22b4:
    // 0x1d22b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d22b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d22b8:
    // 0x1d22b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d22b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d22bc:
    // 0x1d22bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d22bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d22c0:
    // 0x1d22c0: 0xc053740  jal         func_14DD00
label_1d22c4:
    if (ctx->pc == 0x1D22C4u) {
        ctx->pc = 0x1D22C4u;
            // 0x1d22c4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D22C8u;
        goto label_1d22c8;
    }
    ctx->pc = 0x1D22C0u;
    SET_GPR_U32(ctx, 31, 0x1D22C8u);
    ctx->pc = 0x1D22C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22C0u;
            // 0x1d22c4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22C8u; }
        if (ctx->pc != 0x1D22C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22C8u; }
        if (ctx->pc != 0x1D22C8u) { return; }
    }
    ctx->pc = 0x1D22C8u;
label_1d22c8:
    // 0x1d22c8: 0xc050bb4  jal         func_142ED0
label_1d22cc:
    if (ctx->pc == 0x1D22CCu) {
        ctx->pc = 0x1D22D0u;
        goto label_1d22d0;
    }
    ctx->pc = 0x1D22C8u;
    SET_GPR_U32(ctx, 31, 0x1D22D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22D0u; }
        if (ctx->pc != 0x1D22D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22D0u; }
        if (ctx->pc != 0x1D22D0u) { return; }
    }
    ctx->pc = 0x1D22D0u;
label_1d22d0:
    // 0x1d22d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d22d4:
    // 0x1d22d4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d22d8:
    // 0x1d22d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d22d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d22dc:
    // 0x1d22dc: 0x0  nop
    ctx->pc = 0x1d22dcu;
    // NOP
label_1d22e0:
    // 0x1d22e0: 0x0  nop
    ctx->pc = 0x1d22e0u;
    // NOP
label_1d22e4:
    // 0x1d22e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d22e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d22e8:
    // 0x1d22e8: 0xc050bb4  jal         func_142ED0
label_1d22ec:
    if (ctx->pc == 0x1D22ECu) {
        ctx->pc = 0x1D22ECu;
            // 0x1d22ec: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D22F0u;
        goto label_1d22f0;
    }
    ctx->pc = 0x1D22E8u;
    SET_GPR_U32(ctx, 31, 0x1D22F0u);
    ctx->pc = 0x1D22ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22E8u;
            // 0x1d22ec: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22F0u; }
        if (ctx->pc != 0x1D22F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D22F0u; }
        if (ctx->pc != 0x1D22F0u) { return; }
    }
    ctx->pc = 0x1D22F0u;
label_1d22f0:
    // 0x1d22f0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d22f4:
    // 0x1d22f4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d22f8:
    // 0x1d22f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d22f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d22fc:
    // 0x1d22fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2300:
    // 0x1d2300: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d2300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1d2304:
    // 0x1d2304: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d2304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1d2308:
    // 0x1d2308: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d2308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d230c:
    // 0x1d230c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d230cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2310:
    // 0x1d2310: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2314:
    // 0x1d2314: 0xc053740  jal         func_14DD00
label_1d2318:
    if (ctx->pc == 0x1D2318u) {
        ctx->pc = 0x1D2318u;
            // 0x1d2318: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D231Cu;
        goto label_1d231c;
    }
    ctx->pc = 0x1D2314u;
    SET_GPR_U32(ctx, 31, 0x1D231Cu);
    ctx->pc = 0x1D2318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2314u;
            // 0x1d2318: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D231Cu; }
        if (ctx->pc != 0x1D231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D231Cu; }
        if (ctx->pc != 0x1D231Cu) { return; }
    }
    ctx->pc = 0x1D231Cu;
label_1d231c:
    // 0x1d231c: 0xc050bb4  jal         func_142ED0
label_1d2320:
    if (ctx->pc == 0x1D2320u) {
        ctx->pc = 0x1D2324u;
        goto label_1d2324;
    }
    ctx->pc = 0x1D231Cu;
    SET_GPR_U32(ctx, 31, 0x1D2324u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2324u; }
        if (ctx->pc != 0x1D2324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2324u; }
        if (ctx->pc != 0x1D2324u) { return; }
    }
    ctx->pc = 0x1D2324u;
label_1d2324:
    // 0x1d2324: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2328:
    // 0x1d2328: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d232c:
    // 0x1d232c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d232cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2330:
    // 0x1d2330: 0x0  nop
    ctx->pc = 0x1d2330u;
    // NOP
label_1d2334:
    // 0x1d2334: 0x0  nop
    ctx->pc = 0x1d2334u;
    // NOP
label_1d2338:
    // 0x1d2338: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2338u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d233c:
    // 0x1d233c: 0xc050bb4  jal         func_142ED0
label_1d2340:
    if (ctx->pc == 0x1D2340u) {
        ctx->pc = 0x1D2340u;
            // 0x1d2340: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2344u;
        goto label_1d2344;
    }
    ctx->pc = 0x1D233Cu;
    SET_GPR_U32(ctx, 31, 0x1D2344u);
    ctx->pc = 0x1D2340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D233Cu;
            // 0x1d2340: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2344u; }
        if (ctx->pc != 0x1D2344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2344u; }
        if (ctx->pc != 0x1D2344u) { return; }
    }
    ctx->pc = 0x1D2344u;
label_1d2344:
    // 0x1d2344: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2348:
    // 0x1d2348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d234c:
    // 0x1d234c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d234cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2350:
    // 0x1d2350: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1d2354:
    // 0x1d2354: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d2358:
    // 0x1d2358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d2358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d235c:
    // 0x1d235c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d235cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2360:
    // 0x1d2360: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d2360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d2364:
    // 0x1d2364: 0xc053740  jal         func_14DD00
label_1d2368:
    if (ctx->pc == 0x1D2368u) {
        ctx->pc = 0x1D2368u;
            // 0x1d2368: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D236Cu;
        goto label_1d236c;
    }
    ctx->pc = 0x1D2364u;
    SET_GPR_U32(ctx, 31, 0x1D236Cu);
    ctx->pc = 0x1D2368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2364u;
            // 0x1d2368: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D236Cu; }
        if (ctx->pc != 0x1D236Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D236Cu; }
        if (ctx->pc != 0x1D236Cu) { return; }
    }
    ctx->pc = 0x1D236Cu;
label_1d236c:
    // 0x1d236c: 0xc050bb4  jal         func_142ED0
label_1d2370:
    if (ctx->pc == 0x1D2370u) {
        ctx->pc = 0x1D2374u;
        goto label_1d2374;
    }
    ctx->pc = 0x1D236Cu;
    SET_GPR_U32(ctx, 31, 0x1D2374u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2374u; }
        if (ctx->pc != 0x1D2374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2374u; }
        if (ctx->pc != 0x1D2374u) { return; }
    }
    ctx->pc = 0x1D2374u;
label_1d2374:
    // 0x1d2374: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d2374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2378:
    // 0x1d2378: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d237c:
    // 0x1d237c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d237cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2380:
    // 0x1d2380: 0x0  nop
    ctx->pc = 0x1d2380u;
    // NOP
label_1d2384:
    // 0x1d2384: 0x0  nop
    ctx->pc = 0x1d2384u;
    // NOP
label_1d2388:
    // 0x1d2388: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2388u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d238c:
    // 0x1d238c: 0xc050bb4  jal         func_142ED0
label_1d2390:
    if (ctx->pc == 0x1D2390u) {
        ctx->pc = 0x1D2390u;
            // 0x1d2390: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2394u;
        goto label_1d2394;
    }
    ctx->pc = 0x1D238Cu;
    SET_GPR_U32(ctx, 31, 0x1D2394u);
    ctx->pc = 0x1D2390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D238Cu;
            // 0x1d2390: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2394u; }
        if (ctx->pc != 0x1D2394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2394u; }
        if (ctx->pc != 0x1D2394u) { return; }
    }
    ctx->pc = 0x1D2394u;
label_1d2394:
    // 0x1d2394: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2398:
    // 0x1d2398: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d239c:
    // 0x1d239c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d239cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d23a0:
    // 0x1d23a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d23a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d23a4:
    // 0x1d23a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d23a8:
    // 0x1d23a8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1d23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1d23ac:
    // 0x1d23ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d23acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d23b0:
    // 0x1d23b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d23b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d23b4:
    // 0x1d23b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d23b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d23b8:
    // 0x1d23b8: 0xc053740  jal         func_14DD00
label_1d23bc:
    if (ctx->pc == 0x1D23BCu) {
        ctx->pc = 0x1D23BCu;
            // 0x1d23bc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D23C0u;
        goto label_1d23c0;
    }
    ctx->pc = 0x1D23B8u;
    SET_GPR_U32(ctx, 31, 0x1D23C0u);
    ctx->pc = 0x1D23BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23B8u;
            // 0x1d23bc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23C0u; }
        if (ctx->pc != 0x1D23C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23C0u; }
        if (ctx->pc != 0x1D23C0u) { return; }
    }
    ctx->pc = 0x1D23C0u;
label_1d23c0:
    // 0x1d23c0: 0xc050bb4  jal         func_142ED0
label_1d23c4:
    if (ctx->pc == 0x1D23C4u) {
        ctx->pc = 0x1D23C8u;
        goto label_1d23c8;
    }
    ctx->pc = 0x1D23C0u;
    SET_GPR_U32(ctx, 31, 0x1D23C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23C8u; }
        if (ctx->pc != 0x1D23C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23C8u; }
        if (ctx->pc != 0x1D23C8u) { return; }
    }
    ctx->pc = 0x1D23C8u;
label_1d23c8:
    // 0x1d23c8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d23cc:
    // 0x1d23cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d23d0:
    // 0x1d23d0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d23d0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d23d4:
    // 0x1d23d4: 0x0  nop
    ctx->pc = 0x1d23d4u;
    // NOP
label_1d23d8:
    // 0x1d23d8: 0x0  nop
    ctx->pc = 0x1d23d8u;
    // NOP
label_1d23dc:
    // 0x1d23dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1d23dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d23e0:
    // 0x1d23e0: 0xc050bb4  jal         func_142ED0
label_1d23e4:
    if (ctx->pc == 0x1D23E4u) {
        ctx->pc = 0x1D23E4u;
            // 0x1d23e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D23E8u;
        goto label_1d23e8;
    }
    ctx->pc = 0x1D23E0u;
    SET_GPR_U32(ctx, 31, 0x1D23E8u);
    ctx->pc = 0x1D23E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23E0u;
            // 0x1d23e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23E8u; }
        if (ctx->pc != 0x1D23E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23E8u; }
        if (ctx->pc != 0x1D23E8u) { return; }
    }
    ctx->pc = 0x1D23E8u;
label_1d23e8:
    // 0x1d23e8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d23ec:
    // 0x1d23ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d23f0:
    // 0x1d23f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d23f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d23f4:
    // 0x1d23f4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1d23f8:
    // 0x1d23f8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d23fc:
    // 0x1d23fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d23fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2400:
    // 0x1d2400: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2400u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2404:
    // 0x1d2404: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d2404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d2408:
    // 0x1d2408: 0xc053740  jal         func_14DD00
label_1d240c:
    if (ctx->pc == 0x1D240Cu) {
        ctx->pc = 0x1D240Cu;
            // 0x1d240c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2410u;
        goto label_1d2410;
    }
    ctx->pc = 0x1D2408u;
    SET_GPR_U32(ctx, 31, 0x1D2410u);
    ctx->pc = 0x1D240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2408u;
            // 0x1d240c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2410u; }
        if (ctx->pc != 0x1D2410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2410u; }
        if (ctx->pc != 0x1D2410u) { return; }
    }
    ctx->pc = 0x1D2410u;
label_1d2410:
    // 0x1d2410: 0xc050bb4  jal         func_142ED0
label_1d2414:
    if (ctx->pc == 0x1D2414u) {
        ctx->pc = 0x1D2418u;
        goto label_1d2418;
    }
    ctx->pc = 0x1D2410u;
    SET_GPR_U32(ctx, 31, 0x1D2418u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2418u; }
        if (ctx->pc != 0x1D2418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2418u; }
        if (ctx->pc != 0x1D2418u) { return; }
    }
    ctx->pc = 0x1D2418u;
label_1d2418:
    // 0x1d2418: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d241c:
    // 0x1d241c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2420:
    // 0x1d2420: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2420u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2424:
    // 0x1d2424: 0x0  nop
    ctx->pc = 0x1d2424u;
    // NOP
label_1d2428:
    // 0x1d2428: 0x0  nop
    ctx->pc = 0x1d2428u;
    // NOP
label_1d242c:
    // 0x1d242c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d242cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2430:
    // 0x1d2430: 0xc050bb4  jal         func_142ED0
label_1d2434:
    if (ctx->pc == 0x1D2434u) {
        ctx->pc = 0x1D2434u;
            // 0x1d2434: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2438u;
        goto label_1d2438;
    }
    ctx->pc = 0x1D2430u;
    SET_GPR_U32(ctx, 31, 0x1D2438u);
    ctx->pc = 0x1D2434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2430u;
            // 0x1d2434: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2438u; }
        if (ctx->pc != 0x1D2438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2438u; }
        if (ctx->pc != 0x1D2438u) { return; }
    }
    ctx->pc = 0x1D2438u;
label_1d2438:
    // 0x1d2438: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d243c:
    // 0x1d243c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2440:
    // 0x1d2440: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2440u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d2444:
    // 0x1d2444: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1d2448:
    // 0x1d2448: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d244c:
    // 0x1d244c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d244cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2450:
    // 0x1d2450: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2450u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d2454:
    // 0x1d2454: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d2454u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d2458:
    // 0x1d2458: 0xc053740  jal         func_14DD00
label_1d245c:
    if (ctx->pc == 0x1D245Cu) {
        ctx->pc = 0x1D245Cu;
            // 0x1d245c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D2460u;
        goto label_1d2460;
    }
    ctx->pc = 0x1D2458u;
    SET_GPR_U32(ctx, 31, 0x1D2460u);
    ctx->pc = 0x1D245Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2458u;
            // 0x1d245c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2460u; }
        if (ctx->pc != 0x1D2460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2460u; }
        if (ctx->pc != 0x1D2460u) { return; }
    }
    ctx->pc = 0x1D2460u;
label_1d2460:
    // 0x1d2460: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d2464:
    // 0x1d2464: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d2468:
    // 0x1d2468: 0xc07b0ac  jal         func_1EC2B0
label_1d246c:
    if (ctx->pc == 0x1D246Cu) {
        ctx->pc = 0x1D246Cu;
            // 0x1d246c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D2470u;
        goto label_1d2470;
    }
    ctx->pc = 0x1D2468u;
    SET_GPR_U32(ctx, 31, 0x1D2470u);
    ctx->pc = 0x1D246Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2468u;
            // 0x1d246c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2470u; }
        if (ctx->pc != 0x1D2470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2470u; }
        if (ctx->pc != 0x1D2470u) { return; }
    }
    ctx->pc = 0x1D2470u;
label_1d2470:
    // 0x1d2470: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d2474:
    // 0x1d2474: 0x40f809  jalr        $v0
label_1d2478:
    if (ctx->pc == 0x1D2478u) {
        ctx->pc = 0x1D2478u;
            // 0x1d2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D247Cu;
        goto label_1d247c;
    }
    ctx->pc = 0x1D2474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D247Cu);
        ctx->pc = 0x1D2478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2474u;
            // 0x1d2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1230u: goto label_1d1230;
            case 0x1D1234u: goto label_1d1234;
            case 0x1D1238u: goto label_1d1238;
            case 0x1D123Cu: goto label_1d123c;
            case 0x1D1240u: goto label_1d1240;
            case 0x1D1244u: goto label_1d1244;
            case 0x1D1248u: goto label_1d1248;
            case 0x1D124Cu: goto label_1d124c;
            case 0x1D1250u: goto label_1d1250;
            case 0x1D1254u: goto label_1d1254;
            case 0x1D1258u: goto label_1d1258;
            case 0x1D125Cu: goto label_1d125c;
            case 0x1D1260u: goto label_1d1260;
            case 0x1D1264u: goto label_1d1264;
            case 0x1D1268u: goto label_1d1268;
            case 0x1D126Cu: goto label_1d126c;
            case 0x1D1270u: goto label_1d1270;
            case 0x1D1274u: goto label_1d1274;
            case 0x1D1278u: goto label_1d1278;
            case 0x1D127Cu: goto label_1d127c;
            case 0x1D1280u: goto label_1d1280;
            case 0x1D1284u: goto label_1d1284;
            case 0x1D1288u: goto label_1d1288;
            case 0x1D128Cu: goto label_1d128c;
            case 0x1D1290u: goto label_1d1290;
            case 0x1D1294u: goto label_1d1294;
            case 0x1D1298u: goto label_1d1298;
            case 0x1D129Cu: goto label_1d129c;
            case 0x1D12A0u: goto label_1d12a0;
            case 0x1D12A4u: goto label_1d12a4;
            case 0x1D12A8u: goto label_1d12a8;
            case 0x1D12ACu: goto label_1d12ac;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12B4u: goto label_1d12b4;
            case 0x1D12B8u: goto label_1d12b8;
            case 0x1D12BCu: goto label_1d12bc;
            case 0x1D12C0u: goto label_1d12c0;
            case 0x1D12C4u: goto label_1d12c4;
            case 0x1D12C8u: goto label_1d12c8;
            case 0x1D12CCu: goto label_1d12cc;
            case 0x1D12D0u: goto label_1d12d0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12D8u: goto label_1d12d8;
            case 0x1D12DCu: goto label_1d12dc;
            case 0x1D12E0u: goto label_1d12e0;
            case 0x1D12E4u: goto label_1d12e4;
            case 0x1D12E8u: goto label_1d12e8;
            case 0x1D12ECu: goto label_1d12ec;
            case 0x1D12F0u: goto label_1d12f0;
            case 0x1D12F4u: goto label_1d12f4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D12FCu: goto label_1d12fc;
            case 0x1D1300u: goto label_1d1300;
            case 0x1D1304u: goto label_1d1304;
            case 0x1D1308u: goto label_1d1308;
            case 0x1D130Cu: goto label_1d130c;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1314u: goto label_1d1314;
            case 0x1D1318u: goto label_1d1318;
            case 0x1D131Cu: goto label_1d131c;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1324u: goto label_1d1324;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D132Cu: goto label_1d132c;
            case 0x1D1330u: goto label_1d1330;
            case 0x1D1334u: goto label_1d1334;
            case 0x1D1338u: goto label_1d1338;
            case 0x1D133Cu: goto label_1d133c;
            case 0x1D1340u: goto label_1d1340;
            case 0x1D1344u: goto label_1d1344;
            case 0x1D1348u: goto label_1d1348;
            case 0x1D134Cu: goto label_1d134c;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1354u: goto label_1d1354;
            case 0x1D1358u: goto label_1d1358;
            case 0x1D135Cu: goto label_1d135c;
            case 0x1D1360u: goto label_1d1360;
            case 0x1D1364u: goto label_1d1364;
            case 0x1D1368u: goto label_1d1368;
            case 0x1D136Cu: goto label_1d136c;
            case 0x1D1370u: goto label_1d1370;
            case 0x1D1374u: goto label_1d1374;
            case 0x1D1378u: goto label_1d1378;
            case 0x1D137Cu: goto label_1d137c;
            case 0x1D1380u: goto label_1d1380;
            case 0x1D1384u: goto label_1d1384;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D138Cu: goto label_1d138c;
            case 0x1D1390u: goto label_1d1390;
            case 0x1D1394u: goto label_1d1394;
            case 0x1D1398u: goto label_1d1398;
            case 0x1D139Cu: goto label_1d139c;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13A4u: goto label_1d13a4;
            case 0x1D13A8u: goto label_1d13a8;
            case 0x1D13ACu: goto label_1d13ac;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B4u: goto label_1d13b4;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13BCu: goto label_1d13bc;
            case 0x1D13C0u: goto label_1d13c0;
            case 0x1D13C4u: goto label_1d13c4;
            case 0x1D13C8u: goto label_1d13c8;
            case 0x1D13CCu: goto label_1d13cc;
            case 0x1D13D0u: goto label_1d13d0;
            case 0x1D13D4u: goto label_1d13d4;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13DCu: goto label_1d13dc;
            case 0x1D13E0u: goto label_1d13e0;
            case 0x1D13E4u: goto label_1d13e4;
            case 0x1D13E8u: goto label_1d13e8;
            case 0x1D13ECu: goto label_1d13ec;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            case 0x1D13F8u: goto label_1d13f8;
            case 0x1D13FCu: goto label_1d13fc;
            case 0x1D1400u: goto label_1d1400;
            case 0x1D1404u: goto label_1d1404;
            case 0x1D1408u: goto label_1d1408;
            case 0x1D140Cu: goto label_1d140c;
            case 0x1D1410u: goto label_1d1410;
            case 0x1D1414u: goto label_1d1414;
            case 0x1D1418u: goto label_1d1418;
            case 0x1D141Cu: goto label_1d141c;
            case 0x1D1420u: goto label_1d1420;
            case 0x1D1424u: goto label_1d1424;
            case 0x1D1428u: goto label_1d1428;
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D1430u: goto label_1d1430;
            case 0x1D1434u: goto label_1d1434;
            case 0x1D1438u: goto label_1d1438;
            case 0x1D143Cu: goto label_1d143c;
            case 0x1D1440u: goto label_1d1440;
            case 0x1D1444u: goto label_1d1444;
            case 0x1D1448u: goto label_1d1448;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1450u: goto label_1d1450;
            case 0x1D1454u: goto label_1d1454;
            case 0x1D1458u: goto label_1d1458;
            case 0x1D145Cu: goto label_1d145c;
            case 0x1D1460u: goto label_1d1460;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1468u: goto label_1d1468;
            case 0x1D146Cu: goto label_1d146c;
            case 0x1D1470u: goto label_1d1470;
            case 0x1D1474u: goto label_1d1474;
            case 0x1D1478u: goto label_1d1478;
            case 0x1D147Cu: goto label_1d147c;
            case 0x1D1480u: goto label_1d1480;
            case 0x1D1484u: goto label_1d1484;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D148Cu: goto label_1d148c;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D1494u: goto label_1d1494;
            case 0x1D1498u: goto label_1d1498;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A0u: goto label_1d14a0;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14A8u: goto label_1d14a8;
            case 0x1D14ACu: goto label_1d14ac;
            case 0x1D14B0u: goto label_1d14b0;
            case 0x1D14B4u: goto label_1d14b4;
            case 0x1D14B8u: goto label_1d14b8;
            case 0x1D14BCu: goto label_1d14bc;
            case 0x1D14C0u: goto label_1d14c0;
            case 0x1D14C4u: goto label_1d14c4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14CCu: goto label_1d14cc;
            case 0x1D14D0u: goto label_1d14d0;
            case 0x1D14D4u: goto label_1d14d4;
            case 0x1D14D8u: goto label_1d14d8;
            case 0x1D14DCu: goto label_1d14dc;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14E4u: goto label_1d14e4;
            case 0x1D14E8u: goto label_1d14e8;
            case 0x1D14ECu: goto label_1d14ec;
            case 0x1D14F0u: goto label_1d14f0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            case 0x1D14FCu: goto label_1d14fc;
            case 0x1D1500u: goto label_1d1500;
            case 0x1D1504u: goto label_1d1504;
            case 0x1D1508u: goto label_1d1508;
            case 0x1D150Cu: goto label_1d150c;
            case 0x1D1510u: goto label_1d1510;
            case 0x1D1514u: goto label_1d1514;
            case 0x1D1518u: goto label_1d1518;
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D1520u: goto label_1d1520;
            case 0x1D1524u: goto label_1d1524;
            case 0x1D1528u: goto label_1d1528;
            case 0x1D152Cu: goto label_1d152c;
            case 0x1D1530u: goto label_1d1530;
            case 0x1D1534u: goto label_1d1534;
            case 0x1D1538u: goto label_1d1538;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1540u: goto label_1d1540;
            case 0x1D1544u: goto label_1d1544;
            case 0x1D1548u: goto label_1d1548;
            case 0x1D154Cu: goto label_1d154c;
            case 0x1D1550u: goto label_1d1550;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1558u: goto label_1d1558;
            case 0x1D155Cu: goto label_1d155c;
            case 0x1D1560u: goto label_1d1560;
            case 0x1D1564u: goto label_1d1564;
            case 0x1D1568u: goto label_1d1568;
            case 0x1D156Cu: goto label_1d156c;
            case 0x1D1570u: goto label_1d1570;
            case 0x1D1574u: goto label_1d1574;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D157Cu: goto label_1d157c;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1584u: goto label_1d1584;
            case 0x1D1588u: goto label_1d1588;
            case 0x1D158Cu: goto label_1d158c;
            case 0x1D1590u: goto label_1d1590;
            case 0x1D1594u: goto label_1d1594;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D159Cu: goto label_1d159c;
            case 0x1D15A0u: goto label_1d15a0;
            case 0x1D15A4u: goto label_1d15a4;
            case 0x1D15A8u: goto label_1d15a8;
            case 0x1D15ACu: goto label_1d15ac;
            case 0x1D15B0u: goto label_1d15b0;
            case 0x1D15B4u: goto label_1d15b4;
            case 0x1D15B8u: goto label_1d15b8;
            case 0x1D15BCu: goto label_1d15bc;
            case 0x1D15C0u: goto label_1d15c0;
            case 0x1D15C4u: goto label_1d15c4;
            case 0x1D15C8u: goto label_1d15c8;
            case 0x1D15CCu: goto label_1d15cc;
            case 0x1D15D0u: goto label_1d15d0;
            case 0x1D15D4u: goto label_1d15d4;
            case 0x1D15D8u: goto label_1d15d8;
            case 0x1D15DCu: goto label_1d15dc;
            case 0x1D15E0u: goto label_1d15e0;
            case 0x1D15E4u: goto label_1d15e4;
            case 0x1D15E8u: goto label_1d15e8;
            case 0x1D15ECu: goto label_1d15ec;
            case 0x1D15F0u: goto label_1d15f0;
            case 0x1D15F4u: goto label_1d15f4;
            case 0x1D15F8u: goto label_1d15f8;
            case 0x1D15FCu: goto label_1d15fc;
            case 0x1D1600u: goto label_1d1600;
            case 0x1D1604u: goto label_1d1604;
            case 0x1D1608u: goto label_1d1608;
            case 0x1D160Cu: goto label_1d160c;
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1614u: goto label_1d1614;
            case 0x1D1618u: goto label_1d1618;
            case 0x1D161Cu: goto label_1d161c;
            case 0x1D1620u: goto label_1d1620;
            case 0x1D1624u: goto label_1d1624;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D162Cu: goto label_1d162c;
            case 0x1D1630u: goto label_1d1630;
            case 0x1D1634u: goto label_1d1634;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D163Cu: goto label_1d163c;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1644u: goto label_1d1644;
            case 0x1D1648u: goto label_1d1648;
            case 0x1D164Cu: goto label_1d164c;
            case 0x1D1650u: goto label_1d1650;
            case 0x1D1654u: goto label_1d1654;
            case 0x1D1658u: goto label_1d1658;
            case 0x1D165Cu: goto label_1d165c;
            case 0x1D1660u: goto label_1d1660;
            case 0x1D1664u: goto label_1d1664;
            case 0x1D1668u: goto label_1d1668;
            case 0x1D166Cu: goto label_1d166c;
            case 0x1D1670u: goto label_1d1670;
            case 0x1D1674u: goto label_1d1674;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D167Cu: goto label_1d167c;
            case 0x1D1680u: goto label_1d1680;
            case 0x1D1684u: goto label_1d1684;
            case 0x1D1688u: goto label_1d1688;
            case 0x1D168Cu: goto label_1d168c;
            case 0x1D1690u: goto label_1d1690;
            case 0x1D1694u: goto label_1d1694;
            case 0x1D1698u: goto label_1d1698;
            case 0x1D169Cu: goto label_1d169c;
            case 0x1D16A0u: goto label_1d16a0;
            case 0x1D16A4u: goto label_1d16a4;
            case 0x1D16A8u: goto label_1d16a8;
            case 0x1D16ACu: goto label_1d16ac;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16B8u: goto label_1d16b8;
            case 0x1D16BCu: goto label_1d16bc;
            case 0x1D16C0u: goto label_1d16c0;
            case 0x1D16C4u: goto label_1d16c4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16CCu: goto label_1d16cc;
            case 0x1D16D0u: goto label_1d16d0;
            case 0x1D16D4u: goto label_1d16d4;
            case 0x1D16D8u: goto label_1d16d8;
            case 0x1D16DCu: goto label_1d16dc;
            case 0x1D16E0u: goto label_1d16e0;
            case 0x1D16E4u: goto label_1d16e4;
            case 0x1D16E8u: goto label_1d16e8;
            case 0x1D16ECu: goto label_1d16ec;
            case 0x1D16F0u: goto label_1d16f0;
            case 0x1D16F4u: goto label_1d16f4;
            case 0x1D16F8u: goto label_1d16f8;
            case 0x1D16FCu: goto label_1d16fc;
            case 0x1D1700u: goto label_1d1700;
            case 0x1D1704u: goto label_1d1704;
            case 0x1D1708u: goto label_1d1708;
            case 0x1D170Cu: goto label_1d170c;
            case 0x1D1710u: goto label_1d1710;
            case 0x1D1714u: goto label_1d1714;
            case 0x1D1718u: goto label_1d1718;
            case 0x1D171Cu: goto label_1d171c;
            case 0x1D1720u: goto label_1d1720;
            case 0x1D1724u: goto label_1d1724;
            case 0x1D1728u: goto label_1d1728;
            case 0x1D172Cu: goto label_1d172c;
            case 0x1D1730u: goto label_1d1730;
            case 0x1D1734u: goto label_1d1734;
            case 0x1D1738u: goto label_1d1738;
            case 0x1D173Cu: goto label_1d173c;
            case 0x1D1740u: goto label_1d1740;
            case 0x1D1744u: goto label_1d1744;
            case 0x1D1748u: goto label_1d1748;
            case 0x1D174Cu: goto label_1d174c;
            case 0x1D1750u: goto label_1d1750;
            case 0x1D1754u: goto label_1d1754;
            case 0x1D1758u: goto label_1d1758;
            case 0x1D175Cu: goto label_1d175c;
            case 0x1D1760u: goto label_1d1760;
            case 0x1D1764u: goto label_1d1764;
            case 0x1D1768u: goto label_1d1768;
            case 0x1D176Cu: goto label_1d176c;
            case 0x1D1770u: goto label_1d1770;
            case 0x1D1774u: goto label_1d1774;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D177Cu: goto label_1d177c;
            case 0x1D1780u: goto label_1d1780;
            case 0x1D1784u: goto label_1d1784;
            case 0x1D1788u: goto label_1d1788;
            case 0x1D178Cu: goto label_1d178c;
            case 0x1D1790u: goto label_1d1790;
            case 0x1D1794u: goto label_1d1794;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D179Cu: goto label_1d179c;
            case 0x1D17A0u: goto label_1d17a0;
            case 0x1D17A4u: goto label_1d17a4;
            case 0x1D17A8u: goto label_1d17a8;
            case 0x1D17ACu: goto label_1d17ac;
            case 0x1D17B0u: goto label_1d17b0;
            case 0x1D17B4u: goto label_1d17b4;
            case 0x1D17B8u: goto label_1d17b8;
            case 0x1D17BCu: goto label_1d17bc;
            case 0x1D17C0u: goto label_1d17c0;
            case 0x1D17C4u: goto label_1d17c4;
            case 0x1D17C8u: goto label_1d17c8;
            case 0x1D17CCu: goto label_1d17cc;
            case 0x1D17D0u: goto label_1d17d0;
            case 0x1D17D4u: goto label_1d17d4;
            case 0x1D17D8u: goto label_1d17d8;
            case 0x1D17DCu: goto label_1d17dc;
            case 0x1D17E0u: goto label_1d17e0;
            case 0x1D17E4u: goto label_1d17e4;
            case 0x1D17E8u: goto label_1d17e8;
            case 0x1D17ECu: goto label_1d17ec;
            case 0x1D17F0u: goto label_1d17f0;
            case 0x1D17F4u: goto label_1d17f4;
            case 0x1D17F8u: goto label_1d17f8;
            case 0x1D17FCu: goto label_1d17fc;
            case 0x1D1800u: goto label_1d1800;
            case 0x1D1804u: goto label_1d1804;
            case 0x1D1808u: goto label_1d1808;
            case 0x1D180Cu: goto label_1d180c;
            case 0x1D1810u: goto label_1d1810;
            case 0x1D1814u: goto label_1d1814;
            case 0x1D1818u: goto label_1d1818;
            case 0x1D181Cu: goto label_1d181c;
            case 0x1D1820u: goto label_1d1820;
            case 0x1D1824u: goto label_1d1824;
            case 0x1D1828u: goto label_1d1828;
            case 0x1D182Cu: goto label_1d182c;
            case 0x1D1830u: goto label_1d1830;
            case 0x1D1834u: goto label_1d1834;
            case 0x1D1838u: goto label_1d1838;
            case 0x1D183Cu: goto label_1d183c;
            case 0x1D1840u: goto label_1d1840;
            case 0x1D1844u: goto label_1d1844;
            case 0x1D1848u: goto label_1d1848;
            case 0x1D184Cu: goto label_1d184c;
            case 0x1D1850u: goto label_1d1850;
            case 0x1D1854u: goto label_1d1854;
            case 0x1D1858u: goto label_1d1858;
            case 0x1D185Cu: goto label_1d185c;
            case 0x1D1860u: goto label_1d1860;
            case 0x1D1864u: goto label_1d1864;
            case 0x1D1868u: goto label_1d1868;
            case 0x1D186Cu: goto label_1d186c;
            case 0x1D1870u: goto label_1d1870;
            case 0x1D1874u: goto label_1d1874;
            case 0x1D1878u: goto label_1d1878;
            case 0x1D187Cu: goto label_1d187c;
            case 0x1D1880u: goto label_1d1880;
            case 0x1D1884u: goto label_1d1884;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1890u: goto label_1d1890;
            case 0x1D1894u: goto label_1d1894;
            case 0x1D1898u: goto label_1d1898;
            case 0x1D189Cu: goto label_1d189c;
            case 0x1D18A0u: goto label_1d18a0;
            case 0x1D18A4u: goto label_1d18a4;
            case 0x1D18A8u: goto label_1d18a8;
            case 0x1D18ACu: goto label_1d18ac;
            case 0x1D18B0u: goto label_1d18b0;
            case 0x1D18B4u: goto label_1d18b4;
            case 0x1D18B8u: goto label_1d18b8;
            case 0x1D18BCu: goto label_1d18bc;
            case 0x1D18C0u: goto label_1d18c0;
            case 0x1D18C4u: goto label_1d18c4;
            case 0x1D18C8u: goto label_1d18c8;
            case 0x1D18CCu: goto label_1d18cc;
            case 0x1D18D0u: goto label_1d18d0;
            case 0x1D18D4u: goto label_1d18d4;
            case 0x1D18D8u: goto label_1d18d8;
            case 0x1D18DCu: goto label_1d18dc;
            case 0x1D18E0u: goto label_1d18e0;
            case 0x1D18E4u: goto label_1d18e4;
            case 0x1D18E8u: goto label_1d18e8;
            case 0x1D18ECu: goto label_1d18ec;
            case 0x1D18F0u: goto label_1d18f0;
            case 0x1D18F4u: goto label_1d18f4;
            case 0x1D18F8u: goto label_1d18f8;
            case 0x1D18FCu: goto label_1d18fc;
            case 0x1D1900u: goto label_1d1900;
            case 0x1D1904u: goto label_1d1904;
            case 0x1D1908u: goto label_1d1908;
            case 0x1D190Cu: goto label_1d190c;
            case 0x1D1910u: goto label_1d1910;
            case 0x1D1914u: goto label_1d1914;
            case 0x1D1918u: goto label_1d1918;
            case 0x1D191Cu: goto label_1d191c;
            case 0x1D1920u: goto label_1d1920;
            case 0x1D1924u: goto label_1d1924;
            case 0x1D1928u: goto label_1d1928;
            case 0x1D192Cu: goto label_1d192c;
            case 0x1D1930u: goto label_1d1930;
            case 0x1D1934u: goto label_1d1934;
            case 0x1D1938u: goto label_1d1938;
            case 0x1D193Cu: goto label_1d193c;
            case 0x1D1940u: goto label_1d1940;
            case 0x1D1944u: goto label_1d1944;
            case 0x1D1948u: goto label_1d1948;
            case 0x1D194Cu: goto label_1d194c;
            case 0x1D1950u: goto label_1d1950;
            case 0x1D1954u: goto label_1d1954;
            case 0x1D1958u: goto label_1d1958;
            case 0x1D195Cu: goto label_1d195c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1964u: goto label_1d1964;
            case 0x1D1968u: goto label_1d1968;
            case 0x1D196Cu: goto label_1d196c;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D1974u: goto label_1d1974;
            case 0x1D1978u: goto label_1d1978;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D1980u: goto label_1d1980;
            case 0x1D1984u: goto label_1d1984;
            case 0x1D1988u: goto label_1d1988;
            case 0x1D198Cu: goto label_1d198c;
            case 0x1D1990u: goto label_1d1990;
            case 0x1D1994u: goto label_1d1994;
            case 0x1D1998u: goto label_1d1998;
            case 0x1D199Cu: goto label_1d199c;
            case 0x1D19A0u: goto label_1d19a0;
            case 0x1D19A4u: goto label_1d19a4;
            case 0x1D19A8u: goto label_1d19a8;
            case 0x1D19ACu: goto label_1d19ac;
            case 0x1D19B0u: goto label_1d19b0;
            case 0x1D19B4u: goto label_1d19b4;
            case 0x1D19B8u: goto label_1d19b8;
            case 0x1D19BCu: goto label_1d19bc;
            case 0x1D19C0u: goto label_1d19c0;
            case 0x1D19C4u: goto label_1d19c4;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D19CCu: goto label_1d19cc;
            case 0x1D19D0u: goto label_1d19d0;
            case 0x1D19D4u: goto label_1d19d4;
            case 0x1D19D8u: goto label_1d19d8;
            case 0x1D19DCu: goto label_1d19dc;
            case 0x1D19E0u: goto label_1d19e0;
            case 0x1D19E4u: goto label_1d19e4;
            case 0x1D19E8u: goto label_1d19e8;
            case 0x1D19ECu: goto label_1d19ec;
            case 0x1D19F0u: goto label_1d19f0;
            case 0x1D19F4u: goto label_1d19f4;
            case 0x1D19F8u: goto label_1d19f8;
            case 0x1D19FCu: goto label_1d19fc;
            case 0x1D1A00u: goto label_1d1a00;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A08u: goto label_1d1a08;
            case 0x1D1A0Cu: goto label_1d1a0c;
            case 0x1D1A10u: goto label_1d1a10;
            case 0x1D1A14u: goto label_1d1a14;
            case 0x1D1A18u: goto label_1d1a18;
            case 0x1D1A1Cu: goto label_1d1a1c;
            case 0x1D1A20u: goto label_1d1a20;
            case 0x1D1A24u: goto label_1d1a24;
            case 0x1D1A28u: goto label_1d1a28;
            case 0x1D1A2Cu: goto label_1d1a2c;
            case 0x1D1A30u: goto label_1d1a30;
            case 0x1D1A34u: goto label_1d1a34;
            case 0x1D1A38u: goto label_1d1a38;
            case 0x1D1A3Cu: goto label_1d1a3c;
            case 0x1D1A40u: goto label_1d1a40;
            case 0x1D1A44u: goto label_1d1a44;
            case 0x1D1A48u: goto label_1d1a48;
            case 0x1D1A4Cu: goto label_1d1a4c;
            case 0x1D1A50u: goto label_1d1a50;
            case 0x1D1A54u: goto label_1d1a54;
            case 0x1D1A58u: goto label_1d1a58;
            case 0x1D1A5Cu: goto label_1d1a5c;
            case 0x1D1A60u: goto label_1d1a60;
            case 0x1D1A64u: goto label_1d1a64;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A6Cu: goto label_1d1a6c;
            case 0x1D1A70u: goto label_1d1a70;
            case 0x1D1A74u: goto label_1d1a74;
            case 0x1D1A78u: goto label_1d1a78;
            case 0x1D1A7Cu: goto label_1d1a7c;
            case 0x1D1A80u: goto label_1d1a80;
            case 0x1D1A84u: goto label_1d1a84;
            case 0x1D1A88u: goto label_1d1a88;
            case 0x1D1A8Cu: goto label_1d1a8c;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1A94u: goto label_1d1a94;
            case 0x1D1A98u: goto label_1d1a98;
            case 0x1D1A9Cu: goto label_1d1a9c;
            case 0x1D1AA0u: goto label_1d1aa0;
            case 0x1D1AA4u: goto label_1d1aa4;
            case 0x1D1AA8u: goto label_1d1aa8;
            case 0x1D1AACu: goto label_1d1aac;
            case 0x1D1AB0u: goto label_1d1ab0;
            case 0x1D1AB4u: goto label_1d1ab4;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1ABCu: goto label_1d1abc;
            case 0x1D1AC0u: goto label_1d1ac0;
            case 0x1D1AC4u: goto label_1d1ac4;
            case 0x1D1AC8u: goto label_1d1ac8;
            case 0x1D1ACCu: goto label_1d1acc;
            case 0x1D1AD0u: goto label_1d1ad0;
            case 0x1D1AD4u: goto label_1d1ad4;
            case 0x1D1AD8u: goto label_1d1ad8;
            case 0x1D1ADCu: goto label_1d1adc;
            case 0x1D1AE0u: goto label_1d1ae0;
            case 0x1D1AE4u: goto label_1d1ae4;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1AECu: goto label_1d1aec;
            case 0x1D1AF0u: goto label_1d1af0;
            case 0x1D1AF4u: goto label_1d1af4;
            case 0x1D1AF8u: goto label_1d1af8;
            case 0x1D1AFCu: goto label_1d1afc;
            case 0x1D1B00u: goto label_1d1b00;
            case 0x1D1B04u: goto label_1d1b04;
            case 0x1D1B08u: goto label_1d1b08;
            case 0x1D1B0Cu: goto label_1d1b0c;
            case 0x1D1B10u: goto label_1d1b10;
            case 0x1D1B14u: goto label_1d1b14;
            case 0x1D1B18u: goto label_1d1b18;
            case 0x1D1B1Cu: goto label_1d1b1c;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B24u: goto label_1d1b24;
            case 0x1D1B28u: goto label_1d1b28;
            case 0x1D1B2Cu: goto label_1d1b2c;
            case 0x1D1B30u: goto label_1d1b30;
            case 0x1D1B34u: goto label_1d1b34;
            case 0x1D1B38u: goto label_1d1b38;
            case 0x1D1B3Cu: goto label_1d1b3c;
            case 0x1D1B40u: goto label_1d1b40;
            case 0x1D1B44u: goto label_1d1b44;
            case 0x1D1B48u: goto label_1d1b48;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B50u: goto label_1d1b50;
            case 0x1D1B54u: goto label_1d1b54;
            case 0x1D1B58u: goto label_1d1b58;
            case 0x1D1B5Cu: goto label_1d1b5c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B64u: goto label_1d1b64;
            case 0x1D1B68u: goto label_1d1b68;
            case 0x1D1B6Cu: goto label_1d1b6c;
            case 0x1D1B70u: goto label_1d1b70;
            case 0x1D1B74u: goto label_1d1b74;
            case 0x1D1B78u: goto label_1d1b78;
            case 0x1D1B7Cu: goto label_1d1b7c;
            case 0x1D1B80u: goto label_1d1b80;
            case 0x1D1B84u: goto label_1d1b84;
            case 0x1D1B88u: goto label_1d1b88;
            case 0x1D1B8Cu: goto label_1d1b8c;
            case 0x1D1B90u: goto label_1d1b90;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1B98u: goto label_1d1b98;
            case 0x1D1B9Cu: goto label_1d1b9c;
            case 0x1D1BA0u: goto label_1d1ba0;
            case 0x1D1BA4u: goto label_1d1ba4;
            case 0x1D1BA8u: goto label_1d1ba8;
            case 0x1D1BACu: goto label_1d1bac;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BB4u: goto label_1d1bb4;
            case 0x1D1BB8u: goto label_1d1bb8;
            case 0x1D1BBCu: goto label_1d1bbc;
            case 0x1D1BC0u: goto label_1d1bc0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1BC8u: goto label_1d1bc8;
            case 0x1D1BCCu: goto label_1d1bcc;
            case 0x1D1BD0u: goto label_1d1bd0;
            case 0x1D1BD4u: goto label_1d1bd4;
            case 0x1D1BD8u: goto label_1d1bd8;
            case 0x1D1BDCu: goto label_1d1bdc;
            case 0x1D1BE0u: goto label_1d1be0;
            case 0x1D1BE4u: goto label_1d1be4;
            case 0x1D1BE8u: goto label_1d1be8;
            case 0x1D1BECu: goto label_1d1bec;
            case 0x1D1BF0u: goto label_1d1bf0;
            case 0x1D1BF4u: goto label_1d1bf4;
            case 0x1D1BF8u: goto label_1d1bf8;
            case 0x1D1BFCu: goto label_1d1bfc;
            case 0x1D1C00u: goto label_1d1c00;
            case 0x1D1C04u: goto label_1d1c04;
            case 0x1D1C08u: goto label_1d1c08;
            case 0x1D1C0Cu: goto label_1d1c0c;
            case 0x1D1C10u: goto label_1d1c10;
            case 0x1D1C14u: goto label_1d1c14;
            case 0x1D1C18u: goto label_1d1c18;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C20u: goto label_1d1c20;
            case 0x1D1C24u: goto label_1d1c24;
            case 0x1D1C28u: goto label_1d1c28;
            case 0x1D1C2Cu: goto label_1d1c2c;
            case 0x1D1C30u: goto label_1d1c30;
            case 0x1D1C34u: goto label_1d1c34;
            case 0x1D1C38u: goto label_1d1c38;
            case 0x1D1C3Cu: goto label_1d1c3c;
            case 0x1D1C40u: goto label_1d1c40;
            case 0x1D1C44u: goto label_1d1c44;
            case 0x1D1C48u: goto label_1d1c48;
            case 0x1D1C4Cu: goto label_1d1c4c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C54u: goto label_1d1c54;
            case 0x1D1C58u: goto label_1d1c58;
            case 0x1D1C5Cu: goto label_1d1c5c;
            case 0x1D1C60u: goto label_1d1c60;
            case 0x1D1C64u: goto label_1d1c64;
            case 0x1D1C68u: goto label_1d1c68;
            case 0x1D1C6Cu: goto label_1d1c6c;
            case 0x1D1C70u: goto label_1d1c70;
            case 0x1D1C74u: goto label_1d1c74;
            case 0x1D1C78u: goto label_1d1c78;
            case 0x1D1C7Cu: goto label_1d1c7c;
            case 0x1D1C80u: goto label_1d1c80;
            case 0x1D1C84u: goto label_1d1c84;
            case 0x1D1C88u: goto label_1d1c88;
            case 0x1D1C8Cu: goto label_1d1c8c;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1C94u: goto label_1d1c94;
            case 0x1D1C98u: goto label_1d1c98;
            case 0x1D1C9Cu: goto label_1d1c9c;
            case 0x1D1CA0u: goto label_1d1ca0;
            case 0x1D1CA4u: goto label_1d1ca4;
            case 0x1D1CA8u: goto label_1d1ca8;
            case 0x1D1CACu: goto label_1d1cac;
            case 0x1D1CB0u: goto label_1d1cb0;
            case 0x1D1CB4u: goto label_1d1cb4;
            case 0x1D1CB8u: goto label_1d1cb8;
            case 0x1D1CBCu: goto label_1d1cbc;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CC4u: goto label_1d1cc4;
            case 0x1D1CC8u: goto label_1d1cc8;
            case 0x1D1CCCu: goto label_1d1ccc;
            case 0x1D1CD0u: goto label_1d1cd0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CDCu: goto label_1d1cdc;
            case 0x1D1CE0u: goto label_1d1ce0;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            case 0x1D1CECu: goto label_1d1cec;
            case 0x1D1CF0u: goto label_1d1cf0;
            case 0x1D1CF4u: goto label_1d1cf4;
            case 0x1D1CF8u: goto label_1d1cf8;
            case 0x1D1CFCu: goto label_1d1cfc;
            case 0x1D1D00u: goto label_1d1d00;
            case 0x1D1D04u: goto label_1d1d04;
            case 0x1D1D08u: goto label_1d1d08;
            case 0x1D1D0Cu: goto label_1d1d0c;
            case 0x1D1D10u: goto label_1d1d10;
            case 0x1D1D14u: goto label_1d1d14;
            case 0x1D1D18u: goto label_1d1d18;
            case 0x1D1D1Cu: goto label_1d1d1c;
            case 0x1D1D20u: goto label_1d1d20;
            case 0x1D1D24u: goto label_1d1d24;
            case 0x1D1D28u: goto label_1d1d28;
            case 0x1D1D2Cu: goto label_1d1d2c;
            case 0x1D1D30u: goto label_1d1d30;
            case 0x1D1D34u: goto label_1d1d34;
            case 0x1D1D38u: goto label_1d1d38;
            case 0x1D1D3Cu: goto label_1d1d3c;
            case 0x1D1D40u: goto label_1d1d40;
            case 0x1D1D44u: goto label_1d1d44;
            case 0x1D1D48u: goto label_1d1d48;
            case 0x1D1D4Cu: goto label_1d1d4c;
            case 0x1D1D50u: goto label_1d1d50;
            case 0x1D1D54u: goto label_1d1d54;
            case 0x1D1D58u: goto label_1d1d58;
            case 0x1D1D5Cu: goto label_1d1d5c;
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D64u: goto label_1d1d64;
            case 0x1D1D68u: goto label_1d1d68;
            case 0x1D1D6Cu: goto label_1d1d6c;
            case 0x1D1D70u: goto label_1d1d70;
            case 0x1D1D74u: goto label_1d1d74;
            case 0x1D1D78u: goto label_1d1d78;
            case 0x1D1D7Cu: goto label_1d1d7c;
            case 0x1D1D80u: goto label_1d1d80;
            case 0x1D1D84u: goto label_1d1d84;
            case 0x1D1D88u: goto label_1d1d88;
            case 0x1D1D8Cu: goto label_1d1d8c;
            case 0x1D1D90u: goto label_1d1d90;
            case 0x1D1D94u: goto label_1d1d94;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1D9Cu: goto label_1d1d9c;
            case 0x1D1DA0u: goto label_1d1da0;
            case 0x1D1DA4u: goto label_1d1da4;
            case 0x1D1DA8u: goto label_1d1da8;
            case 0x1D1DACu: goto label_1d1dac;
            case 0x1D1DB0u: goto label_1d1db0;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1DB8u: goto label_1d1db8;
            case 0x1D1DBCu: goto label_1d1dbc;
            case 0x1D1DC0u: goto label_1d1dc0;
            case 0x1D1DC4u: goto label_1d1dc4;
            case 0x1D1DC8u: goto label_1d1dc8;
            case 0x1D1DCCu: goto label_1d1dcc;
            case 0x1D1DD0u: goto label_1d1dd0;
            case 0x1D1DD4u: goto label_1d1dd4;
            case 0x1D1DD8u: goto label_1d1dd8;
            case 0x1D1DDCu: goto label_1d1ddc;
            case 0x1D1DE0u: goto label_1d1de0;
            case 0x1D1DE4u: goto label_1d1de4;
            case 0x1D1DE8u: goto label_1d1de8;
            case 0x1D1DECu: goto label_1d1dec;
            case 0x1D1DF0u: goto label_1d1df0;
            case 0x1D1DF4u: goto label_1d1df4;
            case 0x1D1DF8u: goto label_1d1df8;
            case 0x1D1DFCu: goto label_1d1dfc;
            case 0x1D1E00u: goto label_1d1e00;
            case 0x1D1E04u: goto label_1d1e04;
            case 0x1D1E08u: goto label_1d1e08;
            case 0x1D1E0Cu: goto label_1d1e0c;
            case 0x1D1E10u: goto label_1d1e10;
            case 0x1D1E14u: goto label_1d1e14;
            case 0x1D1E18u: goto label_1d1e18;
            case 0x1D1E1Cu: goto label_1d1e1c;
            case 0x1D1E20u: goto label_1d1e20;
            case 0x1D1E24u: goto label_1d1e24;
            case 0x1D1E28u: goto label_1d1e28;
            case 0x1D1E2Cu: goto label_1d1e2c;
            case 0x1D1E30u: goto label_1d1e30;
            case 0x1D1E34u: goto label_1d1e34;
            case 0x1D1E38u: goto label_1d1e38;
            case 0x1D1E3Cu: goto label_1d1e3c;
            case 0x1D1E40u: goto label_1d1e40;
            case 0x1D1E44u: goto label_1d1e44;
            case 0x1D1E48u: goto label_1d1e48;
            case 0x1D1E4Cu: goto label_1d1e4c;
            case 0x1D1E50u: goto label_1d1e50;
            case 0x1D1E54u: goto label_1d1e54;
            case 0x1D1E58u: goto label_1d1e58;
            case 0x1D1E5Cu: goto label_1d1e5c;
            case 0x1D1E60u: goto label_1d1e60;
            case 0x1D1E64u: goto label_1d1e64;
            case 0x1D1E68u: goto label_1d1e68;
            case 0x1D1E6Cu: goto label_1d1e6c;
            case 0x1D1E70u: goto label_1d1e70;
            case 0x1D1E74u: goto label_1d1e74;
            case 0x1D1E78u: goto label_1d1e78;
            case 0x1D1E7Cu: goto label_1d1e7c;
            case 0x1D1E80u: goto label_1d1e80;
            case 0x1D1E84u: goto label_1d1e84;
            case 0x1D1E88u: goto label_1d1e88;
            case 0x1D1E8Cu: goto label_1d1e8c;
            case 0x1D1E90u: goto label_1d1e90;
            case 0x1D1E94u: goto label_1d1e94;
            case 0x1D1E98u: goto label_1d1e98;
            case 0x1D1E9Cu: goto label_1d1e9c;
            case 0x1D1EA0u: goto label_1d1ea0;
            case 0x1D1EA4u: goto label_1d1ea4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EACu: goto label_1d1eac;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1EB4u: goto label_1d1eb4;
            case 0x1D1EB8u: goto label_1d1eb8;
            case 0x1D1EBCu: goto label_1d1ebc;
            case 0x1D1EC0u: goto label_1d1ec0;
            case 0x1D1EC4u: goto label_1d1ec4;
            case 0x1D1EC8u: goto label_1d1ec8;
            case 0x1D1ECCu: goto label_1d1ecc;
            case 0x1D1ED0u: goto label_1d1ed0;
            case 0x1D1ED4u: goto label_1d1ed4;
            case 0x1D1ED8u: goto label_1d1ed8;
            case 0x1D1EDCu: goto label_1d1edc;
            case 0x1D1EE0u: goto label_1d1ee0;
            case 0x1D1EE4u: goto label_1d1ee4;
            case 0x1D1EE8u: goto label_1d1ee8;
            case 0x1D1EECu: goto label_1d1eec;
            case 0x1D1EF0u: goto label_1d1ef0;
            case 0x1D1EF4u: goto label_1d1ef4;
            case 0x1D1EF8u: goto label_1d1ef8;
            case 0x1D1EFCu: goto label_1d1efc;
            case 0x1D1F00u: goto label_1d1f00;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F0Cu: goto label_1d1f0c;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F14u: goto label_1d1f14;
            case 0x1D1F18u: goto label_1d1f18;
            case 0x1D1F1Cu: goto label_1d1f1c;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D1F24u: goto label_1d1f24;
            case 0x1D1F28u: goto label_1d1f28;
            case 0x1D1F2Cu: goto label_1d1f2c;
            case 0x1D1F30u: goto label_1d1f30;
            case 0x1D1F34u: goto label_1d1f34;
            case 0x1D1F38u: goto label_1d1f38;
            case 0x1D1F3Cu: goto label_1d1f3c;
            case 0x1D1F40u: goto label_1d1f40;
            case 0x1D1F44u: goto label_1d1f44;
            case 0x1D1F48u: goto label_1d1f48;
            case 0x1D1F4Cu: goto label_1d1f4c;
            case 0x1D1F50u: goto label_1d1f50;
            case 0x1D1F54u: goto label_1d1f54;
            case 0x1D1F58u: goto label_1d1f58;
            case 0x1D1F5Cu: goto label_1d1f5c;
            case 0x1D1F60u: goto label_1d1f60;
            case 0x1D1F64u: goto label_1d1f64;
            case 0x1D1F68u: goto label_1d1f68;
            case 0x1D1F6Cu: goto label_1d1f6c;
            case 0x1D1F70u: goto label_1d1f70;
            case 0x1D1F74u: goto label_1d1f74;
            case 0x1D1F78u: goto label_1d1f78;
            case 0x1D1F7Cu: goto label_1d1f7c;
            case 0x1D1F80u: goto label_1d1f80;
            case 0x1D1F84u: goto label_1d1f84;
            case 0x1D1F88u: goto label_1d1f88;
            case 0x1D1F8Cu: goto label_1d1f8c;
            case 0x1D1F90u: goto label_1d1f90;
            case 0x1D1F94u: goto label_1d1f94;
            case 0x1D1F98u: goto label_1d1f98;
            case 0x1D1F9Cu: goto label_1d1f9c;
            case 0x1D1FA0u: goto label_1d1fa0;
            case 0x1D1FA4u: goto label_1d1fa4;
            case 0x1D1FA8u: goto label_1d1fa8;
            case 0x1D1FACu: goto label_1d1fac;
            case 0x1D1FB0u: goto label_1d1fb0;
            case 0x1D1FB4u: goto label_1d1fb4;
            case 0x1D1FB8u: goto label_1d1fb8;
            case 0x1D1FBCu: goto label_1d1fbc;
            case 0x1D1FC0u: goto label_1d1fc0;
            case 0x1D1FC4u: goto label_1d1fc4;
            case 0x1D1FC8u: goto label_1d1fc8;
            case 0x1D1FCCu: goto label_1d1fcc;
            case 0x1D1FD0u: goto label_1d1fd0;
            case 0x1D1FD4u: goto label_1d1fd4;
            case 0x1D1FD8u: goto label_1d1fd8;
            case 0x1D1FDCu: goto label_1d1fdc;
            case 0x1D1FE0u: goto label_1d1fe0;
            case 0x1D1FE4u: goto label_1d1fe4;
            case 0x1D1FE8u: goto label_1d1fe8;
            case 0x1D1FECu: goto label_1d1fec;
            case 0x1D1FF0u: goto label_1d1ff0;
            case 0x1D1FF4u: goto label_1d1ff4;
            case 0x1D1FF8u: goto label_1d1ff8;
            case 0x1D1FFCu: goto label_1d1ffc;
            case 0x1D2000u: goto label_1d2000;
            case 0x1D2004u: goto label_1d2004;
            case 0x1D2008u: goto label_1d2008;
            case 0x1D200Cu: goto label_1d200c;
            case 0x1D2010u: goto label_1d2010;
            case 0x1D2014u: goto label_1d2014;
            case 0x1D2018u: goto label_1d2018;
            case 0x1D201Cu: goto label_1d201c;
            case 0x1D2020u: goto label_1d2020;
            case 0x1D2024u: goto label_1d2024;
            case 0x1D2028u: goto label_1d2028;
            case 0x1D202Cu: goto label_1d202c;
            case 0x1D2030u: goto label_1d2030;
            case 0x1D2034u: goto label_1d2034;
            case 0x1D2038u: goto label_1d2038;
            case 0x1D203Cu: goto label_1d203c;
            case 0x1D2040u: goto label_1d2040;
            case 0x1D2044u: goto label_1d2044;
            case 0x1D2048u: goto label_1d2048;
            case 0x1D204Cu: goto label_1d204c;
            case 0x1D2050u: goto label_1d2050;
            case 0x1D2054u: goto label_1d2054;
            case 0x1D2058u: goto label_1d2058;
            case 0x1D205Cu: goto label_1d205c;
            case 0x1D2060u: goto label_1d2060;
            case 0x1D2064u: goto label_1d2064;
            case 0x1D2068u: goto label_1d2068;
            case 0x1D206Cu: goto label_1d206c;
            case 0x1D2070u: goto label_1d2070;
            case 0x1D2074u: goto label_1d2074;
            case 0x1D2078u: goto label_1d2078;
            case 0x1D207Cu: goto label_1d207c;
            case 0x1D2080u: goto label_1d2080;
            case 0x1D2084u: goto label_1d2084;
            case 0x1D2088u: goto label_1d2088;
            case 0x1D208Cu: goto label_1d208c;
            case 0x1D2090u: goto label_1d2090;
            case 0x1D2094u: goto label_1d2094;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D209Cu: goto label_1d209c;
            case 0x1D20A0u: goto label_1d20a0;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20ACu: goto label_1d20ac;
            case 0x1D20B0u: goto label_1d20b0;
            case 0x1D20B4u: goto label_1d20b4;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D20BCu: goto label_1d20bc;
            case 0x1D20C0u: goto label_1d20c0;
            case 0x1D20C4u: goto label_1d20c4;
            case 0x1D20C8u: goto label_1d20c8;
            case 0x1D20CCu: goto label_1d20cc;
            case 0x1D20D0u: goto label_1d20d0;
            case 0x1D20D4u: goto label_1d20d4;
            case 0x1D20D8u: goto label_1d20d8;
            case 0x1D20DCu: goto label_1d20dc;
            case 0x1D20E0u: goto label_1d20e0;
            case 0x1D20E4u: goto label_1d20e4;
            case 0x1D20E8u: goto label_1d20e8;
            case 0x1D20ECu: goto label_1d20ec;
            case 0x1D20F0u: goto label_1d20f0;
            case 0x1D20F4u: goto label_1d20f4;
            case 0x1D20F8u: goto label_1d20f8;
            case 0x1D20FCu: goto label_1d20fc;
            case 0x1D2100u: goto label_1d2100;
            case 0x1D2104u: goto label_1d2104;
            case 0x1D2108u: goto label_1d2108;
            case 0x1D210Cu: goto label_1d210c;
            case 0x1D2110u: goto label_1d2110;
            case 0x1D2114u: goto label_1d2114;
            case 0x1D2118u: goto label_1d2118;
            case 0x1D211Cu: goto label_1d211c;
            case 0x1D2120u: goto label_1d2120;
            case 0x1D2124u: goto label_1d2124;
            case 0x1D2128u: goto label_1d2128;
            case 0x1D212Cu: goto label_1d212c;
            case 0x1D2130u: goto label_1d2130;
            case 0x1D2134u: goto label_1d2134;
            case 0x1D2138u: goto label_1d2138;
            case 0x1D213Cu: goto label_1d213c;
            case 0x1D2140u: goto label_1d2140;
            case 0x1D2144u: goto label_1d2144;
            case 0x1D2148u: goto label_1d2148;
            case 0x1D214Cu: goto label_1d214c;
            case 0x1D2150u: goto label_1d2150;
            case 0x1D2154u: goto label_1d2154;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D215Cu: goto label_1d215c;
            case 0x1D2160u: goto label_1d2160;
            case 0x1D2164u: goto label_1d2164;
            case 0x1D2168u: goto label_1d2168;
            case 0x1D216Cu: goto label_1d216c;
            case 0x1D2170u: goto label_1d2170;
            case 0x1D2174u: goto label_1d2174;
            case 0x1D2178u: goto label_1d2178;
            case 0x1D217Cu: goto label_1d217c;
            case 0x1D2180u: goto label_1d2180;
            case 0x1D2184u: goto label_1d2184;
            case 0x1D2188u: goto label_1d2188;
            case 0x1D218Cu: goto label_1d218c;
            case 0x1D2190u: goto label_1d2190;
            case 0x1D2194u: goto label_1d2194;
            case 0x1D2198u: goto label_1d2198;
            case 0x1D219Cu: goto label_1d219c;
            case 0x1D21A0u: goto label_1d21a0;
            case 0x1D21A4u: goto label_1d21a4;
            case 0x1D21A8u: goto label_1d21a8;
            case 0x1D21ACu: goto label_1d21ac;
            case 0x1D21B0u: goto label_1d21b0;
            case 0x1D21B4u: goto label_1d21b4;
            case 0x1D21B8u: goto label_1d21b8;
            case 0x1D21BCu: goto label_1d21bc;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C4u: goto label_1d21c4;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21CCu: goto label_1d21cc;
            case 0x1D21D0u: goto label_1d21d0;
            case 0x1D21D4u: goto label_1d21d4;
            case 0x1D21D8u: goto label_1d21d8;
            case 0x1D21DCu: goto label_1d21dc;
            case 0x1D21E0u: goto label_1d21e0;
            case 0x1D21E4u: goto label_1d21e4;
            case 0x1D21E8u: goto label_1d21e8;
            case 0x1D21ECu: goto label_1d21ec;
            case 0x1D21F0u: goto label_1d21f0;
            case 0x1D21F4u: goto label_1d21f4;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D21FCu: goto label_1d21fc;
            case 0x1D2200u: goto label_1d2200;
            case 0x1D2204u: goto label_1d2204;
            case 0x1D2208u: goto label_1d2208;
            case 0x1D220Cu: goto label_1d220c;
            case 0x1D2210u: goto label_1d2210;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2218u: goto label_1d2218;
            case 0x1D221Cu: goto label_1d221c;
            case 0x1D2220u: goto label_1d2220;
            case 0x1D2224u: goto label_1d2224;
            case 0x1D2228u: goto label_1d2228;
            case 0x1D222Cu: goto label_1d222c;
            case 0x1D2230u: goto label_1d2230;
            case 0x1D2234u: goto label_1d2234;
            case 0x1D2238u: goto label_1d2238;
            case 0x1D223Cu: goto label_1d223c;
            case 0x1D2240u: goto label_1d2240;
            case 0x1D2244u: goto label_1d2244;
            case 0x1D2248u: goto label_1d2248;
            case 0x1D224Cu: goto label_1d224c;
            case 0x1D2250u: goto label_1d2250;
            case 0x1D2254u: goto label_1d2254;
            case 0x1D2258u: goto label_1d2258;
            case 0x1D225Cu: goto label_1d225c;
            case 0x1D2260u: goto label_1d2260;
            case 0x1D2264u: goto label_1d2264;
            case 0x1D2268u: goto label_1d2268;
            case 0x1D226Cu: goto label_1d226c;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D2274u: goto label_1d2274;
            case 0x1D2278u: goto label_1d2278;
            case 0x1D227Cu: goto label_1d227c;
            case 0x1D2280u: goto label_1d2280;
            case 0x1D2284u: goto label_1d2284;
            case 0x1D2288u: goto label_1d2288;
            case 0x1D228Cu: goto label_1d228c;
            case 0x1D2290u: goto label_1d2290;
            case 0x1D2294u: goto label_1d2294;
            case 0x1D2298u: goto label_1d2298;
            case 0x1D229Cu: goto label_1d229c;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22A4u: goto label_1d22a4;
            case 0x1D22A8u: goto label_1d22a8;
            case 0x1D22ACu: goto label_1d22ac;
            case 0x1D22B0u: goto label_1d22b0;
            case 0x1D22B4u: goto label_1d22b4;
            case 0x1D22B8u: goto label_1d22b8;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22C0u: goto label_1d22c0;
            case 0x1D22C4u: goto label_1d22c4;
            case 0x1D22C8u: goto label_1d22c8;
            case 0x1D22CCu: goto label_1d22cc;
            case 0x1D22D0u: goto label_1d22d0;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D22DCu: goto label_1d22dc;
            case 0x1D22E0u: goto label_1d22e0;
            case 0x1D22E4u: goto label_1d22e4;
            case 0x1D22E8u: goto label_1d22e8;
            case 0x1D22ECu: goto label_1d22ec;
            case 0x1D22F0u: goto label_1d22f0;
            case 0x1D22F4u: goto label_1d22f4;
            case 0x1D22F8u: goto label_1d22f8;
            case 0x1D22FCu: goto label_1d22fc;
            case 0x1D2300u: goto label_1d2300;
            case 0x1D2304u: goto label_1d2304;
            case 0x1D2308u: goto label_1d2308;
            case 0x1D230Cu: goto label_1d230c;
            case 0x1D2310u: goto label_1d2310;
            case 0x1D2314u: goto label_1d2314;
            case 0x1D2318u: goto label_1d2318;
            case 0x1D231Cu: goto label_1d231c;
            case 0x1D2320u: goto label_1d2320;
            case 0x1D2324u: goto label_1d2324;
            case 0x1D2328u: goto label_1d2328;
            case 0x1D232Cu: goto label_1d232c;
            case 0x1D2330u: goto label_1d2330;
            case 0x1D2334u: goto label_1d2334;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D233Cu: goto label_1d233c;
            case 0x1D2340u: goto label_1d2340;
            case 0x1D2344u: goto label_1d2344;
            case 0x1D2348u: goto label_1d2348;
            case 0x1D234Cu: goto label_1d234c;
            case 0x1D2350u: goto label_1d2350;
            case 0x1D2354u: goto label_1d2354;
            case 0x1D2358u: goto label_1d2358;
            case 0x1D235Cu: goto label_1d235c;
            case 0x1D2360u: goto label_1d2360;
            case 0x1D2364u: goto label_1d2364;
            case 0x1D2368u: goto label_1d2368;
            case 0x1D236Cu: goto label_1d236c;
            case 0x1D2370u: goto label_1d2370;
            case 0x1D2374u: goto label_1d2374;
            case 0x1D2378u: goto label_1d2378;
            case 0x1D237Cu: goto label_1d237c;
            case 0x1D2380u: goto label_1d2380;
            case 0x1D2384u: goto label_1d2384;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D238Cu: goto label_1d238c;
            case 0x1D2390u: goto label_1d2390;
            case 0x1D2394u: goto label_1d2394;
            case 0x1D2398u: goto label_1d2398;
            case 0x1D239Cu: goto label_1d239c;
            case 0x1D23A0u: goto label_1d23a0;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23A8u: goto label_1d23a8;
            case 0x1D23ACu: goto label_1d23ac;
            case 0x1D23B0u: goto label_1d23b0;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23B8u: goto label_1d23b8;
            case 0x1D23BCu: goto label_1d23bc;
            case 0x1D23C0u: goto label_1d23c0;
            case 0x1D23C4u: goto label_1d23c4;
            case 0x1D23C8u: goto label_1d23c8;
            case 0x1D23CCu: goto label_1d23cc;
            case 0x1D23D0u: goto label_1d23d0;
            case 0x1D23D4u: goto label_1d23d4;
            case 0x1D23D8u: goto label_1d23d8;
            case 0x1D23DCu: goto label_1d23dc;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            case 0x1D23E8u: goto label_1d23e8;
            case 0x1D23ECu: goto label_1d23ec;
            case 0x1D23F0u: goto label_1d23f0;
            case 0x1D23F4u: goto label_1d23f4;
            case 0x1D23F8u: goto label_1d23f8;
            case 0x1D23FCu: goto label_1d23fc;
            case 0x1D2400u: goto label_1d2400;
            case 0x1D2404u: goto label_1d2404;
            case 0x1D2408u: goto label_1d2408;
            case 0x1D240Cu: goto label_1d240c;
            case 0x1D2410u: goto label_1d2410;
            case 0x1D2414u: goto label_1d2414;
            case 0x1D2418u: goto label_1d2418;
            case 0x1D241Cu: goto label_1d241c;
            case 0x1D2420u: goto label_1d2420;
            case 0x1D2424u: goto label_1d2424;
            case 0x1D2428u: goto label_1d2428;
            case 0x1D242Cu: goto label_1d242c;
            case 0x1D2430u: goto label_1d2430;
            case 0x1D2434u: goto label_1d2434;
            case 0x1D2438u: goto label_1d2438;
            case 0x1D243Cu: goto label_1d243c;
            case 0x1D2440u: goto label_1d2440;
            case 0x1D2444u: goto label_1d2444;
            case 0x1D2448u: goto label_1d2448;
            case 0x1D244Cu: goto label_1d244c;
            case 0x1D2450u: goto label_1d2450;
            case 0x1D2454u: goto label_1d2454;
            case 0x1D2458u: goto label_1d2458;
            case 0x1D245Cu: goto label_1d245c;
            case 0x1D2460u: goto label_1d2460;
            case 0x1D2464u: goto label_1d2464;
            case 0x1D2468u: goto label_1d2468;
            case 0x1D246Cu: goto label_1d246c;
            case 0x1D2470u: goto label_1d2470;
            case 0x1D2474u: goto label_1d2474;
            case 0x1D2478u: goto label_1d2478;
            case 0x1D247Cu: goto label_1d247c;
            case 0x1D2480u: goto label_1d2480;
            case 0x1D2484u: goto label_1d2484;
            case 0x1D2488u: goto label_1d2488;
            case 0x1D248Cu: goto label_1d248c;
            case 0x1D2490u: goto label_1d2490;
            case 0x1D2494u: goto label_1d2494;
            case 0x1D2498u: goto label_1d2498;
            case 0x1D249Cu: goto label_1d249c;
            case 0x1D24A0u: goto label_1d24a0;
            case 0x1D24A4u: goto label_1d24a4;
            case 0x1D24A8u: goto label_1d24a8;
            case 0x1D24ACu: goto label_1d24ac;
            case 0x1D24B0u: goto label_1d24b0;
            case 0x1D24B4u: goto label_1d24b4;
            case 0x1D24B8u: goto label_1d24b8;
            case 0x1D24BCu: goto label_1d24bc;
            case 0x1D24C0u: goto label_1d24c0;
            case 0x1D24C4u: goto label_1d24c4;
            case 0x1D24C8u: goto label_1d24c8;
            case 0x1D24CCu: goto label_1d24cc;
            case 0x1D24D0u: goto label_1d24d0;
            case 0x1D24D4u: goto label_1d24d4;
            case 0x1D24D8u: goto label_1d24d8;
            case 0x1D24DCu: goto label_1d24dc;
            case 0x1D24E0u: goto label_1d24e0;
            case 0x1D24E4u: goto label_1d24e4;
            case 0x1D24E8u: goto label_1d24e8;
            case 0x1D24ECu: goto label_1d24ec;
            case 0x1D24F0u: goto label_1d24f0;
            case 0x1D24F4u: goto label_1d24f4;
            case 0x1D24F8u: goto label_1d24f8;
            case 0x1D24FCu: goto label_1d24fc;
            case 0x1D2500u: goto label_1d2500;
            case 0x1D2504u: goto label_1d2504;
            case 0x1D2508u: goto label_1d2508;
            case 0x1D250Cu: goto label_1d250c;
            case 0x1D2510u: goto label_1d2510;
            case 0x1D2514u: goto label_1d2514;
            case 0x1D2518u: goto label_1d2518;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D247Cu; }
            if (ctx->pc != 0x1D247Cu) { return; }
        }
    }
    ctx->pc = 0x1D247Cu;
label_1d247c:
    // 0x1d247c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1d2480:
    if (ctx->pc == 0x1D2480u) {
        ctx->pc = 0x1D2484u;
        goto label_1d2484;
    }
    ctx->pc = 0x1D247Cu;
    {
        const bool branch_taken_0x1d247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d247c) {
            ctx->pc = 0x1D2508u;
            goto label_1d2508;
        }
    }
    ctx->pc = 0x1D2484u;
label_1d2484:
    // 0x1d2484: 0x0  nop
    ctx->pc = 0x1d2484u;
    // NOP
label_1d2488:
    // 0x1d2488: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d248c:
    // 0x1d248c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d248cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1d2490:
    // 0x1d2490: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d2490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d2494:
    // 0x1d2494: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1d2494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1d2498:
    // 0x1d2498: 0x24c60f20  addiu       $a2, $a2, 0xF20
    ctx->pc = 0x1d2498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3872));
label_1d249c:
    // 0x1d249c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d249cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d24a0:
    // 0x1d24a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d24a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d24a4:
    // 0x1d24a4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1d24a8:
    // 0x1d24a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d24a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24ac:
    // 0x1d24ac: 0x0  nop
    ctx->pc = 0x1d24acu;
    // NOP
label_1d24b0:
    // 0x1d24b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d24b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d24b4:
    // 0x1d24b4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1d24b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1d24b8:
    // 0x1d24b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d24bc:
    // 0x1d24bc: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1d24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1d24c0:
    // 0x1d24c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d24c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24c4:
    // 0x1d24c4: 0x0  nop
    ctx->pc = 0x1d24c4u;
    // NOP
label_1d24c8:
    // 0x1d24c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d24c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d24cc:
    // 0x1d24cc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d24ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1d24d0:
    // 0x1d24d0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d24d4:
    // 0x1d24d4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d24d8:
    // 0x1d24d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d24d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24dc:
    // 0x1d24dc: 0x0  nop
    ctx->pc = 0x1d24dcu;
    // NOP
label_1d24e0:
    // 0x1d24e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d24e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d24e4:
    // 0x1d24e4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d24e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1d24e8:
    // 0x1d24e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d24ec:
    // 0x1d24ec: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d24f0:
    // 0x1d24f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d24f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d24f4:
    // 0x1d24f4: 0x0  nop
    ctx->pc = 0x1d24f4u;
    // NOP
label_1d24f8:
    // 0x1d24f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d24f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d24fc:
    // 0x1d24fc: 0xc053ca4  jal         func_14F290
label_1d2500:
    if (ctx->pc == 0x1D2500u) {
        ctx->pc = 0x1D2500u;
            // 0x1d2500: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->pc = 0x1D2504u;
        goto label_1d2504;
    }
    ctx->pc = 0x1D24FCu;
    SET_GPR_U32(ctx, 31, 0x1D2504u);
    ctx->pc = 0x1D2500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24FCu;
            // 0x1d2500: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2504u; }
        if (ctx->pc != 0x1D2504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2504u; }
        if (ctx->pc != 0x1D2504u) { return; }
    }
    ctx->pc = 0x1D2504u;
label_1d2504:
    // 0x1d2504: 0x0  nop
    ctx->pc = 0x1d2504u;
    // NOP
label_1d2508:
    // 0x1d2508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d2508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d250c:
    // 0x1d250c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d250cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2510:
    // 0x1d2510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2514:
    // 0x1d2514: 0x3e00008  jr          $ra
label_1d2518:
    if (ctx->pc == 0x1D2518u) {
        ctx->pc = 0x1D2518u;
            // 0x1d2518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D251Cu;
        goto label_fallthrough_0x1d2514;
    }
    ctx->pc = 0x1D2514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2514u;
            // 0x1d2518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1230u: goto label_1d1230;
            case 0x1D1234u: goto label_1d1234;
            case 0x1D1238u: goto label_1d1238;
            case 0x1D123Cu: goto label_1d123c;
            case 0x1D1240u: goto label_1d1240;
            case 0x1D1244u: goto label_1d1244;
            case 0x1D1248u: goto label_1d1248;
            case 0x1D124Cu: goto label_1d124c;
            case 0x1D1250u: goto label_1d1250;
            case 0x1D1254u: goto label_1d1254;
            case 0x1D1258u: goto label_1d1258;
            case 0x1D125Cu: goto label_1d125c;
            case 0x1D1260u: goto label_1d1260;
            case 0x1D1264u: goto label_1d1264;
            case 0x1D1268u: goto label_1d1268;
            case 0x1D126Cu: goto label_1d126c;
            case 0x1D1270u: goto label_1d1270;
            case 0x1D1274u: goto label_1d1274;
            case 0x1D1278u: goto label_1d1278;
            case 0x1D127Cu: goto label_1d127c;
            case 0x1D1280u: goto label_1d1280;
            case 0x1D1284u: goto label_1d1284;
            case 0x1D1288u: goto label_1d1288;
            case 0x1D128Cu: goto label_1d128c;
            case 0x1D1290u: goto label_1d1290;
            case 0x1D1294u: goto label_1d1294;
            case 0x1D1298u: goto label_1d1298;
            case 0x1D129Cu: goto label_1d129c;
            case 0x1D12A0u: goto label_1d12a0;
            case 0x1D12A4u: goto label_1d12a4;
            case 0x1D12A8u: goto label_1d12a8;
            case 0x1D12ACu: goto label_1d12ac;
            case 0x1D12B0u: goto label_1d12b0;
            case 0x1D12B4u: goto label_1d12b4;
            case 0x1D12B8u: goto label_1d12b8;
            case 0x1D12BCu: goto label_1d12bc;
            case 0x1D12C0u: goto label_1d12c0;
            case 0x1D12C4u: goto label_1d12c4;
            case 0x1D12C8u: goto label_1d12c8;
            case 0x1D12CCu: goto label_1d12cc;
            case 0x1D12D0u: goto label_1d12d0;
            case 0x1D12D4u: goto label_1d12d4;
            case 0x1D12D8u: goto label_1d12d8;
            case 0x1D12DCu: goto label_1d12dc;
            case 0x1D12E0u: goto label_1d12e0;
            case 0x1D12E4u: goto label_1d12e4;
            case 0x1D12E8u: goto label_1d12e8;
            case 0x1D12ECu: goto label_1d12ec;
            case 0x1D12F0u: goto label_1d12f0;
            case 0x1D12F4u: goto label_1d12f4;
            case 0x1D12F8u: goto label_1d12f8;
            case 0x1D12FCu: goto label_1d12fc;
            case 0x1D1300u: goto label_1d1300;
            case 0x1D1304u: goto label_1d1304;
            case 0x1D1308u: goto label_1d1308;
            case 0x1D130Cu: goto label_1d130c;
            case 0x1D1310u: goto label_1d1310;
            case 0x1D1314u: goto label_1d1314;
            case 0x1D1318u: goto label_1d1318;
            case 0x1D131Cu: goto label_1d131c;
            case 0x1D1320u: goto label_1d1320;
            case 0x1D1324u: goto label_1d1324;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D132Cu: goto label_1d132c;
            case 0x1D1330u: goto label_1d1330;
            case 0x1D1334u: goto label_1d1334;
            case 0x1D1338u: goto label_1d1338;
            case 0x1D133Cu: goto label_1d133c;
            case 0x1D1340u: goto label_1d1340;
            case 0x1D1344u: goto label_1d1344;
            case 0x1D1348u: goto label_1d1348;
            case 0x1D134Cu: goto label_1d134c;
            case 0x1D1350u: goto label_1d1350;
            case 0x1D1354u: goto label_1d1354;
            case 0x1D1358u: goto label_1d1358;
            case 0x1D135Cu: goto label_1d135c;
            case 0x1D1360u: goto label_1d1360;
            case 0x1D1364u: goto label_1d1364;
            case 0x1D1368u: goto label_1d1368;
            case 0x1D136Cu: goto label_1d136c;
            case 0x1D1370u: goto label_1d1370;
            case 0x1D1374u: goto label_1d1374;
            case 0x1D1378u: goto label_1d1378;
            case 0x1D137Cu: goto label_1d137c;
            case 0x1D1380u: goto label_1d1380;
            case 0x1D1384u: goto label_1d1384;
            case 0x1D1388u: goto label_1d1388;
            case 0x1D138Cu: goto label_1d138c;
            case 0x1D1390u: goto label_1d1390;
            case 0x1D1394u: goto label_1d1394;
            case 0x1D1398u: goto label_1d1398;
            case 0x1D139Cu: goto label_1d139c;
            case 0x1D13A0u: goto label_1d13a0;
            case 0x1D13A4u: goto label_1d13a4;
            case 0x1D13A8u: goto label_1d13a8;
            case 0x1D13ACu: goto label_1d13ac;
            case 0x1D13B0u: goto label_1d13b0;
            case 0x1D13B4u: goto label_1d13b4;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D13BCu: goto label_1d13bc;
            case 0x1D13C0u: goto label_1d13c0;
            case 0x1D13C4u: goto label_1d13c4;
            case 0x1D13C8u: goto label_1d13c8;
            case 0x1D13CCu: goto label_1d13cc;
            case 0x1D13D0u: goto label_1d13d0;
            case 0x1D13D4u: goto label_1d13d4;
            case 0x1D13D8u: goto label_1d13d8;
            case 0x1D13DCu: goto label_1d13dc;
            case 0x1D13E0u: goto label_1d13e0;
            case 0x1D13E4u: goto label_1d13e4;
            case 0x1D13E8u: goto label_1d13e8;
            case 0x1D13ECu: goto label_1d13ec;
            case 0x1D13F0u: goto label_1d13f0;
            case 0x1D13F4u: goto label_1d13f4;
            case 0x1D13F8u: goto label_1d13f8;
            case 0x1D13FCu: goto label_1d13fc;
            case 0x1D1400u: goto label_1d1400;
            case 0x1D1404u: goto label_1d1404;
            case 0x1D1408u: goto label_1d1408;
            case 0x1D140Cu: goto label_1d140c;
            case 0x1D1410u: goto label_1d1410;
            case 0x1D1414u: goto label_1d1414;
            case 0x1D1418u: goto label_1d1418;
            case 0x1D141Cu: goto label_1d141c;
            case 0x1D1420u: goto label_1d1420;
            case 0x1D1424u: goto label_1d1424;
            case 0x1D1428u: goto label_1d1428;
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D1430u: goto label_1d1430;
            case 0x1D1434u: goto label_1d1434;
            case 0x1D1438u: goto label_1d1438;
            case 0x1D143Cu: goto label_1d143c;
            case 0x1D1440u: goto label_1d1440;
            case 0x1D1444u: goto label_1d1444;
            case 0x1D1448u: goto label_1d1448;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1450u: goto label_1d1450;
            case 0x1D1454u: goto label_1d1454;
            case 0x1D1458u: goto label_1d1458;
            case 0x1D145Cu: goto label_1d145c;
            case 0x1D1460u: goto label_1d1460;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1468u: goto label_1d1468;
            case 0x1D146Cu: goto label_1d146c;
            case 0x1D1470u: goto label_1d1470;
            case 0x1D1474u: goto label_1d1474;
            case 0x1D1478u: goto label_1d1478;
            case 0x1D147Cu: goto label_1d147c;
            case 0x1D1480u: goto label_1d1480;
            case 0x1D1484u: goto label_1d1484;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D148Cu: goto label_1d148c;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D1494u: goto label_1d1494;
            case 0x1D1498u: goto label_1d1498;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A0u: goto label_1d14a0;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14A8u: goto label_1d14a8;
            case 0x1D14ACu: goto label_1d14ac;
            case 0x1D14B0u: goto label_1d14b0;
            case 0x1D14B4u: goto label_1d14b4;
            case 0x1D14B8u: goto label_1d14b8;
            case 0x1D14BCu: goto label_1d14bc;
            case 0x1D14C0u: goto label_1d14c0;
            case 0x1D14C4u: goto label_1d14c4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14CCu: goto label_1d14cc;
            case 0x1D14D0u: goto label_1d14d0;
            case 0x1D14D4u: goto label_1d14d4;
            case 0x1D14D8u: goto label_1d14d8;
            case 0x1D14DCu: goto label_1d14dc;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14E4u: goto label_1d14e4;
            case 0x1D14E8u: goto label_1d14e8;
            case 0x1D14ECu: goto label_1d14ec;
            case 0x1D14F0u: goto label_1d14f0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            case 0x1D14FCu: goto label_1d14fc;
            case 0x1D1500u: goto label_1d1500;
            case 0x1D1504u: goto label_1d1504;
            case 0x1D1508u: goto label_1d1508;
            case 0x1D150Cu: goto label_1d150c;
            case 0x1D1510u: goto label_1d1510;
            case 0x1D1514u: goto label_1d1514;
            case 0x1D1518u: goto label_1d1518;
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D1520u: goto label_1d1520;
            case 0x1D1524u: goto label_1d1524;
            case 0x1D1528u: goto label_1d1528;
            case 0x1D152Cu: goto label_1d152c;
            case 0x1D1530u: goto label_1d1530;
            case 0x1D1534u: goto label_1d1534;
            case 0x1D1538u: goto label_1d1538;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1540u: goto label_1d1540;
            case 0x1D1544u: goto label_1d1544;
            case 0x1D1548u: goto label_1d1548;
            case 0x1D154Cu: goto label_1d154c;
            case 0x1D1550u: goto label_1d1550;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1558u: goto label_1d1558;
            case 0x1D155Cu: goto label_1d155c;
            case 0x1D1560u: goto label_1d1560;
            case 0x1D1564u: goto label_1d1564;
            case 0x1D1568u: goto label_1d1568;
            case 0x1D156Cu: goto label_1d156c;
            case 0x1D1570u: goto label_1d1570;
            case 0x1D1574u: goto label_1d1574;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D157Cu: goto label_1d157c;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1584u: goto label_1d1584;
            case 0x1D1588u: goto label_1d1588;
            case 0x1D158Cu: goto label_1d158c;
            case 0x1D1590u: goto label_1d1590;
            case 0x1D1594u: goto label_1d1594;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D159Cu: goto label_1d159c;
            case 0x1D15A0u: goto label_1d15a0;
            case 0x1D15A4u: goto label_1d15a4;
            case 0x1D15A8u: goto label_1d15a8;
            case 0x1D15ACu: goto label_1d15ac;
            case 0x1D15B0u: goto label_1d15b0;
            case 0x1D15B4u: goto label_1d15b4;
            case 0x1D15B8u: goto label_1d15b8;
            case 0x1D15BCu: goto label_1d15bc;
            case 0x1D15C0u: goto label_1d15c0;
            case 0x1D15C4u: goto label_1d15c4;
            case 0x1D15C8u: goto label_1d15c8;
            case 0x1D15CCu: goto label_1d15cc;
            case 0x1D15D0u: goto label_1d15d0;
            case 0x1D15D4u: goto label_1d15d4;
            case 0x1D15D8u: goto label_1d15d8;
            case 0x1D15DCu: goto label_1d15dc;
            case 0x1D15E0u: goto label_1d15e0;
            case 0x1D15E4u: goto label_1d15e4;
            case 0x1D15E8u: goto label_1d15e8;
            case 0x1D15ECu: goto label_1d15ec;
            case 0x1D15F0u: goto label_1d15f0;
            case 0x1D15F4u: goto label_1d15f4;
            case 0x1D15F8u: goto label_1d15f8;
            case 0x1D15FCu: goto label_1d15fc;
            case 0x1D1600u: goto label_1d1600;
            case 0x1D1604u: goto label_1d1604;
            case 0x1D1608u: goto label_1d1608;
            case 0x1D160Cu: goto label_1d160c;
            case 0x1D1610u: goto label_1d1610;
            case 0x1D1614u: goto label_1d1614;
            case 0x1D1618u: goto label_1d1618;
            case 0x1D161Cu: goto label_1d161c;
            case 0x1D1620u: goto label_1d1620;
            case 0x1D1624u: goto label_1d1624;
            case 0x1D1628u: goto label_1d1628;
            case 0x1D162Cu: goto label_1d162c;
            case 0x1D1630u: goto label_1d1630;
            case 0x1D1634u: goto label_1d1634;
            case 0x1D1638u: goto label_1d1638;
            case 0x1D163Cu: goto label_1d163c;
            case 0x1D1640u: goto label_1d1640;
            case 0x1D1644u: goto label_1d1644;
            case 0x1D1648u: goto label_1d1648;
            case 0x1D164Cu: goto label_1d164c;
            case 0x1D1650u: goto label_1d1650;
            case 0x1D1654u: goto label_1d1654;
            case 0x1D1658u: goto label_1d1658;
            case 0x1D165Cu: goto label_1d165c;
            case 0x1D1660u: goto label_1d1660;
            case 0x1D1664u: goto label_1d1664;
            case 0x1D1668u: goto label_1d1668;
            case 0x1D166Cu: goto label_1d166c;
            case 0x1D1670u: goto label_1d1670;
            case 0x1D1674u: goto label_1d1674;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D167Cu: goto label_1d167c;
            case 0x1D1680u: goto label_1d1680;
            case 0x1D1684u: goto label_1d1684;
            case 0x1D1688u: goto label_1d1688;
            case 0x1D168Cu: goto label_1d168c;
            case 0x1D1690u: goto label_1d1690;
            case 0x1D1694u: goto label_1d1694;
            case 0x1D1698u: goto label_1d1698;
            case 0x1D169Cu: goto label_1d169c;
            case 0x1D16A0u: goto label_1d16a0;
            case 0x1D16A4u: goto label_1d16a4;
            case 0x1D16A8u: goto label_1d16a8;
            case 0x1D16ACu: goto label_1d16ac;
            case 0x1D16B0u: goto label_1d16b0;
            case 0x1D16B4u: goto label_1d16b4;
            case 0x1D16B8u: goto label_1d16b8;
            case 0x1D16BCu: goto label_1d16bc;
            case 0x1D16C0u: goto label_1d16c0;
            case 0x1D16C4u: goto label_1d16c4;
            case 0x1D16C8u: goto label_1d16c8;
            case 0x1D16CCu: goto label_1d16cc;
            case 0x1D16D0u: goto label_1d16d0;
            case 0x1D16D4u: goto label_1d16d4;
            case 0x1D16D8u: goto label_1d16d8;
            case 0x1D16DCu: goto label_1d16dc;
            case 0x1D16E0u: goto label_1d16e0;
            case 0x1D16E4u: goto label_1d16e4;
            case 0x1D16E8u: goto label_1d16e8;
            case 0x1D16ECu: goto label_1d16ec;
            case 0x1D16F0u: goto label_1d16f0;
            case 0x1D16F4u: goto label_1d16f4;
            case 0x1D16F8u: goto label_1d16f8;
            case 0x1D16FCu: goto label_1d16fc;
            case 0x1D1700u: goto label_1d1700;
            case 0x1D1704u: goto label_1d1704;
            case 0x1D1708u: goto label_1d1708;
            case 0x1D170Cu: goto label_1d170c;
            case 0x1D1710u: goto label_1d1710;
            case 0x1D1714u: goto label_1d1714;
            case 0x1D1718u: goto label_1d1718;
            case 0x1D171Cu: goto label_1d171c;
            case 0x1D1720u: goto label_1d1720;
            case 0x1D1724u: goto label_1d1724;
            case 0x1D1728u: goto label_1d1728;
            case 0x1D172Cu: goto label_1d172c;
            case 0x1D1730u: goto label_1d1730;
            case 0x1D1734u: goto label_1d1734;
            case 0x1D1738u: goto label_1d1738;
            case 0x1D173Cu: goto label_1d173c;
            case 0x1D1740u: goto label_1d1740;
            case 0x1D1744u: goto label_1d1744;
            case 0x1D1748u: goto label_1d1748;
            case 0x1D174Cu: goto label_1d174c;
            case 0x1D1750u: goto label_1d1750;
            case 0x1D1754u: goto label_1d1754;
            case 0x1D1758u: goto label_1d1758;
            case 0x1D175Cu: goto label_1d175c;
            case 0x1D1760u: goto label_1d1760;
            case 0x1D1764u: goto label_1d1764;
            case 0x1D1768u: goto label_1d1768;
            case 0x1D176Cu: goto label_1d176c;
            case 0x1D1770u: goto label_1d1770;
            case 0x1D1774u: goto label_1d1774;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D177Cu: goto label_1d177c;
            case 0x1D1780u: goto label_1d1780;
            case 0x1D1784u: goto label_1d1784;
            case 0x1D1788u: goto label_1d1788;
            case 0x1D178Cu: goto label_1d178c;
            case 0x1D1790u: goto label_1d1790;
            case 0x1D1794u: goto label_1d1794;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D179Cu: goto label_1d179c;
            case 0x1D17A0u: goto label_1d17a0;
            case 0x1D17A4u: goto label_1d17a4;
            case 0x1D17A8u: goto label_1d17a8;
            case 0x1D17ACu: goto label_1d17ac;
            case 0x1D17B0u: goto label_1d17b0;
            case 0x1D17B4u: goto label_1d17b4;
            case 0x1D17B8u: goto label_1d17b8;
            case 0x1D17BCu: goto label_1d17bc;
            case 0x1D17C0u: goto label_1d17c0;
            case 0x1D17C4u: goto label_1d17c4;
            case 0x1D17C8u: goto label_1d17c8;
            case 0x1D17CCu: goto label_1d17cc;
            case 0x1D17D0u: goto label_1d17d0;
            case 0x1D17D4u: goto label_1d17d4;
            case 0x1D17D8u: goto label_1d17d8;
            case 0x1D17DCu: goto label_1d17dc;
            case 0x1D17E0u: goto label_1d17e0;
            case 0x1D17E4u: goto label_1d17e4;
            case 0x1D17E8u: goto label_1d17e8;
            case 0x1D17ECu: goto label_1d17ec;
            case 0x1D17F0u: goto label_1d17f0;
            case 0x1D17F4u: goto label_1d17f4;
            case 0x1D17F8u: goto label_1d17f8;
            case 0x1D17FCu: goto label_1d17fc;
            case 0x1D1800u: goto label_1d1800;
            case 0x1D1804u: goto label_1d1804;
            case 0x1D1808u: goto label_1d1808;
            case 0x1D180Cu: goto label_1d180c;
            case 0x1D1810u: goto label_1d1810;
            case 0x1D1814u: goto label_1d1814;
            case 0x1D1818u: goto label_1d1818;
            case 0x1D181Cu: goto label_1d181c;
            case 0x1D1820u: goto label_1d1820;
            case 0x1D1824u: goto label_1d1824;
            case 0x1D1828u: goto label_1d1828;
            case 0x1D182Cu: goto label_1d182c;
            case 0x1D1830u: goto label_1d1830;
            case 0x1D1834u: goto label_1d1834;
            case 0x1D1838u: goto label_1d1838;
            case 0x1D183Cu: goto label_1d183c;
            case 0x1D1840u: goto label_1d1840;
            case 0x1D1844u: goto label_1d1844;
            case 0x1D1848u: goto label_1d1848;
            case 0x1D184Cu: goto label_1d184c;
            case 0x1D1850u: goto label_1d1850;
            case 0x1D1854u: goto label_1d1854;
            case 0x1D1858u: goto label_1d1858;
            case 0x1D185Cu: goto label_1d185c;
            case 0x1D1860u: goto label_1d1860;
            case 0x1D1864u: goto label_1d1864;
            case 0x1D1868u: goto label_1d1868;
            case 0x1D186Cu: goto label_1d186c;
            case 0x1D1870u: goto label_1d1870;
            case 0x1D1874u: goto label_1d1874;
            case 0x1D1878u: goto label_1d1878;
            case 0x1D187Cu: goto label_1d187c;
            case 0x1D1880u: goto label_1d1880;
            case 0x1D1884u: goto label_1d1884;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1890u: goto label_1d1890;
            case 0x1D1894u: goto label_1d1894;
            case 0x1D1898u: goto label_1d1898;
            case 0x1D189Cu: goto label_1d189c;
            case 0x1D18A0u: goto label_1d18a0;
            case 0x1D18A4u: goto label_1d18a4;
            case 0x1D18A8u: goto label_1d18a8;
            case 0x1D18ACu: goto label_1d18ac;
            case 0x1D18B0u: goto label_1d18b0;
            case 0x1D18B4u: goto label_1d18b4;
            case 0x1D18B8u: goto label_1d18b8;
            case 0x1D18BCu: goto label_1d18bc;
            case 0x1D18C0u: goto label_1d18c0;
            case 0x1D18C4u: goto label_1d18c4;
            case 0x1D18C8u: goto label_1d18c8;
            case 0x1D18CCu: goto label_1d18cc;
            case 0x1D18D0u: goto label_1d18d0;
            case 0x1D18D4u: goto label_1d18d4;
            case 0x1D18D8u: goto label_1d18d8;
            case 0x1D18DCu: goto label_1d18dc;
            case 0x1D18E0u: goto label_1d18e0;
            case 0x1D18E4u: goto label_1d18e4;
            case 0x1D18E8u: goto label_1d18e8;
            case 0x1D18ECu: goto label_1d18ec;
            case 0x1D18F0u: goto label_1d18f0;
            case 0x1D18F4u: goto label_1d18f4;
            case 0x1D18F8u: goto label_1d18f8;
            case 0x1D18FCu: goto label_1d18fc;
            case 0x1D1900u: goto label_1d1900;
            case 0x1D1904u: goto label_1d1904;
            case 0x1D1908u: goto label_1d1908;
            case 0x1D190Cu: goto label_1d190c;
            case 0x1D1910u: goto label_1d1910;
            case 0x1D1914u: goto label_1d1914;
            case 0x1D1918u: goto label_1d1918;
            case 0x1D191Cu: goto label_1d191c;
            case 0x1D1920u: goto label_1d1920;
            case 0x1D1924u: goto label_1d1924;
            case 0x1D1928u: goto label_1d1928;
            case 0x1D192Cu: goto label_1d192c;
            case 0x1D1930u: goto label_1d1930;
            case 0x1D1934u: goto label_1d1934;
            case 0x1D1938u: goto label_1d1938;
            case 0x1D193Cu: goto label_1d193c;
            case 0x1D1940u: goto label_1d1940;
            case 0x1D1944u: goto label_1d1944;
            case 0x1D1948u: goto label_1d1948;
            case 0x1D194Cu: goto label_1d194c;
            case 0x1D1950u: goto label_1d1950;
            case 0x1D1954u: goto label_1d1954;
            case 0x1D1958u: goto label_1d1958;
            case 0x1D195Cu: goto label_1d195c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1964u: goto label_1d1964;
            case 0x1D1968u: goto label_1d1968;
            case 0x1D196Cu: goto label_1d196c;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D1974u: goto label_1d1974;
            case 0x1D1978u: goto label_1d1978;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D1980u: goto label_1d1980;
            case 0x1D1984u: goto label_1d1984;
            case 0x1D1988u: goto label_1d1988;
            case 0x1D198Cu: goto label_1d198c;
            case 0x1D1990u: goto label_1d1990;
            case 0x1D1994u: goto label_1d1994;
            case 0x1D1998u: goto label_1d1998;
            case 0x1D199Cu: goto label_1d199c;
            case 0x1D19A0u: goto label_1d19a0;
            case 0x1D19A4u: goto label_1d19a4;
            case 0x1D19A8u: goto label_1d19a8;
            case 0x1D19ACu: goto label_1d19ac;
            case 0x1D19B0u: goto label_1d19b0;
            case 0x1D19B4u: goto label_1d19b4;
            case 0x1D19B8u: goto label_1d19b8;
            case 0x1D19BCu: goto label_1d19bc;
            case 0x1D19C0u: goto label_1d19c0;
            case 0x1D19C4u: goto label_1d19c4;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D19CCu: goto label_1d19cc;
            case 0x1D19D0u: goto label_1d19d0;
            case 0x1D19D4u: goto label_1d19d4;
            case 0x1D19D8u: goto label_1d19d8;
            case 0x1D19DCu: goto label_1d19dc;
            case 0x1D19E0u: goto label_1d19e0;
            case 0x1D19E4u: goto label_1d19e4;
            case 0x1D19E8u: goto label_1d19e8;
            case 0x1D19ECu: goto label_1d19ec;
            case 0x1D19F0u: goto label_1d19f0;
            case 0x1D19F4u: goto label_1d19f4;
            case 0x1D19F8u: goto label_1d19f8;
            case 0x1D19FCu: goto label_1d19fc;
            case 0x1D1A00u: goto label_1d1a00;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A08u: goto label_1d1a08;
            case 0x1D1A0Cu: goto label_1d1a0c;
            case 0x1D1A10u: goto label_1d1a10;
            case 0x1D1A14u: goto label_1d1a14;
            case 0x1D1A18u: goto label_1d1a18;
            case 0x1D1A1Cu: goto label_1d1a1c;
            case 0x1D1A20u: goto label_1d1a20;
            case 0x1D1A24u: goto label_1d1a24;
            case 0x1D1A28u: goto label_1d1a28;
            case 0x1D1A2Cu: goto label_1d1a2c;
            case 0x1D1A30u: goto label_1d1a30;
            case 0x1D1A34u: goto label_1d1a34;
            case 0x1D1A38u: goto label_1d1a38;
            case 0x1D1A3Cu: goto label_1d1a3c;
            case 0x1D1A40u: goto label_1d1a40;
            case 0x1D1A44u: goto label_1d1a44;
            case 0x1D1A48u: goto label_1d1a48;
            case 0x1D1A4Cu: goto label_1d1a4c;
            case 0x1D1A50u: goto label_1d1a50;
            case 0x1D1A54u: goto label_1d1a54;
            case 0x1D1A58u: goto label_1d1a58;
            case 0x1D1A5Cu: goto label_1d1a5c;
            case 0x1D1A60u: goto label_1d1a60;
            case 0x1D1A64u: goto label_1d1a64;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A6Cu: goto label_1d1a6c;
            case 0x1D1A70u: goto label_1d1a70;
            case 0x1D1A74u: goto label_1d1a74;
            case 0x1D1A78u: goto label_1d1a78;
            case 0x1D1A7Cu: goto label_1d1a7c;
            case 0x1D1A80u: goto label_1d1a80;
            case 0x1D1A84u: goto label_1d1a84;
            case 0x1D1A88u: goto label_1d1a88;
            case 0x1D1A8Cu: goto label_1d1a8c;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1A94u: goto label_1d1a94;
            case 0x1D1A98u: goto label_1d1a98;
            case 0x1D1A9Cu: goto label_1d1a9c;
            case 0x1D1AA0u: goto label_1d1aa0;
            case 0x1D1AA4u: goto label_1d1aa4;
            case 0x1D1AA8u: goto label_1d1aa8;
            case 0x1D1AACu: goto label_1d1aac;
            case 0x1D1AB0u: goto label_1d1ab0;
            case 0x1D1AB4u: goto label_1d1ab4;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1ABCu: goto label_1d1abc;
            case 0x1D1AC0u: goto label_1d1ac0;
            case 0x1D1AC4u: goto label_1d1ac4;
            case 0x1D1AC8u: goto label_1d1ac8;
            case 0x1D1ACCu: goto label_1d1acc;
            case 0x1D1AD0u: goto label_1d1ad0;
            case 0x1D1AD4u: goto label_1d1ad4;
            case 0x1D1AD8u: goto label_1d1ad8;
            case 0x1D1ADCu: goto label_1d1adc;
            case 0x1D1AE0u: goto label_1d1ae0;
            case 0x1D1AE4u: goto label_1d1ae4;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1AECu: goto label_1d1aec;
            case 0x1D1AF0u: goto label_1d1af0;
            case 0x1D1AF4u: goto label_1d1af4;
            case 0x1D1AF8u: goto label_1d1af8;
            case 0x1D1AFCu: goto label_1d1afc;
            case 0x1D1B00u: goto label_1d1b00;
            case 0x1D1B04u: goto label_1d1b04;
            case 0x1D1B08u: goto label_1d1b08;
            case 0x1D1B0Cu: goto label_1d1b0c;
            case 0x1D1B10u: goto label_1d1b10;
            case 0x1D1B14u: goto label_1d1b14;
            case 0x1D1B18u: goto label_1d1b18;
            case 0x1D1B1Cu: goto label_1d1b1c;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B24u: goto label_1d1b24;
            case 0x1D1B28u: goto label_1d1b28;
            case 0x1D1B2Cu: goto label_1d1b2c;
            case 0x1D1B30u: goto label_1d1b30;
            case 0x1D1B34u: goto label_1d1b34;
            case 0x1D1B38u: goto label_1d1b38;
            case 0x1D1B3Cu: goto label_1d1b3c;
            case 0x1D1B40u: goto label_1d1b40;
            case 0x1D1B44u: goto label_1d1b44;
            case 0x1D1B48u: goto label_1d1b48;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B50u: goto label_1d1b50;
            case 0x1D1B54u: goto label_1d1b54;
            case 0x1D1B58u: goto label_1d1b58;
            case 0x1D1B5Cu: goto label_1d1b5c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B64u: goto label_1d1b64;
            case 0x1D1B68u: goto label_1d1b68;
            case 0x1D1B6Cu: goto label_1d1b6c;
            case 0x1D1B70u: goto label_1d1b70;
            case 0x1D1B74u: goto label_1d1b74;
            case 0x1D1B78u: goto label_1d1b78;
            case 0x1D1B7Cu: goto label_1d1b7c;
            case 0x1D1B80u: goto label_1d1b80;
            case 0x1D1B84u: goto label_1d1b84;
            case 0x1D1B88u: goto label_1d1b88;
            case 0x1D1B8Cu: goto label_1d1b8c;
            case 0x1D1B90u: goto label_1d1b90;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1B98u: goto label_1d1b98;
            case 0x1D1B9Cu: goto label_1d1b9c;
            case 0x1D1BA0u: goto label_1d1ba0;
            case 0x1D1BA4u: goto label_1d1ba4;
            case 0x1D1BA8u: goto label_1d1ba8;
            case 0x1D1BACu: goto label_1d1bac;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BB4u: goto label_1d1bb4;
            case 0x1D1BB8u: goto label_1d1bb8;
            case 0x1D1BBCu: goto label_1d1bbc;
            case 0x1D1BC0u: goto label_1d1bc0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1BC8u: goto label_1d1bc8;
            case 0x1D1BCCu: goto label_1d1bcc;
            case 0x1D1BD0u: goto label_1d1bd0;
            case 0x1D1BD4u: goto label_1d1bd4;
            case 0x1D1BD8u: goto label_1d1bd8;
            case 0x1D1BDCu: goto label_1d1bdc;
            case 0x1D1BE0u: goto label_1d1be0;
            case 0x1D1BE4u: goto label_1d1be4;
            case 0x1D1BE8u: goto label_1d1be8;
            case 0x1D1BECu: goto label_1d1bec;
            case 0x1D1BF0u: goto label_1d1bf0;
            case 0x1D1BF4u: goto label_1d1bf4;
            case 0x1D1BF8u: goto label_1d1bf8;
            case 0x1D1BFCu: goto label_1d1bfc;
            case 0x1D1C00u: goto label_1d1c00;
            case 0x1D1C04u: goto label_1d1c04;
            case 0x1D1C08u: goto label_1d1c08;
            case 0x1D1C0Cu: goto label_1d1c0c;
            case 0x1D1C10u: goto label_1d1c10;
            case 0x1D1C14u: goto label_1d1c14;
            case 0x1D1C18u: goto label_1d1c18;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C20u: goto label_1d1c20;
            case 0x1D1C24u: goto label_1d1c24;
            case 0x1D1C28u: goto label_1d1c28;
            case 0x1D1C2Cu: goto label_1d1c2c;
            case 0x1D1C30u: goto label_1d1c30;
            case 0x1D1C34u: goto label_1d1c34;
            case 0x1D1C38u: goto label_1d1c38;
            case 0x1D1C3Cu: goto label_1d1c3c;
            case 0x1D1C40u: goto label_1d1c40;
            case 0x1D1C44u: goto label_1d1c44;
            case 0x1D1C48u: goto label_1d1c48;
            case 0x1D1C4Cu: goto label_1d1c4c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C54u: goto label_1d1c54;
            case 0x1D1C58u: goto label_1d1c58;
            case 0x1D1C5Cu: goto label_1d1c5c;
            case 0x1D1C60u: goto label_1d1c60;
            case 0x1D1C64u: goto label_1d1c64;
            case 0x1D1C68u: goto label_1d1c68;
            case 0x1D1C6Cu: goto label_1d1c6c;
            case 0x1D1C70u: goto label_1d1c70;
            case 0x1D1C74u: goto label_1d1c74;
            case 0x1D1C78u: goto label_1d1c78;
            case 0x1D1C7Cu: goto label_1d1c7c;
            case 0x1D1C80u: goto label_1d1c80;
            case 0x1D1C84u: goto label_1d1c84;
            case 0x1D1C88u: goto label_1d1c88;
            case 0x1D1C8Cu: goto label_1d1c8c;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1C94u: goto label_1d1c94;
            case 0x1D1C98u: goto label_1d1c98;
            case 0x1D1C9Cu: goto label_1d1c9c;
            case 0x1D1CA0u: goto label_1d1ca0;
            case 0x1D1CA4u: goto label_1d1ca4;
            case 0x1D1CA8u: goto label_1d1ca8;
            case 0x1D1CACu: goto label_1d1cac;
            case 0x1D1CB0u: goto label_1d1cb0;
            case 0x1D1CB4u: goto label_1d1cb4;
            case 0x1D1CB8u: goto label_1d1cb8;
            case 0x1D1CBCu: goto label_1d1cbc;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CC4u: goto label_1d1cc4;
            case 0x1D1CC8u: goto label_1d1cc8;
            case 0x1D1CCCu: goto label_1d1ccc;
            case 0x1D1CD0u: goto label_1d1cd0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CDCu: goto label_1d1cdc;
            case 0x1D1CE0u: goto label_1d1ce0;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            case 0x1D1CECu: goto label_1d1cec;
            case 0x1D1CF0u: goto label_1d1cf0;
            case 0x1D1CF4u: goto label_1d1cf4;
            case 0x1D1CF8u: goto label_1d1cf8;
            case 0x1D1CFCu: goto label_1d1cfc;
            case 0x1D1D00u: goto label_1d1d00;
            case 0x1D1D04u: goto label_1d1d04;
            case 0x1D1D08u: goto label_1d1d08;
            case 0x1D1D0Cu: goto label_1d1d0c;
            case 0x1D1D10u: goto label_1d1d10;
            case 0x1D1D14u: goto label_1d1d14;
            case 0x1D1D18u: goto label_1d1d18;
            case 0x1D1D1Cu: goto label_1d1d1c;
            case 0x1D1D20u: goto label_1d1d20;
            case 0x1D1D24u: goto label_1d1d24;
            case 0x1D1D28u: goto label_1d1d28;
            case 0x1D1D2Cu: goto label_1d1d2c;
            case 0x1D1D30u: goto label_1d1d30;
            case 0x1D1D34u: goto label_1d1d34;
            case 0x1D1D38u: goto label_1d1d38;
            case 0x1D1D3Cu: goto label_1d1d3c;
            case 0x1D1D40u: goto label_1d1d40;
            case 0x1D1D44u: goto label_1d1d44;
            case 0x1D1D48u: goto label_1d1d48;
            case 0x1D1D4Cu: goto label_1d1d4c;
            case 0x1D1D50u: goto label_1d1d50;
            case 0x1D1D54u: goto label_1d1d54;
            case 0x1D1D58u: goto label_1d1d58;
            case 0x1D1D5Cu: goto label_1d1d5c;
            case 0x1D1D60u: goto label_1d1d60;
            case 0x1D1D64u: goto label_1d1d64;
            case 0x1D1D68u: goto label_1d1d68;
            case 0x1D1D6Cu: goto label_1d1d6c;
            case 0x1D1D70u: goto label_1d1d70;
            case 0x1D1D74u: goto label_1d1d74;
            case 0x1D1D78u: goto label_1d1d78;
            case 0x1D1D7Cu: goto label_1d1d7c;
            case 0x1D1D80u: goto label_1d1d80;
            case 0x1D1D84u: goto label_1d1d84;
            case 0x1D1D88u: goto label_1d1d88;
            case 0x1D1D8Cu: goto label_1d1d8c;
            case 0x1D1D90u: goto label_1d1d90;
            case 0x1D1D94u: goto label_1d1d94;
            case 0x1D1D98u: goto label_1d1d98;
            case 0x1D1D9Cu: goto label_1d1d9c;
            case 0x1D1DA0u: goto label_1d1da0;
            case 0x1D1DA4u: goto label_1d1da4;
            case 0x1D1DA8u: goto label_1d1da8;
            case 0x1D1DACu: goto label_1d1dac;
            case 0x1D1DB0u: goto label_1d1db0;
            case 0x1D1DB4u: goto label_1d1db4;
            case 0x1D1DB8u: goto label_1d1db8;
            case 0x1D1DBCu: goto label_1d1dbc;
            case 0x1D1DC0u: goto label_1d1dc0;
            case 0x1D1DC4u: goto label_1d1dc4;
            case 0x1D1DC8u: goto label_1d1dc8;
            case 0x1D1DCCu: goto label_1d1dcc;
            case 0x1D1DD0u: goto label_1d1dd0;
            case 0x1D1DD4u: goto label_1d1dd4;
            case 0x1D1DD8u: goto label_1d1dd8;
            case 0x1D1DDCu: goto label_1d1ddc;
            case 0x1D1DE0u: goto label_1d1de0;
            case 0x1D1DE4u: goto label_1d1de4;
            case 0x1D1DE8u: goto label_1d1de8;
            case 0x1D1DECu: goto label_1d1dec;
            case 0x1D1DF0u: goto label_1d1df0;
            case 0x1D1DF4u: goto label_1d1df4;
            case 0x1D1DF8u: goto label_1d1df8;
            case 0x1D1DFCu: goto label_1d1dfc;
            case 0x1D1E00u: goto label_1d1e00;
            case 0x1D1E04u: goto label_1d1e04;
            case 0x1D1E08u: goto label_1d1e08;
            case 0x1D1E0Cu: goto label_1d1e0c;
            case 0x1D1E10u: goto label_1d1e10;
            case 0x1D1E14u: goto label_1d1e14;
            case 0x1D1E18u: goto label_1d1e18;
            case 0x1D1E1Cu: goto label_1d1e1c;
            case 0x1D1E20u: goto label_1d1e20;
            case 0x1D1E24u: goto label_1d1e24;
            case 0x1D1E28u: goto label_1d1e28;
            case 0x1D1E2Cu: goto label_1d1e2c;
            case 0x1D1E30u: goto label_1d1e30;
            case 0x1D1E34u: goto label_1d1e34;
            case 0x1D1E38u: goto label_1d1e38;
            case 0x1D1E3Cu: goto label_1d1e3c;
            case 0x1D1E40u: goto label_1d1e40;
            case 0x1D1E44u: goto label_1d1e44;
            case 0x1D1E48u: goto label_1d1e48;
            case 0x1D1E4Cu: goto label_1d1e4c;
            case 0x1D1E50u: goto label_1d1e50;
            case 0x1D1E54u: goto label_1d1e54;
            case 0x1D1E58u: goto label_1d1e58;
            case 0x1D1E5Cu: goto label_1d1e5c;
            case 0x1D1E60u: goto label_1d1e60;
            case 0x1D1E64u: goto label_1d1e64;
            case 0x1D1E68u: goto label_1d1e68;
            case 0x1D1E6Cu: goto label_1d1e6c;
            case 0x1D1E70u: goto label_1d1e70;
            case 0x1D1E74u: goto label_1d1e74;
            case 0x1D1E78u: goto label_1d1e78;
            case 0x1D1E7Cu: goto label_1d1e7c;
            case 0x1D1E80u: goto label_1d1e80;
            case 0x1D1E84u: goto label_1d1e84;
            case 0x1D1E88u: goto label_1d1e88;
            case 0x1D1E8Cu: goto label_1d1e8c;
            case 0x1D1E90u: goto label_1d1e90;
            case 0x1D1E94u: goto label_1d1e94;
            case 0x1D1E98u: goto label_1d1e98;
            case 0x1D1E9Cu: goto label_1d1e9c;
            case 0x1D1EA0u: goto label_1d1ea0;
            case 0x1D1EA4u: goto label_1d1ea4;
            case 0x1D1EA8u: goto label_1d1ea8;
            case 0x1D1EACu: goto label_1d1eac;
            case 0x1D1EB0u: goto label_1d1eb0;
            case 0x1D1EB4u: goto label_1d1eb4;
            case 0x1D1EB8u: goto label_1d1eb8;
            case 0x1D1EBCu: goto label_1d1ebc;
            case 0x1D1EC0u: goto label_1d1ec0;
            case 0x1D1EC4u: goto label_1d1ec4;
            case 0x1D1EC8u: goto label_1d1ec8;
            case 0x1D1ECCu: goto label_1d1ecc;
            case 0x1D1ED0u: goto label_1d1ed0;
            case 0x1D1ED4u: goto label_1d1ed4;
            case 0x1D1ED8u: goto label_1d1ed8;
            case 0x1D1EDCu: goto label_1d1edc;
            case 0x1D1EE0u: goto label_1d1ee0;
            case 0x1D1EE4u: goto label_1d1ee4;
            case 0x1D1EE8u: goto label_1d1ee8;
            case 0x1D1EECu: goto label_1d1eec;
            case 0x1D1EF0u: goto label_1d1ef0;
            case 0x1D1EF4u: goto label_1d1ef4;
            case 0x1D1EF8u: goto label_1d1ef8;
            case 0x1D1EFCu: goto label_1d1efc;
            case 0x1D1F00u: goto label_1d1f00;
            case 0x1D1F04u: goto label_1d1f04;
            case 0x1D1F08u: goto label_1d1f08;
            case 0x1D1F0Cu: goto label_1d1f0c;
            case 0x1D1F10u: goto label_1d1f10;
            case 0x1D1F14u: goto label_1d1f14;
            case 0x1D1F18u: goto label_1d1f18;
            case 0x1D1F1Cu: goto label_1d1f1c;
            case 0x1D1F20u: goto label_1d1f20;
            case 0x1D1F24u: goto label_1d1f24;
            case 0x1D1F28u: goto label_1d1f28;
            case 0x1D1F2Cu: goto label_1d1f2c;
            case 0x1D1F30u: goto label_1d1f30;
            case 0x1D1F34u: goto label_1d1f34;
            case 0x1D1F38u: goto label_1d1f38;
            case 0x1D1F3Cu: goto label_1d1f3c;
            case 0x1D1F40u: goto label_1d1f40;
            case 0x1D1F44u: goto label_1d1f44;
            case 0x1D1F48u: goto label_1d1f48;
            case 0x1D1F4Cu: goto label_1d1f4c;
            case 0x1D1F50u: goto label_1d1f50;
            case 0x1D1F54u: goto label_1d1f54;
            case 0x1D1F58u: goto label_1d1f58;
            case 0x1D1F5Cu: goto label_1d1f5c;
            case 0x1D1F60u: goto label_1d1f60;
            case 0x1D1F64u: goto label_1d1f64;
            case 0x1D1F68u: goto label_1d1f68;
            case 0x1D1F6Cu: goto label_1d1f6c;
            case 0x1D1F70u: goto label_1d1f70;
            case 0x1D1F74u: goto label_1d1f74;
            case 0x1D1F78u: goto label_1d1f78;
            case 0x1D1F7Cu: goto label_1d1f7c;
            case 0x1D1F80u: goto label_1d1f80;
            case 0x1D1F84u: goto label_1d1f84;
            case 0x1D1F88u: goto label_1d1f88;
            case 0x1D1F8Cu: goto label_1d1f8c;
            case 0x1D1F90u: goto label_1d1f90;
            case 0x1D1F94u: goto label_1d1f94;
            case 0x1D1F98u: goto label_1d1f98;
            case 0x1D1F9Cu: goto label_1d1f9c;
            case 0x1D1FA0u: goto label_1d1fa0;
            case 0x1D1FA4u: goto label_1d1fa4;
            case 0x1D1FA8u: goto label_1d1fa8;
            case 0x1D1FACu: goto label_1d1fac;
            case 0x1D1FB0u: goto label_1d1fb0;
            case 0x1D1FB4u: goto label_1d1fb4;
            case 0x1D1FB8u: goto label_1d1fb8;
            case 0x1D1FBCu: goto label_1d1fbc;
            case 0x1D1FC0u: goto label_1d1fc0;
            case 0x1D1FC4u: goto label_1d1fc4;
            case 0x1D1FC8u: goto label_1d1fc8;
            case 0x1D1FCCu: goto label_1d1fcc;
            case 0x1D1FD0u: goto label_1d1fd0;
            case 0x1D1FD4u: goto label_1d1fd4;
            case 0x1D1FD8u: goto label_1d1fd8;
            case 0x1D1FDCu: goto label_1d1fdc;
            case 0x1D1FE0u: goto label_1d1fe0;
            case 0x1D1FE4u: goto label_1d1fe4;
            case 0x1D1FE8u: goto label_1d1fe8;
            case 0x1D1FECu: goto label_1d1fec;
            case 0x1D1FF0u: goto label_1d1ff0;
            case 0x1D1FF4u: goto label_1d1ff4;
            case 0x1D1FF8u: goto label_1d1ff8;
            case 0x1D1FFCu: goto label_1d1ffc;
            case 0x1D2000u: goto label_1d2000;
            case 0x1D2004u: goto label_1d2004;
            case 0x1D2008u: goto label_1d2008;
            case 0x1D200Cu: goto label_1d200c;
            case 0x1D2010u: goto label_1d2010;
            case 0x1D2014u: goto label_1d2014;
            case 0x1D2018u: goto label_1d2018;
            case 0x1D201Cu: goto label_1d201c;
            case 0x1D2020u: goto label_1d2020;
            case 0x1D2024u: goto label_1d2024;
            case 0x1D2028u: goto label_1d2028;
            case 0x1D202Cu: goto label_1d202c;
            case 0x1D2030u: goto label_1d2030;
            case 0x1D2034u: goto label_1d2034;
            case 0x1D2038u: goto label_1d2038;
            case 0x1D203Cu: goto label_1d203c;
            case 0x1D2040u: goto label_1d2040;
            case 0x1D2044u: goto label_1d2044;
            case 0x1D2048u: goto label_1d2048;
            case 0x1D204Cu: goto label_1d204c;
            case 0x1D2050u: goto label_1d2050;
            case 0x1D2054u: goto label_1d2054;
            case 0x1D2058u: goto label_1d2058;
            case 0x1D205Cu: goto label_1d205c;
            case 0x1D2060u: goto label_1d2060;
            case 0x1D2064u: goto label_1d2064;
            case 0x1D2068u: goto label_1d2068;
            case 0x1D206Cu: goto label_1d206c;
            case 0x1D2070u: goto label_1d2070;
            case 0x1D2074u: goto label_1d2074;
            case 0x1D2078u: goto label_1d2078;
            case 0x1D207Cu: goto label_1d207c;
            case 0x1D2080u: goto label_1d2080;
            case 0x1D2084u: goto label_1d2084;
            case 0x1D2088u: goto label_1d2088;
            case 0x1D208Cu: goto label_1d208c;
            case 0x1D2090u: goto label_1d2090;
            case 0x1D2094u: goto label_1d2094;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D209Cu: goto label_1d209c;
            case 0x1D20A0u: goto label_1d20a0;
            case 0x1D20A4u: goto label_1d20a4;
            case 0x1D20A8u: goto label_1d20a8;
            case 0x1D20ACu: goto label_1d20ac;
            case 0x1D20B0u: goto label_1d20b0;
            case 0x1D20B4u: goto label_1d20b4;
            case 0x1D20B8u: goto label_1d20b8;
            case 0x1D20BCu: goto label_1d20bc;
            case 0x1D20C0u: goto label_1d20c0;
            case 0x1D20C4u: goto label_1d20c4;
            case 0x1D20C8u: goto label_1d20c8;
            case 0x1D20CCu: goto label_1d20cc;
            case 0x1D20D0u: goto label_1d20d0;
            case 0x1D20D4u: goto label_1d20d4;
            case 0x1D20D8u: goto label_1d20d8;
            case 0x1D20DCu: goto label_1d20dc;
            case 0x1D20E0u: goto label_1d20e0;
            case 0x1D20E4u: goto label_1d20e4;
            case 0x1D20E8u: goto label_1d20e8;
            case 0x1D20ECu: goto label_1d20ec;
            case 0x1D20F0u: goto label_1d20f0;
            case 0x1D20F4u: goto label_1d20f4;
            case 0x1D20F8u: goto label_1d20f8;
            case 0x1D20FCu: goto label_1d20fc;
            case 0x1D2100u: goto label_1d2100;
            case 0x1D2104u: goto label_1d2104;
            case 0x1D2108u: goto label_1d2108;
            case 0x1D210Cu: goto label_1d210c;
            case 0x1D2110u: goto label_1d2110;
            case 0x1D2114u: goto label_1d2114;
            case 0x1D2118u: goto label_1d2118;
            case 0x1D211Cu: goto label_1d211c;
            case 0x1D2120u: goto label_1d2120;
            case 0x1D2124u: goto label_1d2124;
            case 0x1D2128u: goto label_1d2128;
            case 0x1D212Cu: goto label_1d212c;
            case 0x1D2130u: goto label_1d2130;
            case 0x1D2134u: goto label_1d2134;
            case 0x1D2138u: goto label_1d2138;
            case 0x1D213Cu: goto label_1d213c;
            case 0x1D2140u: goto label_1d2140;
            case 0x1D2144u: goto label_1d2144;
            case 0x1D2148u: goto label_1d2148;
            case 0x1D214Cu: goto label_1d214c;
            case 0x1D2150u: goto label_1d2150;
            case 0x1D2154u: goto label_1d2154;
            case 0x1D2158u: goto label_1d2158;
            case 0x1D215Cu: goto label_1d215c;
            case 0x1D2160u: goto label_1d2160;
            case 0x1D2164u: goto label_1d2164;
            case 0x1D2168u: goto label_1d2168;
            case 0x1D216Cu: goto label_1d216c;
            case 0x1D2170u: goto label_1d2170;
            case 0x1D2174u: goto label_1d2174;
            case 0x1D2178u: goto label_1d2178;
            case 0x1D217Cu: goto label_1d217c;
            case 0x1D2180u: goto label_1d2180;
            case 0x1D2184u: goto label_1d2184;
            case 0x1D2188u: goto label_1d2188;
            case 0x1D218Cu: goto label_1d218c;
            case 0x1D2190u: goto label_1d2190;
            case 0x1D2194u: goto label_1d2194;
            case 0x1D2198u: goto label_1d2198;
            case 0x1D219Cu: goto label_1d219c;
            case 0x1D21A0u: goto label_1d21a0;
            case 0x1D21A4u: goto label_1d21a4;
            case 0x1D21A8u: goto label_1d21a8;
            case 0x1D21ACu: goto label_1d21ac;
            case 0x1D21B0u: goto label_1d21b0;
            case 0x1D21B4u: goto label_1d21b4;
            case 0x1D21B8u: goto label_1d21b8;
            case 0x1D21BCu: goto label_1d21bc;
            case 0x1D21C0u: goto label_1d21c0;
            case 0x1D21C4u: goto label_1d21c4;
            case 0x1D21C8u: goto label_1d21c8;
            case 0x1D21CCu: goto label_1d21cc;
            case 0x1D21D0u: goto label_1d21d0;
            case 0x1D21D4u: goto label_1d21d4;
            case 0x1D21D8u: goto label_1d21d8;
            case 0x1D21DCu: goto label_1d21dc;
            case 0x1D21E0u: goto label_1d21e0;
            case 0x1D21E4u: goto label_1d21e4;
            case 0x1D21E8u: goto label_1d21e8;
            case 0x1D21ECu: goto label_1d21ec;
            case 0x1D21F0u: goto label_1d21f0;
            case 0x1D21F4u: goto label_1d21f4;
            case 0x1D21F8u: goto label_1d21f8;
            case 0x1D21FCu: goto label_1d21fc;
            case 0x1D2200u: goto label_1d2200;
            case 0x1D2204u: goto label_1d2204;
            case 0x1D2208u: goto label_1d2208;
            case 0x1D220Cu: goto label_1d220c;
            case 0x1D2210u: goto label_1d2210;
            case 0x1D2214u: goto label_1d2214;
            case 0x1D2218u: goto label_1d2218;
            case 0x1D221Cu: goto label_1d221c;
            case 0x1D2220u: goto label_1d2220;
            case 0x1D2224u: goto label_1d2224;
            case 0x1D2228u: goto label_1d2228;
            case 0x1D222Cu: goto label_1d222c;
            case 0x1D2230u: goto label_1d2230;
            case 0x1D2234u: goto label_1d2234;
            case 0x1D2238u: goto label_1d2238;
            case 0x1D223Cu: goto label_1d223c;
            case 0x1D2240u: goto label_1d2240;
            case 0x1D2244u: goto label_1d2244;
            case 0x1D2248u: goto label_1d2248;
            case 0x1D224Cu: goto label_1d224c;
            case 0x1D2250u: goto label_1d2250;
            case 0x1D2254u: goto label_1d2254;
            case 0x1D2258u: goto label_1d2258;
            case 0x1D225Cu: goto label_1d225c;
            case 0x1D2260u: goto label_1d2260;
            case 0x1D2264u: goto label_1d2264;
            case 0x1D2268u: goto label_1d2268;
            case 0x1D226Cu: goto label_1d226c;
            case 0x1D2270u: goto label_1d2270;
            case 0x1D2274u: goto label_1d2274;
            case 0x1D2278u: goto label_1d2278;
            case 0x1D227Cu: goto label_1d227c;
            case 0x1D2280u: goto label_1d2280;
            case 0x1D2284u: goto label_1d2284;
            case 0x1D2288u: goto label_1d2288;
            case 0x1D228Cu: goto label_1d228c;
            case 0x1D2290u: goto label_1d2290;
            case 0x1D2294u: goto label_1d2294;
            case 0x1D2298u: goto label_1d2298;
            case 0x1D229Cu: goto label_1d229c;
            case 0x1D22A0u: goto label_1d22a0;
            case 0x1D22A4u: goto label_1d22a4;
            case 0x1D22A8u: goto label_1d22a8;
            case 0x1D22ACu: goto label_1d22ac;
            case 0x1D22B0u: goto label_1d22b0;
            case 0x1D22B4u: goto label_1d22b4;
            case 0x1D22B8u: goto label_1d22b8;
            case 0x1D22BCu: goto label_1d22bc;
            case 0x1D22C0u: goto label_1d22c0;
            case 0x1D22C4u: goto label_1d22c4;
            case 0x1D22C8u: goto label_1d22c8;
            case 0x1D22CCu: goto label_1d22cc;
            case 0x1D22D0u: goto label_1d22d0;
            case 0x1D22D4u: goto label_1d22d4;
            case 0x1D22D8u: goto label_1d22d8;
            case 0x1D22DCu: goto label_1d22dc;
            case 0x1D22E0u: goto label_1d22e0;
            case 0x1D22E4u: goto label_1d22e4;
            case 0x1D22E8u: goto label_1d22e8;
            case 0x1D22ECu: goto label_1d22ec;
            case 0x1D22F0u: goto label_1d22f0;
            case 0x1D22F4u: goto label_1d22f4;
            case 0x1D22F8u: goto label_1d22f8;
            case 0x1D22FCu: goto label_1d22fc;
            case 0x1D2300u: goto label_1d2300;
            case 0x1D2304u: goto label_1d2304;
            case 0x1D2308u: goto label_1d2308;
            case 0x1D230Cu: goto label_1d230c;
            case 0x1D2310u: goto label_1d2310;
            case 0x1D2314u: goto label_1d2314;
            case 0x1D2318u: goto label_1d2318;
            case 0x1D231Cu: goto label_1d231c;
            case 0x1D2320u: goto label_1d2320;
            case 0x1D2324u: goto label_1d2324;
            case 0x1D2328u: goto label_1d2328;
            case 0x1D232Cu: goto label_1d232c;
            case 0x1D2330u: goto label_1d2330;
            case 0x1D2334u: goto label_1d2334;
            case 0x1D2338u: goto label_1d2338;
            case 0x1D233Cu: goto label_1d233c;
            case 0x1D2340u: goto label_1d2340;
            case 0x1D2344u: goto label_1d2344;
            case 0x1D2348u: goto label_1d2348;
            case 0x1D234Cu: goto label_1d234c;
            case 0x1D2350u: goto label_1d2350;
            case 0x1D2354u: goto label_1d2354;
            case 0x1D2358u: goto label_1d2358;
            case 0x1D235Cu: goto label_1d235c;
            case 0x1D2360u: goto label_1d2360;
            case 0x1D2364u: goto label_1d2364;
            case 0x1D2368u: goto label_1d2368;
            case 0x1D236Cu: goto label_1d236c;
            case 0x1D2370u: goto label_1d2370;
            case 0x1D2374u: goto label_1d2374;
            case 0x1D2378u: goto label_1d2378;
            case 0x1D237Cu: goto label_1d237c;
            case 0x1D2380u: goto label_1d2380;
            case 0x1D2384u: goto label_1d2384;
            case 0x1D2388u: goto label_1d2388;
            case 0x1D238Cu: goto label_1d238c;
            case 0x1D2390u: goto label_1d2390;
            case 0x1D2394u: goto label_1d2394;
            case 0x1D2398u: goto label_1d2398;
            case 0x1D239Cu: goto label_1d239c;
            case 0x1D23A0u: goto label_1d23a0;
            case 0x1D23A4u: goto label_1d23a4;
            case 0x1D23A8u: goto label_1d23a8;
            case 0x1D23ACu: goto label_1d23ac;
            case 0x1D23B0u: goto label_1d23b0;
            case 0x1D23B4u: goto label_1d23b4;
            case 0x1D23B8u: goto label_1d23b8;
            case 0x1D23BCu: goto label_1d23bc;
            case 0x1D23C0u: goto label_1d23c0;
            case 0x1D23C4u: goto label_1d23c4;
            case 0x1D23C8u: goto label_1d23c8;
            case 0x1D23CCu: goto label_1d23cc;
            case 0x1D23D0u: goto label_1d23d0;
            case 0x1D23D4u: goto label_1d23d4;
            case 0x1D23D8u: goto label_1d23d8;
            case 0x1D23DCu: goto label_1d23dc;
            case 0x1D23E0u: goto label_1d23e0;
            case 0x1D23E4u: goto label_1d23e4;
            case 0x1D23E8u: goto label_1d23e8;
            case 0x1D23ECu: goto label_1d23ec;
            case 0x1D23F0u: goto label_1d23f0;
            case 0x1D23F4u: goto label_1d23f4;
            case 0x1D23F8u: goto label_1d23f8;
            case 0x1D23FCu: goto label_1d23fc;
            case 0x1D2400u: goto label_1d2400;
            case 0x1D2404u: goto label_1d2404;
            case 0x1D2408u: goto label_1d2408;
            case 0x1D240Cu: goto label_1d240c;
            case 0x1D2410u: goto label_1d2410;
            case 0x1D2414u: goto label_1d2414;
            case 0x1D2418u: goto label_1d2418;
            case 0x1D241Cu: goto label_1d241c;
            case 0x1D2420u: goto label_1d2420;
            case 0x1D2424u: goto label_1d2424;
            case 0x1D2428u: goto label_1d2428;
            case 0x1D242Cu: goto label_1d242c;
            case 0x1D2430u: goto label_1d2430;
            case 0x1D2434u: goto label_1d2434;
            case 0x1D2438u: goto label_1d2438;
            case 0x1D243Cu: goto label_1d243c;
            case 0x1D2440u: goto label_1d2440;
            case 0x1D2444u: goto label_1d2444;
            case 0x1D2448u: goto label_1d2448;
            case 0x1D244Cu: goto label_1d244c;
            case 0x1D2450u: goto label_1d2450;
            case 0x1D2454u: goto label_1d2454;
            case 0x1D2458u: goto label_1d2458;
            case 0x1D245Cu: goto label_1d245c;
            case 0x1D2460u: goto label_1d2460;
            case 0x1D2464u: goto label_1d2464;
            case 0x1D2468u: goto label_1d2468;
            case 0x1D246Cu: goto label_1d246c;
            case 0x1D2470u: goto label_1d2470;
            case 0x1D2474u: goto label_1d2474;
            case 0x1D2478u: goto label_1d2478;
            case 0x1D247Cu: goto label_1d247c;
            case 0x1D2480u: goto label_1d2480;
            case 0x1D2484u: goto label_1d2484;
            case 0x1D2488u: goto label_1d2488;
            case 0x1D248Cu: goto label_1d248c;
            case 0x1D2490u: goto label_1d2490;
            case 0x1D2494u: goto label_1d2494;
            case 0x1D2498u: goto label_1d2498;
            case 0x1D249Cu: goto label_1d249c;
            case 0x1D24A0u: goto label_1d24a0;
            case 0x1D24A4u: goto label_1d24a4;
            case 0x1D24A8u: goto label_1d24a8;
            case 0x1D24ACu: goto label_1d24ac;
            case 0x1D24B0u: goto label_1d24b0;
            case 0x1D24B4u: goto label_1d24b4;
            case 0x1D24B8u: goto label_1d24b8;
            case 0x1D24BCu: goto label_1d24bc;
            case 0x1D24C0u: goto label_1d24c0;
            case 0x1D24C4u: goto label_1d24c4;
            case 0x1D24C8u: goto label_1d24c8;
            case 0x1D24CCu: goto label_1d24cc;
            case 0x1D24D0u: goto label_1d24d0;
            case 0x1D24D4u: goto label_1d24d4;
            case 0x1D24D8u: goto label_1d24d8;
            case 0x1D24DCu: goto label_1d24dc;
            case 0x1D24E0u: goto label_1d24e0;
            case 0x1D24E4u: goto label_1d24e4;
            case 0x1D24E8u: goto label_1d24e8;
            case 0x1D24ECu: goto label_1d24ec;
            case 0x1D24F0u: goto label_1d24f0;
            case 0x1D24F4u: goto label_1d24f4;
            case 0x1D24F8u: goto label_1d24f8;
            case 0x1D24FCu: goto label_1d24fc;
            case 0x1D2500u: goto label_1d2500;
            case 0x1D2504u: goto label_1d2504;
            case 0x1D2508u: goto label_1d2508;
            case 0x1D250Cu: goto label_1d250c;
            case 0x1D2510u: goto label_1d2510;
            case 0x1D2514u: goto label_1d2514;
            case 0x1D2518u: goto label_1d2518;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d2514:
    ctx->pc = 0x1D251Cu;
}
