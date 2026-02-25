#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_01Move
// Address: 0x1b4160 - 0x1b4a7c
void En5_01Move_0x1b4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_01Move_0x1b4160");
#endif

    ctx->pc = 0x1b4160u;

label_1b4160:
    // 0x1b4160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b4164:
    // 0x1b4164: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b4164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b4168:
    // 0x1b4168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b416c:
    // 0x1b416c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b416cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4170:
    // 0x1b4170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b4174:
    // 0x1b4174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4178:
    // 0x1b4178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b417c:
    // 0x1b417c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4180:
    // 0x1b4180: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1b4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4184:
    // 0x1b4184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4188:
    // 0x1b4188: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1b4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b418c:
    // 0x1b418c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b418cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4190:
    // 0x1b4190: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b4190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1b4194:
    // 0x1b4194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4198:
    // 0x1b4198: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1b4198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b419c:
    // 0x1b419c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41a0:
    // 0x1b41a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b41a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b41a4:
    // 0x1b41a4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1b41a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1b41a8:
    // 0x1b41a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b41ac:
    // 0x1b41ac: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1b41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b41b0:
    // 0x1b41b0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b41b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41b4:
    // 0x1b41b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b41b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b41b8:
    // 0x1b41b8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1b41b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1b41bc:
    // 0x1b41bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b41c0:
    // 0x1b41c0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1b41c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b41c4:
    // 0x1b41c4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41c8:
    // 0x1b41c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b41c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b41cc:
    // 0x1b41cc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1b41ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1b41d0:
    // 0x1b41d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b41d4:
    // 0x1b41d4: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1b41d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b41d8:
    // 0x1b41d8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41dc:
    // 0x1b41dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b41dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b41e0:
    // 0x1b41e0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1b41e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1b41e4:
    // 0x1b41e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b41e8:
    // 0x1b41e8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b41e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41ec:
    // 0x1b41ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b41ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b41f0:
    // 0x1b41f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b41f4:
    if (ctx->pc == 0x1B41F4u) {
        ctx->pc = 0x1B41F4u;
            // 0x1b41f4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1B41F8u;
        goto label_1b41f8;
    }
    ctx->pc = 0x1B41F0u;
    {
        const bool branch_taken_0x1b41f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41F0u;
            // 0x1b41f4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41f0) {
            ctx->pc = 0x1B4210u;
            goto label_1b4210;
        }
    }
    ctx->pc = 0x1B41F8u;
label_1b41f8:
    // 0x1b41f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b41fc:
    // 0x1b41fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b41fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4200:
    // 0x1b4200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4204:
    // 0x1b4204: 0x0  nop
    ctx->pc = 0x1b4204u;
    // NOP
label_1b4208:
    // 0x1b4208: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b420c:
    // 0x1b420c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b4210:
    // 0x1b4210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4214:
    // 0x1b4214: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b4218:
    // 0x1b4218: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4218u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b421c:
    // 0x1b421c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b421cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4220:
    // 0x1b4220: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1b4220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4224:
    // 0x1b4224: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4228:
    // 0x1b4228: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b422c:
    if (ctx->pc == 0x1B422Cu) {
        ctx->pc = 0x1B422Cu;
            // 0x1b422c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1B4230u;
        goto label_1b4230;
    }
    ctx->pc = 0x1B4228u;
    {
        const bool branch_taken_0x1b4228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4228u;
            // 0x1b422c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4228) {
            ctx->pc = 0x1B4248u;
            goto label_1b4248;
        }
    }
    ctx->pc = 0x1B4230u;
label_1b4230:
    // 0x1b4230: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b4234:
    // 0x1b4234: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4234u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4238:
    // 0x1b4238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b423c:
    // 0x1b423c: 0x0  nop
    ctx->pc = 0x1b423cu;
    // NOP
label_1b4240:
    // 0x1b4240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b4244:
    // 0x1b4244: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b4248:
    // 0x1b4248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b424c:
    // 0x1b424c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b4250:
    // 0x1b4250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4250u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4254:
    // 0x1b4254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4258:
    // 0x1b4258: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b425c:
    // 0x1b425c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b425cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4260:
    // 0x1b4260: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b4264:
    if (ctx->pc == 0x1B4264u) {
        ctx->pc = 0x1B4264u;
            // 0x1b4264: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B4268u;
        goto label_1b4268;
    }
    ctx->pc = 0x1B4260u;
    {
        const bool branch_taken_0x1b4260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4260u;
            // 0x1b4264: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4260) {
            ctx->pc = 0x1B4280u;
            goto label_1b4280;
        }
    }
    ctx->pc = 0x1B4268u;
label_1b4268:
    // 0x1b4268: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b426c:
    // 0x1b426c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b426cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4270:
    // 0x1b4270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4274:
    // 0x1b4274: 0x0  nop
    ctx->pc = 0x1b4274u;
    // NOP
label_1b4278:
    // 0x1b4278: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b427c:
    // 0x1b427c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b4280:
    // 0x1b4280: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4284:
    // 0x1b4284: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b4288:
    // 0x1b4288: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4288u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b428c:
    // 0x1b428c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b428cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4290:
    // 0x1b4290: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4294:
    // 0x1b4294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4298:
    // 0x1b4298: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b429c:
    if (ctx->pc == 0x1B429Cu) {
        ctx->pc = 0x1B429Cu;
            // 0x1b429c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B42A0u;
        goto label_1b42a0;
    }
    ctx->pc = 0x1B4298u;
    {
        const bool branch_taken_0x1b4298 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4298u;
            // 0x1b429c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4298) {
            ctx->pc = 0x1B42B8u;
            goto label_1b42b8;
        }
    }
    ctx->pc = 0x1B42A0u;
label_1b42a0:
    // 0x1b42a0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b42a4:
    // 0x1b42a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b42a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b42a8:
    // 0x1b42a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b42a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b42ac:
    // 0x1b42ac: 0x0  nop
    ctx->pc = 0x1b42acu;
    // NOP
label_1b42b0:
    // 0x1b42b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b42b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b42b4:
    // 0x1b42b4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b42b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b42b8:
    // 0x1b42b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b42bc:
    // 0x1b42bc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b42c0:
    // 0x1b42c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b42c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b42c4:
    // 0x1b42c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b42c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b42c8:
    // 0x1b42c8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b42c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b42cc:
    // 0x1b42cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b42ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b42d0:
    // 0x1b42d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b42d4:
    if (ctx->pc == 0x1B42D4u) {
        ctx->pc = 0x1B42D4u;
            // 0x1b42d4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B42D8u;
        goto label_1b42d8;
    }
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42D0u;
            // 0x1b42d4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42F0u;
            goto label_1b42f0;
        }
    }
    ctx->pc = 0x1B42D8u;
label_1b42d8:
    // 0x1b42d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b42dc:
    // 0x1b42dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b42dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b42e0:
    // 0x1b42e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b42e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b42e4:
    // 0x1b42e4: 0x0  nop
    ctx->pc = 0x1b42e4u;
    // NOP
label_1b42e8:
    // 0x1b42e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b42e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b42ec:
    // 0x1b42ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b42ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b42f0:
    // 0x1b42f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b42f4:
    // 0x1b42f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b42f8:
    // 0x1b42f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b42f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b42fc:
    // 0x1b42fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b42fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4300:
    // 0x1b4300: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4304:
    // 0x1b4304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4308:
    // 0x1b4308: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b430c:
    if (ctx->pc == 0x1B430Cu) {
        ctx->pc = 0x1B430Cu;
            // 0x1b430c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B4310u;
        goto label_1b4310;
    }
    ctx->pc = 0x1B4308u;
    {
        const bool branch_taken_0x1b4308 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4308u;
            // 0x1b430c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4308) {
            ctx->pc = 0x1B4328u;
            goto label_1b4328;
        }
    }
    ctx->pc = 0x1B4310u;
label_1b4310:
    // 0x1b4310: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b4310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b4314:
    // 0x1b4314: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4314u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b4318:
    // 0x1b4318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b431c:
    // 0x1b431c: 0x0  nop
    ctx->pc = 0x1b431cu;
    // NOP
label_1b4320:
    // 0x1b4320: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b4324:
    // 0x1b4324: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b4328:
    // 0x1b4328: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b432c:
    // 0x1b432c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1b4330:
    // 0x1b4330: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b4330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4334:
    // 0x1b4334: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b4338:
    // 0x1b4338: 0xc06d2a0  jal         func_1B4A80
label_1b433c:
    if (ctx->pc == 0x1B433Cu) {
        ctx->pc = 0x1B433Cu;
            // 0x1b433c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1B4340u;
        goto label_1b4340;
    }
    ctx->pc = 0x1B4338u;
    SET_GPR_U32(ctx, 31, 0x1B4340u);
    ctx->pc = 0x1B433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4338u;
            // 0x1b433c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A80u;
    if (runtime->hasFunction(0x1B4A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4340u; }
        if (ctx->pc != 0x1B4340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1b4a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4340u; }
        if (ctx->pc != 0x1B4340u) { return; }
    }
    ctx->pc = 0x1B4340u;
label_1b4340:
    // 0x1b4340: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b4340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b4344:
    // 0x1b4344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b4344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b4348:
    // 0x1b4348: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b4348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1b434c:
    // 0x1b434c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b4350:
    // 0x1b4350: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b4350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1b4354:
    // 0x1b4354: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b4358:
    // 0x1b4358: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
label_1b435c:
    if (ctx->pc == 0x1B435Cu) {
        ctx->pc = 0x1B435Cu;
            // 0x1b435c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B4360u;
        goto label_1b4360;
    }
    ctx->pc = 0x1B4358u;
    {
        const bool branch_taken_0x1b4358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4358u;
            // 0x1b435c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4358) {
            ctx->pc = 0x1B4498u;
            goto label_1b4498;
        }
    }
    ctx->pc = 0x1B4360u;
label_1b4360:
    // 0x1b4360: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
label_1b4364:
    if (ctx->pc == 0x1B4364u) {
        ctx->pc = 0x1B4368u;
        goto label_1b4368;
    }
    ctx->pc = 0x1B4360u;
    {
        const bool branch_taken_0x1b4360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4360) {
            ctx->pc = 0x1B4498u;
            goto label_1b4498;
        }
    }
    ctx->pc = 0x1B4368u;
label_1b4368:
    // 0x1b4368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b436c:
    // 0x1b436c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1b4370:
    if (ctx->pc == 0x1B4370u) {
        ctx->pc = 0x1B4374u;
        goto label_1b4374;
    }
    ctx->pc = 0x1B436Cu;
    {
        const bool branch_taken_0x1b436c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b436c) {
            ctx->pc = 0x1B4388u;
            goto label_1b4388;
        }
    }
    ctx->pc = 0x1B4374u;
label_1b4374:
    // 0x1b4374: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b4378:
    if (ctx->pc == 0x1B4378u) {
        ctx->pc = 0x1B437Cu;
        goto label_1b437c;
    }
    ctx->pc = 0x1B4374u;
    {
        const bool branch_taken_0x1b4374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4374) {
            ctx->pc = 0x1B4388u;
            goto label_1b4388;
        }
    }
    ctx->pc = 0x1B437Cu;
label_1b437c:
    // 0x1b437c: 0x10000120  b           . + 4 + (0x120 << 2)
label_1b4380:
    if (ctx->pc == 0x1B4380u) {
        ctx->pc = 0x1B4384u;
        goto label_1b4384;
    }
    ctx->pc = 0x1B437Cu;
    {
        const bool branch_taken_0x1b437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b437c) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4384u;
label_1b4384:
    // 0x1b4384: 0x0  nop
    ctx->pc = 0x1b4384u;
    // NOP
label_1b4388:
    // 0x1b4388: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1b438c:
    if (ctx->pc == 0x1B438Cu) {
        ctx->pc = 0x1B4390u;
        goto label_1b4390;
    }
    ctx->pc = 0x1B4388u;
    {
        const bool branch_taken_0x1b4388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4388) {
            ctx->pc = 0x1B43B0u;
            goto label_1b43b0;
        }
    }
    ctx->pc = 0x1B4390u;
label_1b4390:
    // 0x1b4390: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b4390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4394:
    // 0x1b4394: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b4398:
    // 0x1b4398: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b4398u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b439c:
    // 0x1b439c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b439cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b43a0:
    // 0x1b43a0: 0x0  nop
    ctx->pc = 0x1b43a0u;
    // NOP
label_1b43a4:
    // 0x1b43a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b43a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b43a8:
    // 0x1b43a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b43ac:
    if (ctx->pc == 0x1B43ACu) {
        ctx->pc = 0x1B43ACu;
            // 0x1b43ac: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x1B43B0u;
        goto label_1b43b0;
    }
    ctx->pc = 0x1B43A8u;
    {
        const bool branch_taken_0x1b43a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43A8u;
            // 0x1b43ac: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43a8) {
            ctx->pc = 0x1B43D0u;
            goto label_1b43d0;
        }
    }
    ctx->pc = 0x1B43B0u;
label_1b43b0:
    // 0x1b43b0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b43b4:
    // 0x1b43b4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b43b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b43b8:
    // 0x1b43b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b43b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b43bc:
    // 0x1b43bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b43bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b43c0:
    // 0x1b43c0: 0x0  nop
    ctx->pc = 0x1b43c0u;
    // NOP
label_1b43c4:
    // 0x1b43c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b43c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b43c8:
    // 0x1b43c8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b43c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b43cc:
    // 0x1b43cc: 0x0  nop
    ctx->pc = 0x1b43ccu;
    // NOP
label_1b43d0:
    // 0x1b43d0: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
label_1b43d4:
    // 0x1b43d4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b43d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b43d8:
    // 0x1b43d8: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x1b43d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
label_1b43dc:
    // 0x1b43dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b43dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b43e0:
    // 0x1b43e0: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1b43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1b43e4:
    // 0x1b43e4: 0x344347ae  ori         $v1, $v0, 0x47AE
    ctx->pc = 0x1b43e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1b43e8:
    // 0x1b43e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b43e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b43ec:
    // 0x1b43ec: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b43f0:
    // 0x1b43f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b43f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b43f4:
    // 0x1b43f4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b43f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b43f8:
    // 0x1b43f8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b43f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b43fc:
    // 0x1b43fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b43fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4400:
    // 0x1b4400: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b4404:
    // 0x1b4404: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b4404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b4408:
    // 0x1b4408: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1b440c:
    if (ctx->pc == 0x1B440Cu) {
        ctx->pc = 0x1B440Cu;
            // 0x1b440c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1B4410u;
        goto label_1b4410;
    }
    ctx->pc = 0x1B4408u;
    {
        const bool branch_taken_0x1b4408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4408u;
            // 0x1b440c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4408) {
            ctx->pc = 0x1B4470u;
            goto label_1b4470;
        }
    }
    ctx->pc = 0x1B4410u;
label_1b4410:
    // 0x1b4410: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1b4414:
    if (ctx->pc == 0x1B4414u) {
        ctx->pc = 0x1B4418u;
        goto label_1b4418;
    }
    ctx->pc = 0x1B4410u;
    {
        const bool branch_taken_0x1b4410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4410) {
            ctx->pc = 0x1B4448u;
            goto label_1b4448;
        }
    }
    ctx->pc = 0x1B4418u;
label_1b4418:
    // 0x1b4418: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b4418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b441c:
    // 0x1b441c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1b4420:
    if (ctx->pc == 0x1B4420u) {
        ctx->pc = 0x1B4424u;
        goto label_1b4424;
    }
    ctx->pc = 0x1B441Cu;
    {
        const bool branch_taken_0x1b441c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b441c) {
            ctx->pc = 0x1B4430u;
            goto label_1b4430;
        }
    }
    ctx->pc = 0x1B4424u;
label_1b4424:
    // 0x1b4424: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1b4428:
    if (ctx->pc == 0x1B4428u) {
        ctx->pc = 0x1B442Cu;
        goto label_1b442c;
    }
    ctx->pc = 0x1B4424u;
    {
        const bool branch_taken_0x1b4424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4424) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B442Cu;
label_1b442c:
    // 0x1b442c: 0x0  nop
    ctx->pc = 0x1b442cu;
    // NOP
label_1b4430:
    // 0x1b4430: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b4434:
    // 0x1b4434: 0xc06560c  jal         func_195830
label_1b4438:
    if (ctx->pc == 0x1B4438u) {
        ctx->pc = 0x1B4438u;
            // 0x1b4438: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B443Cu;
        goto label_1b443c;
    }
    ctx->pc = 0x1B4434u;
    SET_GPR_U32(ctx, 31, 0x1B443Cu);
    ctx->pc = 0x1B4438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4434u;
            // 0x1b4438: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B443Cu; }
        if (ctx->pc != 0x1B443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B443Cu; }
        if (ctx->pc != 0x1B443Cu) { return; }
    }
    ctx->pc = 0x1B443Cu;
label_1b443c:
    // 0x1b443c: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1b4440:
    if (ctx->pc == 0x1B4440u) {
        ctx->pc = 0x1B4444u;
        goto label_1b4444;
    }
    ctx->pc = 0x1B443Cu;
    {
        const bool branch_taken_0x1b443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b443c) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4444u;
label_1b4444:
    // 0x1b4444: 0x0  nop
    ctx->pc = 0x1b4444u;
    // NOP
label_1b4448:
    // 0x1b4448: 0xc065d00  jal         func_197400
label_1b444c:
    if (ctx->pc == 0x1B444Cu) {
        ctx->pc = 0x1B4450u;
        goto label_1b4450;
    }
    ctx->pc = 0x1B4448u;
    SET_GPR_U32(ctx, 31, 0x1B4450u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4450u; }
        if (ctx->pc != 0x1B4450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4450u; }
        if (ctx->pc != 0x1B4450u) { return; }
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x184000eb  blez        $v0, . + 4 + (0xEB << 2)
label_1b4454:
    if (ctx->pc == 0x1B4454u) {
        ctx->pc = 0x1B4458u;
        goto label_1b4458;
    }
    ctx->pc = 0x1B4450u;
    {
        const bool branch_taken_0x1b4450 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b4450) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4458u;
label_1b4458:
    // 0x1b4458: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b4458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b445c:
    // 0x1b445c: 0xc06560c  jal         func_195830
label_1b4460:
    if (ctx->pc == 0x1B4460u) {
        ctx->pc = 0x1B4460u;
            // 0x1b4460: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B4464u;
        goto label_1b4464;
    }
    ctx->pc = 0x1B445Cu;
    SET_GPR_U32(ctx, 31, 0x1B4464u);
    ctx->pc = 0x1B4460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B445Cu;
            // 0x1b4460: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4464u; }
        if (ctx->pc != 0x1B4464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4464u; }
        if (ctx->pc != 0x1B4464u) { return; }
    }
    ctx->pc = 0x1B4464u;
label_1b4464:
    // 0x1b4464: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_1b4468:
    if (ctx->pc == 0x1B4468u) {
        ctx->pc = 0x1B446Cu;
        goto label_1b446c;
    }
    ctx->pc = 0x1B4464u;
    {
        const bool branch_taken_0x1b4464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4464) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B446Cu;
label_1b446c:
    // 0x1b446c: 0x0  nop
    ctx->pc = 0x1b446cu;
    // NOP
label_1b4470:
    // 0x1b4470: 0xc065d00  jal         func_197400
label_1b4474:
    if (ctx->pc == 0x1B4474u) {
        ctx->pc = 0x1B4478u;
        goto label_1b4478;
    }
    ctx->pc = 0x1B4470u;
    SET_GPR_U32(ctx, 31, 0x1B4478u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4478u; }
        if (ctx->pc != 0x1B4478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4478u; }
        if (ctx->pc != 0x1B4478u) { return; }
    }
    ctx->pc = 0x1B4478u;
label_1b4478:
    // 0x1b4478: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1b4478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b447c:
    // 0x1b447c: 0x142000e0  bnez        $at, . + 4 + (0xE0 << 2)
label_1b4480:
    if (ctx->pc == 0x1B4480u) {
        ctx->pc = 0x1B4484u;
        goto label_1b4484;
    }
    ctx->pc = 0x1B447Cu;
    {
        const bool branch_taken_0x1b447c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b447c) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4484u;
label_1b4484:
    // 0x1b4484: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b4488:
    // 0x1b4488: 0xc06560c  jal         func_195830
label_1b448c:
    if (ctx->pc == 0x1B448Cu) {
        ctx->pc = 0x1B448Cu;
            // 0x1b448c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B4490u;
        goto label_1b4490;
    }
    ctx->pc = 0x1B4488u;
    SET_GPR_U32(ctx, 31, 0x1B4490u);
    ctx->pc = 0x1B448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4488u;
            // 0x1b448c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4490u; }
        if (ctx->pc != 0x1B4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4490u; }
        if (ctx->pc != 0x1B4490u) { return; }
    }
    ctx->pc = 0x1B4490u;
label_1b4490:
    // 0x1b4490: 0x100000db  b           . + 4 + (0xDB << 2)
label_1b4494:
    if (ctx->pc == 0x1B4494u) {
        ctx->pc = 0x1B4498u;
        goto label_1b4498;
    }
    ctx->pc = 0x1B4490u;
    {
        const bool branch_taken_0x1b4490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4490) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4498u;
label_1b4498:
    // 0x1b4498: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1b449c:
    // 0x1b449c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1b449cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1b44a0:
    // 0x1b44a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b44a4:
    // 0x1b44a4: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1b44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b44a8:
    // 0x1b44a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b44ac:
    // 0x1b44ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b44acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1b44b0:
    // 0x1b44b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b44b4:
    // 0x1b44b4: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1b44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1b44b8:
    // 0x1b44b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b44b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b44bc:
    // 0x1b44bc: 0x0  nop
    ctx->pc = 0x1b44bcu;
    // NOP
label_1b44c0:
    // 0x1b44c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b44c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b44c4:
    // 0x1b44c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b44c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b44c8:
    // 0x1b44c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b44cc:
    // 0x1b44cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b44d0:
    // 0x1b44d0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1b44d4:
    // 0x1b44d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b44d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b44d8:
    // 0x1b44d8: 0x0  nop
    ctx->pc = 0x1b44d8u;
    // NOP
label_1b44dc:
    // 0x1b44dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b44dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b44e0:
    // 0x1b44e0: 0xc04b6ee  jal         func_12DBB8
label_1b44e4:
    if (ctx->pc == 0x1B44E4u) {
        ctx->pc = 0x1B44E4u;
            // 0x1b44e4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1B44E8u;
        goto label_1b44e8;
    }
    ctx->pc = 0x1B44E0u;
    SET_GPR_U32(ctx, 31, 0x1B44E8u);
    ctx->pc = 0x1B44E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44E0u;
            // 0x1b44e4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44E8u; }
        if (ctx->pc != 0x1B44E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44E8u; }
        if (ctx->pc != 0x1B44E8u) { return; }
    }
    ctx->pc = 0x1B44E8u;
label_1b44e8:
    // 0x1b44e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b44ec:
    // 0x1b44ec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b44f0:
    // 0x1b44f0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b44f4:
    // 0x1b44f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b44f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b44f8:
    // 0x1b44f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b44f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b44fc:
    // 0x1b44fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b4500:
    if (ctx->pc == 0x1B4500u) {
        ctx->pc = 0x1B4500u;
            // 0x1b4500: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1B4504u;
        goto label_1b4504;
    }
    ctx->pc = 0x1B44FCu;
    {
        const bool branch_taken_0x1b44fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44FCu;
            // 0x1b4500: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44fc) {
            ctx->pc = 0x1B4510u;
            goto label_1b4510;
        }
    }
    ctx->pc = 0x1B4504u;
label_1b4504:
    // 0x1b4504: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b4504u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b4508:
    // 0x1b4508: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b4508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b450c:
    // 0x1b450c: 0x0  nop
    ctx->pc = 0x1b450cu;
    // NOP
label_1b4510:
    // 0x1b4510: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4514:
    // 0x1b4514: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b4514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4518:
    // 0x1b4518: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b4518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b451c:
    // 0x1b451c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b451cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b4520:
    // 0x1b4520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4524:
    // 0x1b4524: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b4528:
    if (ctx->pc == 0x1B4528u) {
        ctx->pc = 0x1B4528u;
            // 0x1b4528: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1B452Cu;
        goto label_1b452c;
    }
    ctx->pc = 0x1B4524u;
    {
        const bool branch_taken_0x1b4524 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4524u;
            // 0x1b4528: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4524) {
            ctx->pc = 0x1B4538u;
            goto label_1b4538;
        }
    }
    ctx->pc = 0x1B452Cu;
label_1b452c:
    // 0x1b452c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b452cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b4530:
    // 0x1b4530: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1b4530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1b4534:
    // 0x1b4534: 0x0  nop
    ctx->pc = 0x1b4534u;
    // NOP
label_1b4538:
    // 0x1b4538: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1b4538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b453c:
    // 0x1b453c: 0x14c0003a  bnez        $a2, . + 4 + (0x3A << 2)
label_1b4540:
    if (ctx->pc == 0x1B4540u) {
        ctx->pc = 0x1B4544u;
        goto label_1b4544;
    }
    ctx->pc = 0x1B453Cu;
    {
        const bool branch_taken_0x1b453c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b453c) {
            ctx->pc = 0x1B4628u;
            goto label_1b4628;
        }
    }
    ctx->pc = 0x1B4544u;
label_1b4544:
    // 0x1b4544: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b4544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4548:
    // 0x1b4548: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1b454c:
    // 0x1b454c: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1b454cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1b4550:
    // 0x1b4550: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b4550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4554:
    // 0x1b4554: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1b4558:
    // 0x1b4558: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1b4558u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1b455c:
    // 0x1b455c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b455cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4560:
    // 0x1b4560: 0x0  nop
    ctx->pc = 0x1b4560u;
    // NOP
label_1b4564:
    // 0x1b4564: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b4564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b4568:
    // 0x1b4568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b456c:
    // 0x1b456c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b456cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b4570:
    // 0x1b4570: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4574:
    // 0x1b4574: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4578:
    // 0x1b4578: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b4578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b457c:
    // 0x1b457c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4580:
    // 0x1b4580: 0xc4600110  lwc1        $f0, 0x110($v1)
    ctx->pc = 0x1b4580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4584:
    // 0x1b4584: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b4584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b4588:
    // 0x1b4588: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x1b4588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_1b458c:
    // 0x1b458c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b4590:
    // 0x1b4590: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1b4594:
    if (ctx->pc == 0x1B4594u) {
        ctx->pc = 0x1B4598u;
        goto label_1b4598;
    }
    ctx->pc = 0x1B4590u;
    {
        const bool branch_taken_0x1b4590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4590) {
            ctx->pc = 0x1B45E0u;
            goto label_1b45e0;
        }
    }
    ctx->pc = 0x1B4598u;
label_1b4598:
    // 0x1b4598: 0xc040d72  jal         func_1035C8
label_1b459c:
    if (ctx->pc == 0x1B459Cu) {
        ctx->pc = 0x1B459Cu;
            // 0x1b459c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B45A0u;
        goto label_1b45a0;
    }
    ctx->pc = 0x1B4598u;
    SET_GPR_U32(ctx, 31, 0x1B45A0u);
    ctx->pc = 0x1B459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4598u;
            // 0x1b459c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45A0u; }
        if (ctx->pc != 0x1B45A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45A0u; }
        if (ctx->pc != 0x1B45A0u) { return; }
    }
    ctx->pc = 0x1B45A0u;
label_1b45a0:
    // 0x1b45a0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1b45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
label_1b45a4:
    // 0x1b45a4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1b45a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1b45a8:
    // 0x1b45a8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b45a8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1b45ac:
    // 0x1b45ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b45b0:
    // 0x1b45b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b45b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b45b4:
    // 0x1b45b4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b45b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1b45b8:
    // 0x1b45b8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b45b8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b45bc:
    // 0x1b45bc: 0xc040098  jal         func_100260
label_1b45c0:
    if (ctx->pc == 0x1B45C0u) {
        ctx->pc = 0x1B45C0u;
            // 0x1b45c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B45C4u;
        goto label_1b45c4;
    }
    ctx->pc = 0x1B45BCu;
    SET_GPR_U32(ctx, 31, 0x1B45C4u);
    ctx->pc = 0x1B45C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45BCu;
            // 0x1b45c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45C4u; }
        if (ctx->pc != 0x1B45C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45C4u; }
        if (ctx->pc != 0x1B45C4u) { return; }
    }
    ctx->pc = 0x1B45C4u;
label_1b45c4:
    // 0x1b45c4: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_1b45c8:
    if (ctx->pc == 0x1B45C8u) {
        ctx->pc = 0x1B45CCu;
        goto label_1b45cc;
    }
    ctx->pc = 0x1B45C4u;
    {
        const bool branch_taken_0x1b45c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b45c4) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B45CCu;
label_1b45cc:
    // 0x1b45cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b45d0:
    // 0x1b45d0: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b45d4:
    // 0x1b45d4: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1b45d8:
    if (ctx->pc == 0x1B45D8u) {
        ctx->pc = 0x1B45D8u;
            // 0x1b45d8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B45DCu;
        goto label_1b45dc;
    }
    ctx->pc = 0x1B45D4u;
    {
        const bool branch_taken_0x1b45d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B45D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45D4u;
            // 0x1b45d8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45d4) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B45DCu;
label_1b45dc:
    // 0x1b45dc: 0x0  nop
    ctx->pc = 0x1b45dcu;
    // NOP
label_1b45e0:
    // 0x1b45e0: 0xc040d72  jal         func_1035C8
label_1b45e4:
    if (ctx->pc == 0x1B45E4u) {
        ctx->pc = 0x1B45E4u;
            // 0x1b45e4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B45E8u;
        goto label_1b45e8;
    }
    ctx->pc = 0x1B45E0u;
    SET_GPR_U32(ctx, 31, 0x1B45E8u);
    ctx->pc = 0x1B45E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45E0u;
            // 0x1b45e4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45E8u; }
        if (ctx->pc != 0x1B45E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45E8u; }
        if (ctx->pc != 0x1B45E8u) { return; }
    }
    ctx->pc = 0x1B45E8u;
label_1b45e8:
    // 0x1b45e8: 0x3c04bfb9  lui         $a0, 0xBFB9
    ctx->pc = 0x1b45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49081 << 16));
label_1b45ec:
    // 0x1b45ec: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1b45ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1b45f0:
    // 0x1b45f0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b45f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1b45f4:
    // 0x1b45f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b45f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b45f8:
    // 0x1b45f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b45f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b45fc:
    // 0x1b45fc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b45fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1b4600:
    // 0x1b4600: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b4600u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1b4604:
    // 0x1b4604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4608:
    // 0x1b4608: 0xc040084  jal         func_100210
label_1b460c:
    if (ctx->pc == 0x1B460Cu) {
        ctx->pc = 0x1B460Cu;
            // 0x1b460c: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B4610u;
        goto label_1b4610;
    }
    ctx->pc = 0x1B4608u;
    SET_GPR_U32(ctx, 31, 0x1B4610u);
    ctx->pc = 0x1B460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4608u;
            // 0x1b460c: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4610u; }
        if (ctx->pc != 0x1B4610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4610u; }
        if (ctx->pc != 0x1B4610u) { return; }
    }
    ctx->pc = 0x1B4610u;
label_1b4610:
    // 0x1b4610: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_1b4614:
    if (ctx->pc == 0x1B4614u) {
        ctx->pc = 0x1B4618u;
        goto label_1b4618;
    }
    ctx->pc = 0x1B4610u;
    {
        const bool branch_taken_0x1b4610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4610) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4618u;
label_1b4618:
    // 0x1b4618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b461c:
    // 0x1b461c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b461cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b4620:
    // 0x1b4620: 0x10000077  b           . + 4 + (0x77 << 2)
label_1b4624:
    if (ctx->pc == 0x1B4624u) {
        ctx->pc = 0x1B4624u;
            // 0x1b4624: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B4628u;
        goto label_1b4628;
    }
    ctx->pc = 0x1B4620u;
    {
        const bool branch_taken_0x1b4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4620u;
            // 0x1b4624: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4620) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4628u;
label_1b4628:
    // 0x1b4628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b462c:
    // 0x1b462c: 0x14c20052  bne         $a2, $v0, . + 4 + (0x52 << 2)
label_1b4630:
    if (ctx->pc == 0x1B4630u) {
        ctx->pc = 0x1B4634u;
        goto label_1b4634;
    }
    ctx->pc = 0x1B462Cu;
    {
        const bool branch_taken_0x1b462c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b462c) {
            ctx->pc = 0x1B4778u;
            goto label_1b4778;
        }
    }
    ctx->pc = 0x1B4634u;
label_1b4634:
    // 0x1b4634: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1b4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4638:
    // 0x1b4638: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1b4638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
label_1b463c:
    // 0x1b463c: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1b463cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b4640:
    // 0x1b4640: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1b4640u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1b4644:
    // 0x1b4644: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b4644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b4648:
    // 0x1b4648: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b464c:
    // 0x1b464c: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1b464cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1b4650:
    // 0x1b4650: 0xc040d72  jal         func_1035C8
label_1b4654:
    if (ctx->pc == 0x1B4654u) {
        ctx->pc = 0x1B4654u;
            // 0x1b4654: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B4658u;
        goto label_1b4658;
    }
    ctx->pc = 0x1B4650u;
    SET_GPR_U32(ctx, 31, 0x1B4658u);
    ctx->pc = 0x1B4654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4650u;
            // 0x1b4654: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4658u; }
        if (ctx->pc != 0x1B4658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4658u; }
        if (ctx->pc != 0x1B4658u) { return; }
    }
    ctx->pc = 0x1B4658u;
label_1b4658:
    // 0x1b4658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b465c:
    // 0x1b465c: 0xc040880  jal         func_102200
label_1b4660:
    if (ctx->pc == 0x1B4660u) {
        ctx->pc = 0x1B4660u;
            // 0x1b4660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4664u;
        goto label_1b4664;
    }
    ctx->pc = 0x1B465Cu;
    SET_GPR_U32(ctx, 31, 0x1B4664u);
    ctx->pc = 0x1B4660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B465Cu;
            // 0x1b4660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4664u; }
        if (ctx->pc != 0x1B4664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4664u; }
        if (ctx->pc != 0x1B4664u) { return; }
    }
    ctx->pc = 0x1B4664u;
label_1b4664:
    // 0x1b4664: 0xc040a74  jal         func_1029D0
label_1b4668:
    if (ctx->pc == 0x1B4668u) {
        ctx->pc = 0x1B4668u;
            // 0x1b4668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B466Cu;
        goto label_1b466c;
    }
    ctx->pc = 0x1B4664u;
    SET_GPR_U32(ctx, 31, 0x1B466Cu);
    ctx->pc = 0x1B4668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4664u;
            // 0x1b4668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B466Cu; }
        if (ctx->pc != 0x1B466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B466Cu; }
        if (ctx->pc != 0x1B466Cu) { return; }
    }
    ctx->pc = 0x1B466Cu;
label_1b466c:
    // 0x1b466c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4670:
    // 0x1b4670: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b4670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4674:
    // 0x1b4674: 0x0  nop
    ctx->pc = 0x1b4674u;
    // NOP
label_1b4678:
    // 0x1b4678: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b4678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b467c:
    // 0x1b467c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b4680:
    // 0x1b4680: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1b4680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4684:
    // 0x1b4684: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1b4684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4688:
    // 0x1b4688: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1b468c:
    if (ctx->pc == 0x1B468Cu) {
        ctx->pc = 0x1B468Cu;
            // 0x1b468c: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->pc = 0x1B4690u;
        goto label_1b4690;
    }
    ctx->pc = 0x1B4688u;
    {
        const bool branch_taken_0x1b4688 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4688u;
            // 0x1b468c: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4688) {
            ctx->pc = 0x1B46D0u;
            goto label_1b46d0;
        }
    }
    ctx->pc = 0x1B4690u;
label_1b4690:
    // 0x1b4690: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1b4690u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1b4694:
    // 0x1b4694: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1b4694u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1b4698:
    // 0x1b4698: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b4698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b469c:
    // 0x1b469c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b469cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b46a0:
    // 0x1b46a0: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1b46a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1b46a4:
    // 0x1b46a4: 0xc040d72  jal         func_1035C8
label_1b46a8:
    if (ctx->pc == 0x1B46A8u) {
        ctx->pc = 0x1B46A8u;
            // 0x1b46a8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1B46ACu;
        goto label_1b46ac;
    }
    ctx->pc = 0x1B46A4u;
    SET_GPR_U32(ctx, 31, 0x1B46ACu);
    ctx->pc = 0x1B46A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46A4u;
            // 0x1b46a8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46ACu; }
        if (ctx->pc != 0x1B46ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46ACu; }
        if (ctx->pc != 0x1B46ACu) { return; }
    }
    ctx->pc = 0x1B46ACu;
label_1b46ac:
    // 0x1b46ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b46acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b46b0:
    // 0x1b46b0: 0xc040880  jal         func_102200
label_1b46b4:
    if (ctx->pc == 0x1B46B4u) {
        ctx->pc = 0x1B46B4u;
            // 0x1b46b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B46B8u;
        goto label_1b46b8;
    }
    ctx->pc = 0x1B46B0u;
    SET_GPR_U32(ctx, 31, 0x1B46B8u);
    ctx->pc = 0x1B46B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46B0u;
            // 0x1b46b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46B8u; }
        if (ctx->pc != 0x1B46B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46B8u; }
        if (ctx->pc != 0x1B46B8u) { return; }
    }
    ctx->pc = 0x1B46B8u;
label_1b46b8:
    // 0x1b46b8: 0xc040a74  jal         func_1029D0
label_1b46bc:
    if (ctx->pc == 0x1B46BCu) {
        ctx->pc = 0x1B46BCu;
            // 0x1b46bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B46C0u;
        goto label_1b46c0;
    }
    ctx->pc = 0x1B46B8u;
    SET_GPR_U32(ctx, 31, 0x1B46C0u);
    ctx->pc = 0x1B46BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46B8u;
            // 0x1b46bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46C0u; }
        if (ctx->pc != 0x1B46C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46C0u; }
        if (ctx->pc != 0x1B46C0u) { return; }
    }
    ctx->pc = 0x1B46C0u;
label_1b46c0:
    // 0x1b46c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b46c4:
    // 0x1b46c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b46c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b46c8:
    // 0x1b46c8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b46c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b46cc:
    // 0x1b46cc: 0x0  nop
    ctx->pc = 0x1b46ccu;
    // NOP
label_1b46d0:
    // 0x1b46d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b46d4:
    // 0x1b46d4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b46d8:
    // 0x1b46d8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b46dc:
    // 0x1b46dc: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1b46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b46e0:
    // 0x1b46e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b46e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b46e4:
    // 0x1b46e4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1b46e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1b46e8:
    // 0x1b46e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b46ec:
    // 0x1b46ec: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b46ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b46f0:
    // 0x1b46f0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b46f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b46f4:
    // 0x1b46f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b46f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b46f8:
    // 0x1b46f8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b46f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b46fc:
    // 0x1b46fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b4700:
    // 0x1b4700: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1b4704:
    if (ctx->pc == 0x1B4704u) {
        ctx->pc = 0x1B4704u;
            // 0x1b4704: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1B4708u;
        goto label_1b4708;
    }
    ctx->pc = 0x1B4700u;
    {
        const bool branch_taken_0x1b4700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4700u;
            // 0x1b4704: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4700) {
            ctx->pc = 0x1B4740u;
            goto label_1b4740;
        }
    }
    ctx->pc = 0x1B4708u;
label_1b4708:
    // 0x1b4708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b470c:
    if (ctx->pc == 0x1B470Cu) {
        ctx->pc = 0x1B4710u;
        goto label_1b4710;
    }
    ctx->pc = 0x1B4708u;
    {
        const bool branch_taken_0x1b4708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4708) {
            ctx->pc = 0x1B4718u;
            goto label_1b4718;
        }
    }
    ctx->pc = 0x1B4710u;
label_1b4710:
    // 0x1b4710: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b4714:
    if (ctx->pc == 0x1B4714u) {
        ctx->pc = 0x1B4718u;
        goto label_1b4718;
    }
    ctx->pc = 0x1B4710u;
    {
        const bool branch_taken_0x1b4710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4710) {
            ctx->pc = 0x1B4760u;
            goto label_1b4760;
        }
    }
    ctx->pc = 0x1B4718u;
label_1b4718:
    // 0x1b4718: 0xc065d00  jal         func_197400
label_1b471c:
    if (ctx->pc == 0x1B471Cu) {
        ctx->pc = 0x1B4720u;
        goto label_1b4720;
    }
    ctx->pc = 0x1B4718u;
    SET_GPR_U32(ctx, 31, 0x1B4720u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4720u; }
        if (ctx->pc != 0x1B4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4720u; }
        if (ctx->pc != 0x1B4720u) { return; }
    }
    ctx->pc = 0x1B4720u;
label_1b4720:
    // 0x1b4720: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1b4724:
    if (ctx->pc == 0x1B4724u) {
        ctx->pc = 0x1B4728u;
        goto label_1b4728;
    }
    ctx->pc = 0x1B4720u;
    {
        const bool branch_taken_0x1b4720 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b4720) {
            ctx->pc = 0x1B4760u;
            goto label_1b4760;
        }
    }
    ctx->pc = 0x1B4728u;
label_1b4728:
    // 0x1b4728: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b4728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b472c:
    // 0x1b472c: 0xc06560c  jal         func_195830
label_1b4730:
    if (ctx->pc == 0x1B4730u) {
        ctx->pc = 0x1B4730u;
            // 0x1b4730: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B4734u;
        goto label_1b4734;
    }
    ctx->pc = 0x1B472Cu;
    SET_GPR_U32(ctx, 31, 0x1B4734u);
    ctx->pc = 0x1B4730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B472Cu;
            // 0x1b4730: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4734u; }
        if (ctx->pc != 0x1B4734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4734u; }
        if (ctx->pc != 0x1B4734u) { return; }
    }
    ctx->pc = 0x1B4734u;
label_1b4734:
    // 0x1b4734: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b4738:
    if (ctx->pc == 0x1B4738u) {
        ctx->pc = 0x1B473Cu;
        goto label_1b473c;
    }
    ctx->pc = 0x1B4734u;
    {
        const bool branch_taken_0x1b4734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4734) {
            ctx->pc = 0x1B4760u;
            goto label_1b4760;
        }
    }
    ctx->pc = 0x1B473Cu;
label_1b473c:
    // 0x1b473c: 0x0  nop
    ctx->pc = 0x1b473cu;
    // NOP
label_1b4740:
    // 0x1b4740: 0xc065d00  jal         func_197400
label_1b4744:
    if (ctx->pc == 0x1B4744u) {
        ctx->pc = 0x1B4748u;
        goto label_1b4748;
    }
    ctx->pc = 0x1B4740u;
    SET_GPR_U32(ctx, 31, 0x1B4748u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4748u; }
        if (ctx->pc != 0x1B4748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4748u; }
        if (ctx->pc != 0x1B4748u) { return; }
    }
    ctx->pc = 0x1B4748u;
label_1b4748:
    // 0x1b4748: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1b4748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b474c:
    // 0x1b474c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1b4750:
    if (ctx->pc == 0x1B4750u) {
        ctx->pc = 0x1B4754u;
        goto label_1b4754;
    }
    ctx->pc = 0x1B474Cu;
    {
        const bool branch_taken_0x1b474c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b474c) {
            ctx->pc = 0x1B4760u;
            goto label_1b4760;
        }
    }
    ctx->pc = 0x1B4754u;
label_1b4754:
    // 0x1b4754: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1b4754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b4758:
    // 0x1b4758: 0xc06560c  jal         func_195830
label_1b475c:
    if (ctx->pc == 0x1B475Cu) {
        ctx->pc = 0x1B475Cu;
            // 0x1b475c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1B4760u;
        goto label_1b4760;
    }
    ctx->pc = 0x1B4758u;
    SET_GPR_U32(ctx, 31, 0x1B4760u);
    ctx->pc = 0x1B475Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4758u;
            // 0x1b475c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4760u; }
        if (ctx->pc != 0x1B4760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4760u; }
        if (ctx->pc != 0x1B4760u) { return; }
    }
    ctx->pc = 0x1B4760u;
label_1b4760:
    // 0x1b4760: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b4760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b4764:
    // 0x1b4764: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1b4764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_1b4768:
    // 0x1b4768: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_1b476c:
    if (ctx->pc == 0x1B476Cu) {
        ctx->pc = 0x1B476Cu;
            // 0x1b476c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B4770u;
        goto label_1b4770;
    }
    ctx->pc = 0x1B4768u;
    {
        const bool branch_taken_0x1b4768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4768u;
            // 0x1b476c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4768) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4770u;
label_1b4770:
    // 0x1b4770: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b4774:
    if (ctx->pc == 0x1B4774u) {
        ctx->pc = 0x1B4774u;
            // 0x1b4774: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B4778u;
        goto label_1b4778;
    }
    ctx->pc = 0x1B4770u;
    {
        const bool branch_taken_0x1b4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4770u;
            // 0x1b4774: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4770) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4778u;
label_1b4778:
    // 0x1b4778: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b477c:
    // 0x1b477c: 0x14c30020  bne         $a2, $v1, . + 4 + (0x20 << 2)
label_1b4780:
    if (ctx->pc == 0x1B4780u) {
        ctx->pc = 0x1B4784u;
        goto label_1b4784;
    }
    ctx->pc = 0x1B477Cu;
    {
        const bool branch_taken_0x1b477c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b477c) {
            ctx->pc = 0x1B4800u;
            goto label_1b4800;
        }
    }
    ctx->pc = 0x1B4784u;
label_1b4784:
    // 0x1b4784: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b4788:
    // 0x1b4788: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1b478c:
    if (ctx->pc == 0x1B478Cu) {
        ctx->pc = 0x1B4790u;
        goto label_1b4790;
    }
    ctx->pc = 0x1B4788u;
    {
        const bool branch_taken_0x1b4788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b4788) {
            ctx->pc = 0x1B47B0u;
            goto label_1b47b0;
        }
    }
    ctx->pc = 0x1B4790u;
label_1b4790:
    // 0x1b4790: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b4790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4794:
    // 0x1b4794: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b4794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b4798:
    // 0x1b4798: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b4798u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b479c:
    // 0x1b479c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b479cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b47a0:
    // 0x1b47a0: 0x0  nop
    ctx->pc = 0x1b47a0u;
    // NOP
label_1b47a4:
    // 0x1b47a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b47a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b47a8:
    // 0x1b47a8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b47a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b47ac:
    // 0x1b47ac: 0x0  nop
    ctx->pc = 0x1b47acu;
    // NOP
label_1b47b0:
    // 0x1b47b0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b47b4:
    // 0x1b47b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b47b8:
    // 0x1b47b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1b47bc:
    if (ctx->pc == 0x1B47BCu) {
        ctx->pc = 0x1B47C0u;
        goto label_1b47c0;
    }
    ctx->pc = 0x1B47B8u;
    {
        const bool branch_taken_0x1b47b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b47b8) {
            ctx->pc = 0x1B47E0u;
            goto label_1b47e0;
        }
    }
    ctx->pc = 0x1B47C0u;
label_1b47c0:
    // 0x1b47c0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b47c4:
    // 0x1b47c4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b47c8:
    // 0x1b47c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b47c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b47cc:
    // 0x1b47cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b47ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b47d0:
    // 0x1b47d0: 0x0  nop
    ctx->pc = 0x1b47d0u;
    // NOP
label_1b47d4:
    // 0x1b47d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b47d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b47d8:
    // 0x1b47d8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b47d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b47dc:
    // 0x1b47dc: 0x0  nop
    ctx->pc = 0x1b47dcu;
    // NOP
label_1b47e0:
    // 0x1b47e0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b47e4:
    // 0x1b47e4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b47e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b47e8:
    // 0x1b47e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b47e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b47ec:
    // 0x1b47ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b47ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b47f0:
    // 0x1b47f0: 0x0  nop
    ctx->pc = 0x1b47f0u;
    // NOP
label_1b47f4:
    // 0x1b47f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b47f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b47f8:
    // 0x1b47f8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b47f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b47fc:
    // 0x1b47fc: 0x0  nop
    ctx->pc = 0x1b47fcu;
    // NOP
label_1b4800:
    // 0x1b4800: 0xc04b788  jal         func_12DE20
label_1b4804:
    if (ctx->pc == 0x1B4804u) {
        ctx->pc = 0x1B4804u;
            // 0x1b4804: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B4808u;
        goto label_1b4808;
    }
    ctx->pc = 0x1B4800u;
    SET_GPR_U32(ctx, 31, 0x1B4808u);
    ctx->pc = 0x1B4804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4800u;
            // 0x1b4804: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4808u; }
        if (ctx->pc != 0x1B4808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4808u; }
        if (ctx->pc != 0x1B4808u) { return; }
    }
    ctx->pc = 0x1B4808u;
label_1b4808:
    // 0x1b4808: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b480c:
    // 0x1b480c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4810:
    // 0x1b4810: 0xc04b7da  jal         func_12DF68
label_1b4814:
    if (ctx->pc == 0x1B4814u) {
        ctx->pc = 0x1B4814u;
            // 0x1b4814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4818u;
        goto label_1b4818;
    }
    ctx->pc = 0x1B4810u;
    SET_GPR_U32(ctx, 31, 0x1B4818u);
    ctx->pc = 0x1B4814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4810u;
            // 0x1b4814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4818u; }
        if (ctx->pc != 0x1B4818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4818u; }
        if (ctx->pc != 0x1B4818u) { return; }
    }
    ctx->pc = 0x1B4818u;
label_1b4818:
    // 0x1b4818: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b481c:
    // 0x1b481c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4820:
    // 0x1b4820: 0xc04b804  jal         func_12E010
label_1b4824:
    if (ctx->pc == 0x1B4824u) {
        ctx->pc = 0x1B4824u;
            // 0x1b4824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4828u;
        goto label_1b4828;
    }
    ctx->pc = 0x1B4820u;
    SET_GPR_U32(ctx, 31, 0x1B4828u);
    ctx->pc = 0x1B4824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4820u;
            // 0x1b4824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4828u; }
        if (ctx->pc != 0x1B4828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4828u; }
        if (ctx->pc != 0x1B4828u) { return; }
    }
    ctx->pc = 0x1B4828u;
label_1b4828:
    // 0x1b4828: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b482c:
    // 0x1b482c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4830:
    // 0x1b4830: 0xc04b7b0  jal         func_12DEC0
label_1b4834:
    if (ctx->pc == 0x1B4834u) {
        ctx->pc = 0x1B4834u;
            // 0x1b4834: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4838u;
        goto label_1b4838;
    }
    ctx->pc = 0x1B4830u;
    SET_GPR_U32(ctx, 31, 0x1B4838u);
    ctx->pc = 0x1B4834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4830u;
            // 0x1b4834: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4838u; }
        if (ctx->pc != 0x1B4838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4838u; }
        if (ctx->pc != 0x1B4838u) { return; }
    }
    ctx->pc = 0x1B4838u;
label_1b4838:
    // 0x1b4838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b483c:
    // 0x1b483c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4840:
    // 0x1b4840: 0xc04b75e  jal         func_12DD78
label_1b4844:
    if (ctx->pc == 0x1B4844u) {
        ctx->pc = 0x1B4844u;
            // 0x1b4844: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1B4848u;
        goto label_1b4848;
    }
    ctx->pc = 0x1B4840u;
    SET_GPR_U32(ctx, 31, 0x1B4848u);
    ctx->pc = 0x1B4844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4840u;
            // 0x1b4844: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4848u; }
        if (ctx->pc != 0x1B4848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4848u; }
        if (ctx->pc != 0x1B4848u) { return; }
    }
    ctx->pc = 0x1B4848u;
label_1b4848:
    // 0x1b4848: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b484c:
    // 0x1b484c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b4850:
    // 0x1b4850: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b4850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b4854:
    // 0x1b4854: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1b4858:
    if (ctx->pc == 0x1B4858u) {
        ctx->pc = 0x1B485Cu;
        goto label_1b485c;
    }
    ctx->pc = 0x1B4854u;
    {
        const bool branch_taken_0x1b4854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4854) {
            ctx->pc = 0x1B48A8u;
            goto label_1b48a8;
        }
    }
    ctx->pc = 0x1B485Cu;
label_1b485c:
    // 0x1b485c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b4860:
    // 0x1b4860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b4864:
    if (ctx->pc == 0x1B4864u) {
        ctx->pc = 0x1B4868u;
        goto label_1b4868;
    }
    ctx->pc = 0x1B4860u;
    {
        const bool branch_taken_0x1b4860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4860) {
            ctx->pc = 0x1B4878u;
            goto label_1b4878;
        }
    }
    ctx->pc = 0x1B4868u;
label_1b4868:
    // 0x1b4868: 0xc0604f0  jal         func_1813C0
label_1b486c:
    if (ctx->pc == 0x1B486Cu) {
        ctx->pc = 0x1B486Cu;
            // 0x1b486c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B4870u;
        goto label_1b4870;
    }
    ctx->pc = 0x1B4868u;
    SET_GPR_U32(ctx, 31, 0x1B4870u);
    ctx->pc = 0x1B486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4868u;
            // 0x1b486c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4870u; }
        if (ctx->pc != 0x1B4870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4870u; }
        if (ctx->pc != 0x1B4870u) { return; }
    }
    ctx->pc = 0x1B4870u;
label_1b4870:
    // 0x1b4870: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b4874:
    if (ctx->pc == 0x1B4874u) {
        ctx->pc = 0x1B4878u;
        goto label_1b4878;
    }
    ctx->pc = 0x1B4870u;
    {
        const bool branch_taken_0x1b4870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4870) {
            ctx->pc = 0x1B4880u;
            goto label_1b4880;
        }
    }
    ctx->pc = 0x1B4878u;
label_1b4878:
    // 0x1b4878: 0xc0604dc  jal         func_181370
label_1b487c:
    if (ctx->pc == 0x1B487Cu) {
        ctx->pc = 0x1B487Cu;
            // 0x1b487c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B4880u;
        goto label_1b4880;
    }
    ctx->pc = 0x1B4878u;
    SET_GPR_U32(ctx, 31, 0x1B4880u);
    ctx->pc = 0x1B487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4878u;
            // 0x1b487c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4880u; }
        if (ctx->pc != 0x1B4880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4880u; }
        if (ctx->pc != 0x1B4880u) { return; }
    }
    ctx->pc = 0x1B4880u;
label_1b4880:
    // 0x1b4880: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b4884:
    // 0x1b4884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b4888:
    if (ctx->pc == 0x1B4888u) {
        ctx->pc = 0x1B488Cu;
        goto label_1b488c;
    }
    ctx->pc = 0x1B4884u;
    {
        const bool branch_taken_0x1b4884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4884) {
            ctx->pc = 0x1B4898u;
            goto label_1b4898;
        }
    }
    ctx->pc = 0x1B488Cu;
label_1b488c:
    // 0x1b488c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b4890:
    if (ctx->pc == 0x1B4890u) {
        ctx->pc = 0x1B4890u;
            // 0x1b4890: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1B4894u;
        goto label_1b4894;
    }
    ctx->pc = 0x1B488Cu;
    {
        const bool branch_taken_0x1b488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B488Cu;
            // 0x1b4890: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b488c) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B4894u;
label_1b4894:
    // 0x1b4894: 0x0  nop
    ctx->pc = 0x1b4894u;
    // NOP
label_1b4898:
    // 0x1b4898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b489c:
    // 0x1b489c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b48a0:
    if (ctx->pc == 0x1B48A0u) {
        ctx->pc = 0x1B48A0u;
            // 0x1b48a0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1B48A4u;
        goto label_1b48a4;
    }
    ctx->pc = 0x1B489Cu;
    {
        const bool branch_taken_0x1b489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B489Cu;
            // 0x1b48a0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b489c) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B48A4u;
label_1b48a4:
    // 0x1b48a4: 0x0  nop
    ctx->pc = 0x1b48a4u;
    // NOP
label_1b48a8:
    // 0x1b48a8: 0xc0604dc  jal         func_181370
label_1b48ac:
    if (ctx->pc == 0x1B48ACu) {
        ctx->pc = 0x1B48ACu;
            // 0x1b48ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B48B0u;
        goto label_1b48b0;
    }
    ctx->pc = 0x1B48A8u;
    SET_GPR_U32(ctx, 31, 0x1B48B0u);
    ctx->pc = 0x1B48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48A8u;
            // 0x1b48ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48B0u; }
        if (ctx->pc != 0x1B48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48B0u; }
        if (ctx->pc != 0x1B48B0u) { return; }
    }
    ctx->pc = 0x1B48B0u;
label_1b48b0:
    // 0x1b48b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b48b4:
    // 0x1b48b4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1b48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1b48b8:
    // 0x1b48b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b48bc:
    // 0x1b48bc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1b48c0:
    // 0x1b48c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b48c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b48c4:
    // 0x1b48c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1b48c8:
    // 0x1b48c8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b48cc:
    // 0x1b48cc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1b48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1b48d0:
    // 0x1b48d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b48d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b48d4:
    // 0x1b48d4: 0x0  nop
    ctx->pc = 0x1b48d4u;
    // NOP
label_1b48d8:
    // 0x1b48d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b48d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b48dc:
    // 0x1b48dc: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1b48dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1b48e0:
    // 0x1b48e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b48e4:
    // 0x1b48e4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1b48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1b48e8:
    // 0x1b48e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b48e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b48ec:
    // 0x1b48ec: 0x0  nop
    ctx->pc = 0x1b48ecu;
    // NOP
label_1b48f0:
    // 0x1b48f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b48f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b48f4:
    // 0x1b48f4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1b48f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1b48f8:
    // 0x1b48f8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b48fc:
    // 0x1b48fc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1b4900:
    // 0x1b4900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b4900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4904:
    // 0x1b4904: 0x0  nop
    ctx->pc = 0x1b4904u;
    // NOP
label_1b4908:
    // 0x1b4908: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b490c:
    // 0x1b490c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1b490cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1b4910:
    // 0x1b4910: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b4914:
    // 0x1b4914: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1b4918:
    // 0x1b4918: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b4918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b491c:
    // 0x1b491c: 0x0  nop
    ctx->pc = 0x1b491cu;
    // NOP
label_1b4920:
    // 0x1b4920: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b4924:
    // 0x1b4924: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1b4924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1b4928:
    // 0x1b4928: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b492c:
    // 0x1b492c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b4930:
    // 0x1b4930: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b4930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1b4934:
    // 0x1b4934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4938:
    // 0x1b4938: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b493c:
    // 0x1b493c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b493cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4940:
    // 0x1b4940: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b4944:
    if (ctx->pc == 0x1B4944u) {
        ctx->pc = 0x1B4944u;
            // 0x1b4944: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->pc = 0x1B4948u;
        goto label_1b4948;
    }
    ctx->pc = 0x1B4940u;
    {
        const bool branch_taken_0x1b4940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4940u;
            // 0x1b4944: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4940) {
            ctx->pc = 0x1B4960u;
            goto label_1b4960;
        }
    }
    ctx->pc = 0x1B4948u;
label_1b4948:
    // 0x1b4948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b494c:
    // 0x1b494c: 0x0  nop
    ctx->pc = 0x1b494cu;
    // NOP
label_1b4950:
    // 0x1b4950: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4954:
    // 0x1b4954: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b4958:
    if (ctx->pc == 0x1B4958u) {
        ctx->pc = 0x1B495Cu;
        goto label_1b495c;
    }
    ctx->pc = 0x1B4954u;
    {
        const bool branch_taken_0x1b4954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4954) {
            ctx->pc = 0x1B4978u;
            goto label_1b4978;
        }
    }
    ctx->pc = 0x1B495Cu;
label_1b495c:
    // 0x1b495c: 0x0  nop
    ctx->pc = 0x1b495cu;
    // NOP
label_1b4960:
    // 0x1b4960: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b4964:
    // 0x1b4964: 0x40f809  jalr        $v0
label_1b4968:
    if (ctx->pc == 0x1B4968u) {
        ctx->pc = 0x1B4968u;
            // 0x1b4968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B496Cu;
        goto label_1b496c;
    }
    ctx->pc = 0x1B4964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B496Cu);
        ctx->pc = 0x1B4968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4964u;
            // 0x1b4968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4160u: goto label_1b4160;
            case 0x1B4164u: goto label_1b4164;
            case 0x1B4168u: goto label_1b4168;
            case 0x1B416Cu: goto label_1b416c;
            case 0x1B4170u: goto label_1b4170;
            case 0x1B4174u: goto label_1b4174;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B417Cu: goto label_1b417c;
            case 0x1B4180u: goto label_1b4180;
            case 0x1B4184u: goto label_1b4184;
            case 0x1B4188u: goto label_1b4188;
            case 0x1B418Cu: goto label_1b418c;
            case 0x1B4190u: goto label_1b4190;
            case 0x1B4194u: goto label_1b4194;
            case 0x1B4198u: goto label_1b4198;
            case 0x1B419Cu: goto label_1b419c;
            case 0x1B41A0u: goto label_1b41a0;
            case 0x1B41A4u: goto label_1b41a4;
            case 0x1B41A8u: goto label_1b41a8;
            case 0x1B41ACu: goto label_1b41ac;
            case 0x1B41B0u: goto label_1b41b0;
            case 0x1B41B4u: goto label_1b41b4;
            case 0x1B41B8u: goto label_1b41b8;
            case 0x1B41BCu: goto label_1b41bc;
            case 0x1B41C0u: goto label_1b41c0;
            case 0x1B41C4u: goto label_1b41c4;
            case 0x1B41C8u: goto label_1b41c8;
            case 0x1B41CCu: goto label_1b41cc;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41D4u: goto label_1b41d4;
            case 0x1B41D8u: goto label_1b41d8;
            case 0x1B41DCu: goto label_1b41dc;
            case 0x1B41E0u: goto label_1b41e0;
            case 0x1B41E4u: goto label_1b41e4;
            case 0x1B41E8u: goto label_1b41e8;
            case 0x1B41ECu: goto label_1b41ec;
            case 0x1B41F0u: goto label_1b41f0;
            case 0x1B41F4u: goto label_1b41f4;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B41FCu: goto label_1b41fc;
            case 0x1B4200u: goto label_1b4200;
            case 0x1B4204u: goto label_1b4204;
            case 0x1B4208u: goto label_1b4208;
            case 0x1B420Cu: goto label_1b420c;
            case 0x1B4210u: goto label_1b4210;
            case 0x1B4214u: goto label_1b4214;
            case 0x1B4218u: goto label_1b4218;
            case 0x1B421Cu: goto label_1b421c;
            case 0x1B4220u: goto label_1b4220;
            case 0x1B4224u: goto label_1b4224;
            case 0x1B4228u: goto label_1b4228;
            case 0x1B422Cu: goto label_1b422c;
            case 0x1B4230u: goto label_1b4230;
            case 0x1B4234u: goto label_1b4234;
            case 0x1B4238u: goto label_1b4238;
            case 0x1B423Cu: goto label_1b423c;
            case 0x1B4240u: goto label_1b4240;
            case 0x1B4244u: goto label_1b4244;
            case 0x1B4248u: goto label_1b4248;
            case 0x1B424Cu: goto label_1b424c;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4254u: goto label_1b4254;
            case 0x1B4258u: goto label_1b4258;
            case 0x1B425Cu: goto label_1b425c;
            case 0x1B4260u: goto label_1b4260;
            case 0x1B4264u: goto label_1b4264;
            case 0x1B4268u: goto label_1b4268;
            case 0x1B426Cu: goto label_1b426c;
            case 0x1B4270u: goto label_1b4270;
            case 0x1B4274u: goto label_1b4274;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B427Cu: goto label_1b427c;
            case 0x1B4280u: goto label_1b4280;
            case 0x1B4284u: goto label_1b4284;
            case 0x1B4288u: goto label_1b4288;
            case 0x1B428Cu: goto label_1b428c;
            case 0x1B4290u: goto label_1b4290;
            case 0x1B4294u: goto label_1b4294;
            case 0x1B4298u: goto label_1b4298;
            case 0x1B429Cu: goto label_1b429c;
            case 0x1B42A0u: goto label_1b42a0;
            case 0x1B42A4u: goto label_1b42a4;
            case 0x1B42A8u: goto label_1b42a8;
            case 0x1B42ACu: goto label_1b42ac;
            case 0x1B42B0u: goto label_1b42b0;
            case 0x1B42B4u: goto label_1b42b4;
            case 0x1B42B8u: goto label_1b42b8;
            case 0x1B42BCu: goto label_1b42bc;
            case 0x1B42C0u: goto label_1b42c0;
            case 0x1B42C4u: goto label_1b42c4;
            case 0x1B42C8u: goto label_1b42c8;
            case 0x1B42CCu: goto label_1b42cc;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42D4u: goto label_1b42d4;
            case 0x1B42D8u: goto label_1b42d8;
            case 0x1B42DCu: goto label_1b42dc;
            case 0x1B42E0u: goto label_1b42e0;
            case 0x1B42E4u: goto label_1b42e4;
            case 0x1B42E8u: goto label_1b42e8;
            case 0x1B42ECu: goto label_1b42ec;
            case 0x1B42F0u: goto label_1b42f0;
            case 0x1B42F4u: goto label_1b42f4;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B42FCu: goto label_1b42fc;
            case 0x1B4300u: goto label_1b4300;
            case 0x1B4304u: goto label_1b4304;
            case 0x1B4308u: goto label_1b4308;
            case 0x1B430Cu: goto label_1b430c;
            case 0x1B4310u: goto label_1b4310;
            case 0x1B4314u: goto label_1b4314;
            case 0x1B4318u: goto label_1b4318;
            case 0x1B431Cu: goto label_1b431c;
            case 0x1B4320u: goto label_1b4320;
            case 0x1B4324u: goto label_1b4324;
            case 0x1B4328u: goto label_1b4328;
            case 0x1B432Cu: goto label_1b432c;
            case 0x1B4330u: goto label_1b4330;
            case 0x1B4334u: goto label_1b4334;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B433Cu: goto label_1b433c;
            case 0x1B4340u: goto label_1b4340;
            case 0x1B4344u: goto label_1b4344;
            case 0x1B4348u: goto label_1b4348;
            case 0x1B434Cu: goto label_1b434c;
            case 0x1B4350u: goto label_1b4350;
            case 0x1B4354u: goto label_1b4354;
            case 0x1B4358u: goto label_1b4358;
            case 0x1B435Cu: goto label_1b435c;
            case 0x1B4360u: goto label_1b4360;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4368u: goto label_1b4368;
            case 0x1B436Cu: goto label_1b436c;
            case 0x1B4370u: goto label_1b4370;
            case 0x1B4374u: goto label_1b4374;
            case 0x1B4378u: goto label_1b4378;
            case 0x1B437Cu: goto label_1b437c;
            case 0x1B4380u: goto label_1b4380;
            case 0x1B4384u: goto label_1b4384;
            case 0x1B4388u: goto label_1b4388;
            case 0x1B438Cu: goto label_1b438c;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4394u: goto label_1b4394;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B439Cu: goto label_1b439c;
            case 0x1B43A0u: goto label_1b43a0;
            case 0x1B43A4u: goto label_1b43a4;
            case 0x1B43A8u: goto label_1b43a8;
            case 0x1B43ACu: goto label_1b43ac;
            case 0x1B43B0u: goto label_1b43b0;
            case 0x1B43B4u: goto label_1b43b4;
            case 0x1B43B8u: goto label_1b43b8;
            case 0x1B43BCu: goto label_1b43bc;
            case 0x1B43C0u: goto label_1b43c0;
            case 0x1B43C4u: goto label_1b43c4;
            case 0x1B43C8u: goto label_1b43c8;
            case 0x1B43CCu: goto label_1b43cc;
            case 0x1B43D0u: goto label_1b43d0;
            case 0x1B43D4u: goto label_1b43d4;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43DCu: goto label_1b43dc;
            case 0x1B43E0u: goto label_1b43e0;
            case 0x1B43E4u: goto label_1b43e4;
            case 0x1B43E8u: goto label_1b43e8;
            case 0x1B43ECu: goto label_1b43ec;
            case 0x1B43F0u: goto label_1b43f0;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B43F8u: goto label_1b43f8;
            case 0x1B43FCu: goto label_1b43fc;
            case 0x1B4400u: goto label_1b4400;
            case 0x1B4404u: goto label_1b4404;
            case 0x1B4408u: goto label_1b4408;
            case 0x1B440Cu: goto label_1b440c;
            case 0x1B4410u: goto label_1b4410;
            case 0x1B4414u: goto label_1b4414;
            case 0x1B4418u: goto label_1b4418;
            case 0x1B441Cu: goto label_1b441c;
            case 0x1B4420u: goto label_1b4420;
            case 0x1B4424u: goto label_1b4424;
            case 0x1B4428u: goto label_1b4428;
            case 0x1B442Cu: goto label_1b442c;
            case 0x1B4430u: goto label_1b4430;
            case 0x1B4434u: goto label_1b4434;
            case 0x1B4438u: goto label_1b4438;
            case 0x1B443Cu: goto label_1b443c;
            case 0x1B4440u: goto label_1b4440;
            case 0x1B4444u: goto label_1b4444;
            case 0x1B4448u: goto label_1b4448;
            case 0x1B444Cu: goto label_1b444c;
            case 0x1B4450u: goto label_1b4450;
            case 0x1B4454u: goto label_1b4454;
            case 0x1B4458u: goto label_1b4458;
            case 0x1B445Cu: goto label_1b445c;
            case 0x1B4460u: goto label_1b4460;
            case 0x1B4464u: goto label_1b4464;
            case 0x1B4468u: goto label_1b4468;
            case 0x1B446Cu: goto label_1b446c;
            case 0x1B4470u: goto label_1b4470;
            case 0x1B4474u: goto label_1b4474;
            case 0x1B4478u: goto label_1b4478;
            case 0x1B447Cu: goto label_1b447c;
            case 0x1B4480u: goto label_1b4480;
            case 0x1B4484u: goto label_1b4484;
            case 0x1B4488u: goto label_1b4488;
            case 0x1B448Cu: goto label_1b448c;
            case 0x1B4490u: goto label_1b4490;
            case 0x1B4494u: goto label_1b4494;
            case 0x1B4498u: goto label_1b4498;
            case 0x1B449Cu: goto label_1b449c;
            case 0x1B44A0u: goto label_1b44a0;
            case 0x1B44A4u: goto label_1b44a4;
            case 0x1B44A8u: goto label_1b44a8;
            case 0x1B44ACu: goto label_1b44ac;
            case 0x1B44B0u: goto label_1b44b0;
            case 0x1B44B4u: goto label_1b44b4;
            case 0x1B44B8u: goto label_1b44b8;
            case 0x1B44BCu: goto label_1b44bc;
            case 0x1B44C0u: goto label_1b44c0;
            case 0x1B44C4u: goto label_1b44c4;
            case 0x1B44C8u: goto label_1b44c8;
            case 0x1B44CCu: goto label_1b44cc;
            case 0x1B44D0u: goto label_1b44d0;
            case 0x1B44D4u: goto label_1b44d4;
            case 0x1B44D8u: goto label_1b44d8;
            case 0x1B44DCu: goto label_1b44dc;
            case 0x1B44E0u: goto label_1b44e0;
            case 0x1B44E4u: goto label_1b44e4;
            case 0x1B44E8u: goto label_1b44e8;
            case 0x1B44ECu: goto label_1b44ec;
            case 0x1B44F0u: goto label_1b44f0;
            case 0x1B44F4u: goto label_1b44f4;
            case 0x1B44F8u: goto label_1b44f8;
            case 0x1B44FCu: goto label_1b44fc;
            case 0x1B4500u: goto label_1b4500;
            case 0x1B4504u: goto label_1b4504;
            case 0x1B4508u: goto label_1b4508;
            case 0x1B450Cu: goto label_1b450c;
            case 0x1B4510u: goto label_1b4510;
            case 0x1B4514u: goto label_1b4514;
            case 0x1B4518u: goto label_1b4518;
            case 0x1B451Cu: goto label_1b451c;
            case 0x1B4520u: goto label_1b4520;
            case 0x1B4524u: goto label_1b4524;
            case 0x1B4528u: goto label_1b4528;
            case 0x1B452Cu: goto label_1b452c;
            case 0x1B4530u: goto label_1b4530;
            case 0x1B4534u: goto label_1b4534;
            case 0x1B4538u: goto label_1b4538;
            case 0x1B453Cu: goto label_1b453c;
            case 0x1B4540u: goto label_1b4540;
            case 0x1B4544u: goto label_1b4544;
            case 0x1B4548u: goto label_1b4548;
            case 0x1B454Cu: goto label_1b454c;
            case 0x1B4550u: goto label_1b4550;
            case 0x1B4554u: goto label_1b4554;
            case 0x1B4558u: goto label_1b4558;
            case 0x1B455Cu: goto label_1b455c;
            case 0x1B4560u: goto label_1b4560;
            case 0x1B4564u: goto label_1b4564;
            case 0x1B4568u: goto label_1b4568;
            case 0x1B456Cu: goto label_1b456c;
            case 0x1B4570u: goto label_1b4570;
            case 0x1B4574u: goto label_1b4574;
            case 0x1B4578u: goto label_1b4578;
            case 0x1B457Cu: goto label_1b457c;
            case 0x1B4580u: goto label_1b4580;
            case 0x1B4584u: goto label_1b4584;
            case 0x1B4588u: goto label_1b4588;
            case 0x1B458Cu: goto label_1b458c;
            case 0x1B4590u: goto label_1b4590;
            case 0x1B4594u: goto label_1b4594;
            case 0x1B4598u: goto label_1b4598;
            case 0x1B459Cu: goto label_1b459c;
            case 0x1B45A0u: goto label_1b45a0;
            case 0x1B45A4u: goto label_1b45a4;
            case 0x1B45A8u: goto label_1b45a8;
            case 0x1B45ACu: goto label_1b45ac;
            case 0x1B45B0u: goto label_1b45b0;
            case 0x1B45B4u: goto label_1b45b4;
            case 0x1B45B8u: goto label_1b45b8;
            case 0x1B45BCu: goto label_1b45bc;
            case 0x1B45C0u: goto label_1b45c0;
            case 0x1B45C4u: goto label_1b45c4;
            case 0x1B45C8u: goto label_1b45c8;
            case 0x1B45CCu: goto label_1b45cc;
            case 0x1B45D0u: goto label_1b45d0;
            case 0x1B45D4u: goto label_1b45d4;
            case 0x1B45D8u: goto label_1b45d8;
            case 0x1B45DCu: goto label_1b45dc;
            case 0x1B45E0u: goto label_1b45e0;
            case 0x1B45E4u: goto label_1b45e4;
            case 0x1B45E8u: goto label_1b45e8;
            case 0x1B45ECu: goto label_1b45ec;
            case 0x1B45F0u: goto label_1b45f0;
            case 0x1B45F4u: goto label_1b45f4;
            case 0x1B45F8u: goto label_1b45f8;
            case 0x1B45FCu: goto label_1b45fc;
            case 0x1B4600u: goto label_1b4600;
            case 0x1B4604u: goto label_1b4604;
            case 0x1B4608u: goto label_1b4608;
            case 0x1B460Cu: goto label_1b460c;
            case 0x1B4610u: goto label_1b4610;
            case 0x1B4614u: goto label_1b4614;
            case 0x1B4618u: goto label_1b4618;
            case 0x1B461Cu: goto label_1b461c;
            case 0x1B4620u: goto label_1b4620;
            case 0x1B4624u: goto label_1b4624;
            case 0x1B4628u: goto label_1b4628;
            case 0x1B462Cu: goto label_1b462c;
            case 0x1B4630u: goto label_1b4630;
            case 0x1B4634u: goto label_1b4634;
            case 0x1B4638u: goto label_1b4638;
            case 0x1B463Cu: goto label_1b463c;
            case 0x1B4640u: goto label_1b4640;
            case 0x1B4644u: goto label_1b4644;
            case 0x1B4648u: goto label_1b4648;
            case 0x1B464Cu: goto label_1b464c;
            case 0x1B4650u: goto label_1b4650;
            case 0x1B4654u: goto label_1b4654;
            case 0x1B4658u: goto label_1b4658;
            case 0x1B465Cu: goto label_1b465c;
            case 0x1B4660u: goto label_1b4660;
            case 0x1B4664u: goto label_1b4664;
            case 0x1B4668u: goto label_1b4668;
            case 0x1B466Cu: goto label_1b466c;
            case 0x1B4670u: goto label_1b4670;
            case 0x1B4674u: goto label_1b4674;
            case 0x1B4678u: goto label_1b4678;
            case 0x1B467Cu: goto label_1b467c;
            case 0x1B4680u: goto label_1b4680;
            case 0x1B4684u: goto label_1b4684;
            case 0x1B4688u: goto label_1b4688;
            case 0x1B468Cu: goto label_1b468c;
            case 0x1B4690u: goto label_1b4690;
            case 0x1B4694u: goto label_1b4694;
            case 0x1B4698u: goto label_1b4698;
            case 0x1B469Cu: goto label_1b469c;
            case 0x1B46A0u: goto label_1b46a0;
            case 0x1B46A4u: goto label_1b46a4;
            case 0x1B46A8u: goto label_1b46a8;
            case 0x1B46ACu: goto label_1b46ac;
            case 0x1B46B0u: goto label_1b46b0;
            case 0x1B46B4u: goto label_1b46b4;
            case 0x1B46B8u: goto label_1b46b8;
            case 0x1B46BCu: goto label_1b46bc;
            case 0x1B46C0u: goto label_1b46c0;
            case 0x1B46C4u: goto label_1b46c4;
            case 0x1B46C8u: goto label_1b46c8;
            case 0x1B46CCu: goto label_1b46cc;
            case 0x1B46D0u: goto label_1b46d0;
            case 0x1B46D4u: goto label_1b46d4;
            case 0x1B46D8u: goto label_1b46d8;
            case 0x1B46DCu: goto label_1b46dc;
            case 0x1B46E0u: goto label_1b46e0;
            case 0x1B46E4u: goto label_1b46e4;
            case 0x1B46E8u: goto label_1b46e8;
            case 0x1B46ECu: goto label_1b46ec;
            case 0x1B46F0u: goto label_1b46f0;
            case 0x1B46F4u: goto label_1b46f4;
            case 0x1B46F8u: goto label_1b46f8;
            case 0x1B46FCu: goto label_1b46fc;
            case 0x1B4700u: goto label_1b4700;
            case 0x1B4704u: goto label_1b4704;
            case 0x1B4708u: goto label_1b4708;
            case 0x1B470Cu: goto label_1b470c;
            case 0x1B4710u: goto label_1b4710;
            case 0x1B4714u: goto label_1b4714;
            case 0x1B4718u: goto label_1b4718;
            case 0x1B471Cu: goto label_1b471c;
            case 0x1B4720u: goto label_1b4720;
            case 0x1B4724u: goto label_1b4724;
            case 0x1B4728u: goto label_1b4728;
            case 0x1B472Cu: goto label_1b472c;
            case 0x1B4730u: goto label_1b4730;
            case 0x1B4734u: goto label_1b4734;
            case 0x1B4738u: goto label_1b4738;
            case 0x1B473Cu: goto label_1b473c;
            case 0x1B4740u: goto label_1b4740;
            case 0x1B4744u: goto label_1b4744;
            case 0x1B4748u: goto label_1b4748;
            case 0x1B474Cu: goto label_1b474c;
            case 0x1B4750u: goto label_1b4750;
            case 0x1B4754u: goto label_1b4754;
            case 0x1B4758u: goto label_1b4758;
            case 0x1B475Cu: goto label_1b475c;
            case 0x1B4760u: goto label_1b4760;
            case 0x1B4764u: goto label_1b4764;
            case 0x1B4768u: goto label_1b4768;
            case 0x1B476Cu: goto label_1b476c;
            case 0x1B4770u: goto label_1b4770;
            case 0x1B4774u: goto label_1b4774;
            case 0x1B4778u: goto label_1b4778;
            case 0x1B477Cu: goto label_1b477c;
            case 0x1B4780u: goto label_1b4780;
            case 0x1B4784u: goto label_1b4784;
            case 0x1B4788u: goto label_1b4788;
            case 0x1B478Cu: goto label_1b478c;
            case 0x1B4790u: goto label_1b4790;
            case 0x1B4794u: goto label_1b4794;
            case 0x1B4798u: goto label_1b4798;
            case 0x1B479Cu: goto label_1b479c;
            case 0x1B47A0u: goto label_1b47a0;
            case 0x1B47A4u: goto label_1b47a4;
            case 0x1B47A8u: goto label_1b47a8;
            case 0x1B47ACu: goto label_1b47ac;
            case 0x1B47B0u: goto label_1b47b0;
            case 0x1B47B4u: goto label_1b47b4;
            case 0x1B47B8u: goto label_1b47b8;
            case 0x1B47BCu: goto label_1b47bc;
            case 0x1B47C0u: goto label_1b47c0;
            case 0x1B47C4u: goto label_1b47c4;
            case 0x1B47C8u: goto label_1b47c8;
            case 0x1B47CCu: goto label_1b47cc;
            case 0x1B47D0u: goto label_1b47d0;
            case 0x1B47D4u: goto label_1b47d4;
            case 0x1B47D8u: goto label_1b47d8;
            case 0x1B47DCu: goto label_1b47dc;
            case 0x1B47E0u: goto label_1b47e0;
            case 0x1B47E4u: goto label_1b47e4;
            case 0x1B47E8u: goto label_1b47e8;
            case 0x1B47ECu: goto label_1b47ec;
            case 0x1B47F0u: goto label_1b47f0;
            case 0x1B47F4u: goto label_1b47f4;
            case 0x1B47F8u: goto label_1b47f8;
            case 0x1B47FCu: goto label_1b47fc;
            case 0x1B4800u: goto label_1b4800;
            case 0x1B4804u: goto label_1b4804;
            case 0x1B4808u: goto label_1b4808;
            case 0x1B480Cu: goto label_1b480c;
            case 0x1B4810u: goto label_1b4810;
            case 0x1B4814u: goto label_1b4814;
            case 0x1B4818u: goto label_1b4818;
            case 0x1B481Cu: goto label_1b481c;
            case 0x1B4820u: goto label_1b4820;
            case 0x1B4824u: goto label_1b4824;
            case 0x1B4828u: goto label_1b4828;
            case 0x1B482Cu: goto label_1b482c;
            case 0x1B4830u: goto label_1b4830;
            case 0x1B4834u: goto label_1b4834;
            case 0x1B4838u: goto label_1b4838;
            case 0x1B483Cu: goto label_1b483c;
            case 0x1B4840u: goto label_1b4840;
            case 0x1B4844u: goto label_1b4844;
            case 0x1B4848u: goto label_1b4848;
            case 0x1B484Cu: goto label_1b484c;
            case 0x1B4850u: goto label_1b4850;
            case 0x1B4854u: goto label_1b4854;
            case 0x1B4858u: goto label_1b4858;
            case 0x1B485Cu: goto label_1b485c;
            case 0x1B4860u: goto label_1b4860;
            case 0x1B4864u: goto label_1b4864;
            case 0x1B4868u: goto label_1b4868;
            case 0x1B486Cu: goto label_1b486c;
            case 0x1B4870u: goto label_1b4870;
            case 0x1B4874u: goto label_1b4874;
            case 0x1B4878u: goto label_1b4878;
            case 0x1B487Cu: goto label_1b487c;
            case 0x1B4880u: goto label_1b4880;
            case 0x1B4884u: goto label_1b4884;
            case 0x1B4888u: goto label_1b4888;
            case 0x1B488Cu: goto label_1b488c;
            case 0x1B4890u: goto label_1b4890;
            case 0x1B4894u: goto label_1b4894;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B489Cu: goto label_1b489c;
            case 0x1B48A0u: goto label_1b48a0;
            case 0x1B48A4u: goto label_1b48a4;
            case 0x1B48A8u: goto label_1b48a8;
            case 0x1B48ACu: goto label_1b48ac;
            case 0x1B48B0u: goto label_1b48b0;
            case 0x1B48B4u: goto label_1b48b4;
            case 0x1B48B8u: goto label_1b48b8;
            case 0x1B48BCu: goto label_1b48bc;
            case 0x1B48C0u: goto label_1b48c0;
            case 0x1B48C4u: goto label_1b48c4;
            case 0x1B48C8u: goto label_1b48c8;
            case 0x1B48CCu: goto label_1b48cc;
            case 0x1B48D0u: goto label_1b48d0;
            case 0x1B48D4u: goto label_1b48d4;
            case 0x1B48D8u: goto label_1b48d8;
            case 0x1B48DCu: goto label_1b48dc;
            case 0x1B48E0u: goto label_1b48e0;
            case 0x1B48E4u: goto label_1b48e4;
            case 0x1B48E8u: goto label_1b48e8;
            case 0x1B48ECu: goto label_1b48ec;
            case 0x1B48F0u: goto label_1b48f0;
            case 0x1B48F4u: goto label_1b48f4;
            case 0x1B48F8u: goto label_1b48f8;
            case 0x1B48FCu: goto label_1b48fc;
            case 0x1B4900u: goto label_1b4900;
            case 0x1B4904u: goto label_1b4904;
            case 0x1B4908u: goto label_1b4908;
            case 0x1B490Cu: goto label_1b490c;
            case 0x1B4910u: goto label_1b4910;
            case 0x1B4914u: goto label_1b4914;
            case 0x1B4918u: goto label_1b4918;
            case 0x1B491Cu: goto label_1b491c;
            case 0x1B4920u: goto label_1b4920;
            case 0x1B4924u: goto label_1b4924;
            case 0x1B4928u: goto label_1b4928;
            case 0x1B492Cu: goto label_1b492c;
            case 0x1B4930u: goto label_1b4930;
            case 0x1B4934u: goto label_1b4934;
            case 0x1B4938u: goto label_1b4938;
            case 0x1B493Cu: goto label_1b493c;
            case 0x1B4940u: goto label_1b4940;
            case 0x1B4944u: goto label_1b4944;
            case 0x1B4948u: goto label_1b4948;
            case 0x1B494Cu: goto label_1b494c;
            case 0x1B4950u: goto label_1b4950;
            case 0x1B4954u: goto label_1b4954;
            case 0x1B4958u: goto label_1b4958;
            case 0x1B495Cu: goto label_1b495c;
            case 0x1B4960u: goto label_1b4960;
            case 0x1B4964u: goto label_1b4964;
            case 0x1B4968u: goto label_1b4968;
            case 0x1B496Cu: goto label_1b496c;
            case 0x1B4970u: goto label_1b4970;
            case 0x1B4974u: goto label_1b4974;
            case 0x1B4978u: goto label_1b4978;
            case 0x1B497Cu: goto label_1b497c;
            case 0x1B4980u: goto label_1b4980;
            case 0x1B4984u: goto label_1b4984;
            case 0x1B4988u: goto label_1b4988;
            case 0x1B498Cu: goto label_1b498c;
            case 0x1B4990u: goto label_1b4990;
            case 0x1B4994u: goto label_1b4994;
            case 0x1B4998u: goto label_1b4998;
            case 0x1B499Cu: goto label_1b499c;
            case 0x1B49A0u: goto label_1b49a0;
            case 0x1B49A4u: goto label_1b49a4;
            case 0x1B49A8u: goto label_1b49a8;
            case 0x1B49ACu: goto label_1b49ac;
            case 0x1B49B0u: goto label_1b49b0;
            case 0x1B49B4u: goto label_1b49b4;
            case 0x1B49B8u: goto label_1b49b8;
            case 0x1B49BCu: goto label_1b49bc;
            case 0x1B49C0u: goto label_1b49c0;
            case 0x1B49C4u: goto label_1b49c4;
            case 0x1B49C8u: goto label_1b49c8;
            case 0x1B49CCu: goto label_1b49cc;
            case 0x1B49D0u: goto label_1b49d0;
            case 0x1B49D4u: goto label_1b49d4;
            case 0x1B49D8u: goto label_1b49d8;
            case 0x1B49DCu: goto label_1b49dc;
            case 0x1B49E0u: goto label_1b49e0;
            case 0x1B49E4u: goto label_1b49e4;
            case 0x1B49E8u: goto label_1b49e8;
            case 0x1B49ECu: goto label_1b49ec;
            case 0x1B49F0u: goto label_1b49f0;
            case 0x1B49F4u: goto label_1b49f4;
            case 0x1B49F8u: goto label_1b49f8;
            case 0x1B49FCu: goto label_1b49fc;
            case 0x1B4A00u: goto label_1b4a00;
            case 0x1B4A04u: goto label_1b4a04;
            case 0x1B4A08u: goto label_1b4a08;
            case 0x1B4A0Cu: goto label_1b4a0c;
            case 0x1B4A10u: goto label_1b4a10;
            case 0x1B4A14u: goto label_1b4a14;
            case 0x1B4A18u: goto label_1b4a18;
            case 0x1B4A1Cu: goto label_1b4a1c;
            case 0x1B4A20u: goto label_1b4a20;
            case 0x1B4A24u: goto label_1b4a24;
            case 0x1B4A28u: goto label_1b4a28;
            case 0x1B4A2Cu: goto label_1b4a2c;
            case 0x1B4A30u: goto label_1b4a30;
            case 0x1B4A34u: goto label_1b4a34;
            case 0x1B4A38u: goto label_1b4a38;
            case 0x1B4A3Cu: goto label_1b4a3c;
            case 0x1B4A40u: goto label_1b4a40;
            case 0x1B4A44u: goto label_1b4a44;
            case 0x1B4A48u: goto label_1b4a48;
            case 0x1B4A4Cu: goto label_1b4a4c;
            case 0x1B4A50u: goto label_1b4a50;
            case 0x1B4A54u: goto label_1b4a54;
            case 0x1B4A58u: goto label_1b4a58;
            case 0x1B4A5Cu: goto label_1b4a5c;
            case 0x1B4A60u: goto label_1b4a60;
            case 0x1B4A64u: goto label_1b4a64;
            case 0x1B4A68u: goto label_1b4a68;
            case 0x1B4A6Cu: goto label_1b4a6c;
            case 0x1B4A70u: goto label_1b4a70;
            case 0x1B4A74u: goto label_1b4a74;
            case 0x1B4A78u: goto label_1b4a78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B496Cu; }
            if (ctx->pc != 0x1B496Cu) { return; }
        }
    }
    ctx->pc = 0x1B496Cu;
label_1b496c:
    // 0x1b496c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b4970:
    if (ctx->pc == 0x1B4970u) {
        ctx->pc = 0x1B4974u;
        goto label_1b4974;
    }
    ctx->pc = 0x1B496Cu;
    {
        const bool branch_taken_0x1b496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b496c) {
            ctx->pc = 0x1B4A68u;
            goto label_1b4a68;
        }
    }
    ctx->pc = 0x1B4974u;
label_1b4974:
    // 0x1b4974: 0x0  nop
    ctx->pc = 0x1b4974u;
    // NOP
label_1b4978:
    // 0x1b4978: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b497c:
    // 0x1b497c: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1b4980:
    if (ctx->pc == 0x1B4980u) {
        ctx->pc = 0x1B4984u;
        goto label_1b4984;
    }
    ctx->pc = 0x1B497Cu;
    {
        const bool branch_taken_0x1b497c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b497c) {
            ctx->pc = 0x1B4A48u;
            goto label_1b4a48;
        }
    }
    ctx->pc = 0x1B4984u;
label_1b4984:
    // 0x1b4984: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4988:
    // 0x1b4988: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1b4988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1b498c:
    // 0x1b498c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4990:
    // 0x1b4990: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b4990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b4994:
    // 0x1b4994: 0xc05d080  jal         func_174200
label_1b4998:
    if (ctx->pc == 0x1B4998u) {
        ctx->pc = 0x1B4998u;
            // 0x1b4998: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B499Cu;
        goto label_1b499c;
    }
    ctx->pc = 0x1B4994u;
    SET_GPR_U32(ctx, 31, 0x1B499Cu);
    ctx->pc = 0x1B4998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4994u;
            // 0x1b4998: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B499Cu; }
        if (ctx->pc != 0x1B499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B499Cu; }
        if (ctx->pc != 0x1B499Cu) { return; }
    }
    ctx->pc = 0x1B499Cu;
label_1b499c:
    // 0x1b499c: 0xc050bb4  jal         func_142ED0
label_1b49a0:
    if (ctx->pc == 0x1B49A0u) {
        ctx->pc = 0x1B49A4u;
        goto label_1b49a4;
    }
    ctx->pc = 0x1B499Cu;
    SET_GPR_U32(ctx, 31, 0x1B49A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49A4u; }
        if (ctx->pc != 0x1B49A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49A4u; }
        if (ctx->pc != 0x1B49A4u) { return; }
    }
    ctx->pc = 0x1B49A4u;
label_1b49a4:
    // 0x1b49a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b49a4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b49a8:
    // 0x1b49a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b49ac:
    if (ctx->pc == 0x1B49ACu) {
        ctx->pc = 0x1B49B0u;
        goto label_1b49b0;
    }
    ctx->pc = 0x1B49A8u;
    {
        const bool branch_taken_0x1b49a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49a8) {
            ctx->pc = 0x1B49C8u;
            goto label_1b49c8;
        }
    }
    ctx->pc = 0x1B49B0u;
label_1b49b0:
    // 0x1b49b0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b49b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b49b4:
    // 0x1b49b4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1b49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1b49b8:
    // 0x1b49b8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b49b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b49bc:
    // 0x1b49bc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b49bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b49c0:
    // 0x1b49c0: 0xc05d080  jal         func_174200
label_1b49c4:
    if (ctx->pc == 0x1B49C4u) {
        ctx->pc = 0x1B49C4u;
            // 0x1b49c4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B49C8u;
        goto label_1b49c8;
    }
    ctx->pc = 0x1B49C0u;
    SET_GPR_U32(ctx, 31, 0x1B49C8u);
    ctx->pc = 0x1B49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49C0u;
            // 0x1b49c4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49C8u; }
        if (ctx->pc != 0x1B49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49C8u; }
        if (ctx->pc != 0x1B49C8u) { return; }
    }
    ctx->pc = 0x1B49C8u;
label_1b49c8:
    // 0x1b49c8: 0xc050bb4  jal         func_142ED0
label_1b49cc:
    if (ctx->pc == 0x1B49CCu) {
        ctx->pc = 0x1B49D0u;
        goto label_1b49d0;
    }
    ctx->pc = 0x1B49C8u;
    SET_GPR_U32(ctx, 31, 0x1B49D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49D0u; }
        if (ctx->pc != 0x1B49D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49D0u; }
        if (ctx->pc != 0x1B49D0u) { return; }
    }
    ctx->pc = 0x1B49D0u;
label_1b49d0:
    // 0x1b49d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b49d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b49d4:
    // 0x1b49d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b49d8:
    if (ctx->pc == 0x1B49D8u) {
        ctx->pc = 0x1B49DCu;
        goto label_1b49dc;
    }
    ctx->pc = 0x1B49D4u;
    {
        const bool branch_taken_0x1b49d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49d4) {
            ctx->pc = 0x1B49F8u;
            goto label_1b49f8;
        }
    }
    ctx->pc = 0x1B49DCu;
label_1b49dc:
    // 0x1b49dc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b49e0:
    // 0x1b49e0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1b49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1b49e4:
    // 0x1b49e4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b49e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b49e8:
    // 0x1b49e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b49e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b49ec:
    // 0x1b49ec: 0xc05d080  jal         func_174200
label_1b49f0:
    if (ctx->pc == 0x1B49F0u) {
        ctx->pc = 0x1B49F0u;
            // 0x1b49f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B49F4u;
        goto label_1b49f4;
    }
    ctx->pc = 0x1B49ECu;
    SET_GPR_U32(ctx, 31, 0x1B49F4u);
    ctx->pc = 0x1B49F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49ECu;
            // 0x1b49f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49F4u; }
        if (ctx->pc != 0x1B49F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49F4u; }
        if (ctx->pc != 0x1B49F4u) { return; }
    }
    ctx->pc = 0x1B49F4u;
label_1b49f4:
    // 0x1b49f4: 0x0  nop
    ctx->pc = 0x1b49f4u;
    // NOP
label_1b49f8:
    // 0x1b49f8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b49fc:
    // 0x1b49fc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b49fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4a00:
    // 0x1b4a00: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b4a04:
    // 0x1b4a04: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4a08:
    // 0x1b4a08: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b4a0c:
    // 0x1b4a0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4a10:
    // 0x1b4a10: 0x0  nop
    ctx->pc = 0x1b4a10u;
    // NOP
label_1b4a14:
    // 0x1b4a14: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1b4a14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1b4a18:
    // 0x1b4a18: 0xc053740  jal         func_14DD00
label_1b4a1c:
    if (ctx->pc == 0x1B4A1Cu) {
        ctx->pc = 0x1B4A1Cu;
            // 0x1b4a1c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1B4A20u;
        goto label_1b4a20;
    }
    ctx->pc = 0x1B4A18u;
    SET_GPR_U32(ctx, 31, 0x1B4A20u);
    ctx->pc = 0x1B4A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A18u;
            // 0x1b4a1c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A20u; }
        if (ctx->pc != 0x1B4A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A20u; }
        if (ctx->pc != 0x1B4A20u) { return; }
    }
    ctx->pc = 0x1B4A20u;
label_1b4a20:
    // 0x1b4a20: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1b4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b4a24:
    // 0x1b4a24: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1b4a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b4a28:
    // 0x1b4a28: 0xc07b0fc  jal         func_1EC3F0
label_1b4a2c:
    if (ctx->pc == 0x1B4A2Cu) {
        ctx->pc = 0x1B4A2Cu;
            // 0x1b4a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A30u;
        goto label_1b4a30;
    }
    ctx->pc = 0x1B4A28u;
    SET_GPR_U32(ctx, 31, 0x1B4A30u);
    ctx->pc = 0x1B4A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A28u;
            // 0x1b4a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A30u; }
        if (ctx->pc != 0x1B4A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A30u; }
        if (ctx->pc != 0x1B4A30u) { return; }
    }
    ctx->pc = 0x1B4A30u;
label_1b4a30:
    // 0x1b4a30: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b4a34:
    // 0x1b4a34: 0x40f809  jalr        $v0
label_1b4a38:
    if (ctx->pc == 0x1B4A38u) {
        ctx->pc = 0x1B4A38u;
            // 0x1b4a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A3Cu;
        goto label_1b4a3c;
    }
    ctx->pc = 0x1B4A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4A3Cu);
        ctx->pc = 0x1B4A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A34u;
            // 0x1b4a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4160u: goto label_1b4160;
            case 0x1B4164u: goto label_1b4164;
            case 0x1B4168u: goto label_1b4168;
            case 0x1B416Cu: goto label_1b416c;
            case 0x1B4170u: goto label_1b4170;
            case 0x1B4174u: goto label_1b4174;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B417Cu: goto label_1b417c;
            case 0x1B4180u: goto label_1b4180;
            case 0x1B4184u: goto label_1b4184;
            case 0x1B4188u: goto label_1b4188;
            case 0x1B418Cu: goto label_1b418c;
            case 0x1B4190u: goto label_1b4190;
            case 0x1B4194u: goto label_1b4194;
            case 0x1B4198u: goto label_1b4198;
            case 0x1B419Cu: goto label_1b419c;
            case 0x1B41A0u: goto label_1b41a0;
            case 0x1B41A4u: goto label_1b41a4;
            case 0x1B41A8u: goto label_1b41a8;
            case 0x1B41ACu: goto label_1b41ac;
            case 0x1B41B0u: goto label_1b41b0;
            case 0x1B41B4u: goto label_1b41b4;
            case 0x1B41B8u: goto label_1b41b8;
            case 0x1B41BCu: goto label_1b41bc;
            case 0x1B41C0u: goto label_1b41c0;
            case 0x1B41C4u: goto label_1b41c4;
            case 0x1B41C8u: goto label_1b41c8;
            case 0x1B41CCu: goto label_1b41cc;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41D4u: goto label_1b41d4;
            case 0x1B41D8u: goto label_1b41d8;
            case 0x1B41DCu: goto label_1b41dc;
            case 0x1B41E0u: goto label_1b41e0;
            case 0x1B41E4u: goto label_1b41e4;
            case 0x1B41E8u: goto label_1b41e8;
            case 0x1B41ECu: goto label_1b41ec;
            case 0x1B41F0u: goto label_1b41f0;
            case 0x1B41F4u: goto label_1b41f4;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B41FCu: goto label_1b41fc;
            case 0x1B4200u: goto label_1b4200;
            case 0x1B4204u: goto label_1b4204;
            case 0x1B4208u: goto label_1b4208;
            case 0x1B420Cu: goto label_1b420c;
            case 0x1B4210u: goto label_1b4210;
            case 0x1B4214u: goto label_1b4214;
            case 0x1B4218u: goto label_1b4218;
            case 0x1B421Cu: goto label_1b421c;
            case 0x1B4220u: goto label_1b4220;
            case 0x1B4224u: goto label_1b4224;
            case 0x1B4228u: goto label_1b4228;
            case 0x1B422Cu: goto label_1b422c;
            case 0x1B4230u: goto label_1b4230;
            case 0x1B4234u: goto label_1b4234;
            case 0x1B4238u: goto label_1b4238;
            case 0x1B423Cu: goto label_1b423c;
            case 0x1B4240u: goto label_1b4240;
            case 0x1B4244u: goto label_1b4244;
            case 0x1B4248u: goto label_1b4248;
            case 0x1B424Cu: goto label_1b424c;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4254u: goto label_1b4254;
            case 0x1B4258u: goto label_1b4258;
            case 0x1B425Cu: goto label_1b425c;
            case 0x1B4260u: goto label_1b4260;
            case 0x1B4264u: goto label_1b4264;
            case 0x1B4268u: goto label_1b4268;
            case 0x1B426Cu: goto label_1b426c;
            case 0x1B4270u: goto label_1b4270;
            case 0x1B4274u: goto label_1b4274;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B427Cu: goto label_1b427c;
            case 0x1B4280u: goto label_1b4280;
            case 0x1B4284u: goto label_1b4284;
            case 0x1B4288u: goto label_1b4288;
            case 0x1B428Cu: goto label_1b428c;
            case 0x1B4290u: goto label_1b4290;
            case 0x1B4294u: goto label_1b4294;
            case 0x1B4298u: goto label_1b4298;
            case 0x1B429Cu: goto label_1b429c;
            case 0x1B42A0u: goto label_1b42a0;
            case 0x1B42A4u: goto label_1b42a4;
            case 0x1B42A8u: goto label_1b42a8;
            case 0x1B42ACu: goto label_1b42ac;
            case 0x1B42B0u: goto label_1b42b0;
            case 0x1B42B4u: goto label_1b42b4;
            case 0x1B42B8u: goto label_1b42b8;
            case 0x1B42BCu: goto label_1b42bc;
            case 0x1B42C0u: goto label_1b42c0;
            case 0x1B42C4u: goto label_1b42c4;
            case 0x1B42C8u: goto label_1b42c8;
            case 0x1B42CCu: goto label_1b42cc;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42D4u: goto label_1b42d4;
            case 0x1B42D8u: goto label_1b42d8;
            case 0x1B42DCu: goto label_1b42dc;
            case 0x1B42E0u: goto label_1b42e0;
            case 0x1B42E4u: goto label_1b42e4;
            case 0x1B42E8u: goto label_1b42e8;
            case 0x1B42ECu: goto label_1b42ec;
            case 0x1B42F0u: goto label_1b42f0;
            case 0x1B42F4u: goto label_1b42f4;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B42FCu: goto label_1b42fc;
            case 0x1B4300u: goto label_1b4300;
            case 0x1B4304u: goto label_1b4304;
            case 0x1B4308u: goto label_1b4308;
            case 0x1B430Cu: goto label_1b430c;
            case 0x1B4310u: goto label_1b4310;
            case 0x1B4314u: goto label_1b4314;
            case 0x1B4318u: goto label_1b4318;
            case 0x1B431Cu: goto label_1b431c;
            case 0x1B4320u: goto label_1b4320;
            case 0x1B4324u: goto label_1b4324;
            case 0x1B4328u: goto label_1b4328;
            case 0x1B432Cu: goto label_1b432c;
            case 0x1B4330u: goto label_1b4330;
            case 0x1B4334u: goto label_1b4334;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B433Cu: goto label_1b433c;
            case 0x1B4340u: goto label_1b4340;
            case 0x1B4344u: goto label_1b4344;
            case 0x1B4348u: goto label_1b4348;
            case 0x1B434Cu: goto label_1b434c;
            case 0x1B4350u: goto label_1b4350;
            case 0x1B4354u: goto label_1b4354;
            case 0x1B4358u: goto label_1b4358;
            case 0x1B435Cu: goto label_1b435c;
            case 0x1B4360u: goto label_1b4360;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4368u: goto label_1b4368;
            case 0x1B436Cu: goto label_1b436c;
            case 0x1B4370u: goto label_1b4370;
            case 0x1B4374u: goto label_1b4374;
            case 0x1B4378u: goto label_1b4378;
            case 0x1B437Cu: goto label_1b437c;
            case 0x1B4380u: goto label_1b4380;
            case 0x1B4384u: goto label_1b4384;
            case 0x1B4388u: goto label_1b4388;
            case 0x1B438Cu: goto label_1b438c;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4394u: goto label_1b4394;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B439Cu: goto label_1b439c;
            case 0x1B43A0u: goto label_1b43a0;
            case 0x1B43A4u: goto label_1b43a4;
            case 0x1B43A8u: goto label_1b43a8;
            case 0x1B43ACu: goto label_1b43ac;
            case 0x1B43B0u: goto label_1b43b0;
            case 0x1B43B4u: goto label_1b43b4;
            case 0x1B43B8u: goto label_1b43b8;
            case 0x1B43BCu: goto label_1b43bc;
            case 0x1B43C0u: goto label_1b43c0;
            case 0x1B43C4u: goto label_1b43c4;
            case 0x1B43C8u: goto label_1b43c8;
            case 0x1B43CCu: goto label_1b43cc;
            case 0x1B43D0u: goto label_1b43d0;
            case 0x1B43D4u: goto label_1b43d4;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43DCu: goto label_1b43dc;
            case 0x1B43E0u: goto label_1b43e0;
            case 0x1B43E4u: goto label_1b43e4;
            case 0x1B43E8u: goto label_1b43e8;
            case 0x1B43ECu: goto label_1b43ec;
            case 0x1B43F0u: goto label_1b43f0;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B43F8u: goto label_1b43f8;
            case 0x1B43FCu: goto label_1b43fc;
            case 0x1B4400u: goto label_1b4400;
            case 0x1B4404u: goto label_1b4404;
            case 0x1B4408u: goto label_1b4408;
            case 0x1B440Cu: goto label_1b440c;
            case 0x1B4410u: goto label_1b4410;
            case 0x1B4414u: goto label_1b4414;
            case 0x1B4418u: goto label_1b4418;
            case 0x1B441Cu: goto label_1b441c;
            case 0x1B4420u: goto label_1b4420;
            case 0x1B4424u: goto label_1b4424;
            case 0x1B4428u: goto label_1b4428;
            case 0x1B442Cu: goto label_1b442c;
            case 0x1B4430u: goto label_1b4430;
            case 0x1B4434u: goto label_1b4434;
            case 0x1B4438u: goto label_1b4438;
            case 0x1B443Cu: goto label_1b443c;
            case 0x1B4440u: goto label_1b4440;
            case 0x1B4444u: goto label_1b4444;
            case 0x1B4448u: goto label_1b4448;
            case 0x1B444Cu: goto label_1b444c;
            case 0x1B4450u: goto label_1b4450;
            case 0x1B4454u: goto label_1b4454;
            case 0x1B4458u: goto label_1b4458;
            case 0x1B445Cu: goto label_1b445c;
            case 0x1B4460u: goto label_1b4460;
            case 0x1B4464u: goto label_1b4464;
            case 0x1B4468u: goto label_1b4468;
            case 0x1B446Cu: goto label_1b446c;
            case 0x1B4470u: goto label_1b4470;
            case 0x1B4474u: goto label_1b4474;
            case 0x1B4478u: goto label_1b4478;
            case 0x1B447Cu: goto label_1b447c;
            case 0x1B4480u: goto label_1b4480;
            case 0x1B4484u: goto label_1b4484;
            case 0x1B4488u: goto label_1b4488;
            case 0x1B448Cu: goto label_1b448c;
            case 0x1B4490u: goto label_1b4490;
            case 0x1B4494u: goto label_1b4494;
            case 0x1B4498u: goto label_1b4498;
            case 0x1B449Cu: goto label_1b449c;
            case 0x1B44A0u: goto label_1b44a0;
            case 0x1B44A4u: goto label_1b44a4;
            case 0x1B44A8u: goto label_1b44a8;
            case 0x1B44ACu: goto label_1b44ac;
            case 0x1B44B0u: goto label_1b44b0;
            case 0x1B44B4u: goto label_1b44b4;
            case 0x1B44B8u: goto label_1b44b8;
            case 0x1B44BCu: goto label_1b44bc;
            case 0x1B44C0u: goto label_1b44c0;
            case 0x1B44C4u: goto label_1b44c4;
            case 0x1B44C8u: goto label_1b44c8;
            case 0x1B44CCu: goto label_1b44cc;
            case 0x1B44D0u: goto label_1b44d0;
            case 0x1B44D4u: goto label_1b44d4;
            case 0x1B44D8u: goto label_1b44d8;
            case 0x1B44DCu: goto label_1b44dc;
            case 0x1B44E0u: goto label_1b44e0;
            case 0x1B44E4u: goto label_1b44e4;
            case 0x1B44E8u: goto label_1b44e8;
            case 0x1B44ECu: goto label_1b44ec;
            case 0x1B44F0u: goto label_1b44f0;
            case 0x1B44F4u: goto label_1b44f4;
            case 0x1B44F8u: goto label_1b44f8;
            case 0x1B44FCu: goto label_1b44fc;
            case 0x1B4500u: goto label_1b4500;
            case 0x1B4504u: goto label_1b4504;
            case 0x1B4508u: goto label_1b4508;
            case 0x1B450Cu: goto label_1b450c;
            case 0x1B4510u: goto label_1b4510;
            case 0x1B4514u: goto label_1b4514;
            case 0x1B4518u: goto label_1b4518;
            case 0x1B451Cu: goto label_1b451c;
            case 0x1B4520u: goto label_1b4520;
            case 0x1B4524u: goto label_1b4524;
            case 0x1B4528u: goto label_1b4528;
            case 0x1B452Cu: goto label_1b452c;
            case 0x1B4530u: goto label_1b4530;
            case 0x1B4534u: goto label_1b4534;
            case 0x1B4538u: goto label_1b4538;
            case 0x1B453Cu: goto label_1b453c;
            case 0x1B4540u: goto label_1b4540;
            case 0x1B4544u: goto label_1b4544;
            case 0x1B4548u: goto label_1b4548;
            case 0x1B454Cu: goto label_1b454c;
            case 0x1B4550u: goto label_1b4550;
            case 0x1B4554u: goto label_1b4554;
            case 0x1B4558u: goto label_1b4558;
            case 0x1B455Cu: goto label_1b455c;
            case 0x1B4560u: goto label_1b4560;
            case 0x1B4564u: goto label_1b4564;
            case 0x1B4568u: goto label_1b4568;
            case 0x1B456Cu: goto label_1b456c;
            case 0x1B4570u: goto label_1b4570;
            case 0x1B4574u: goto label_1b4574;
            case 0x1B4578u: goto label_1b4578;
            case 0x1B457Cu: goto label_1b457c;
            case 0x1B4580u: goto label_1b4580;
            case 0x1B4584u: goto label_1b4584;
            case 0x1B4588u: goto label_1b4588;
            case 0x1B458Cu: goto label_1b458c;
            case 0x1B4590u: goto label_1b4590;
            case 0x1B4594u: goto label_1b4594;
            case 0x1B4598u: goto label_1b4598;
            case 0x1B459Cu: goto label_1b459c;
            case 0x1B45A0u: goto label_1b45a0;
            case 0x1B45A4u: goto label_1b45a4;
            case 0x1B45A8u: goto label_1b45a8;
            case 0x1B45ACu: goto label_1b45ac;
            case 0x1B45B0u: goto label_1b45b0;
            case 0x1B45B4u: goto label_1b45b4;
            case 0x1B45B8u: goto label_1b45b8;
            case 0x1B45BCu: goto label_1b45bc;
            case 0x1B45C0u: goto label_1b45c0;
            case 0x1B45C4u: goto label_1b45c4;
            case 0x1B45C8u: goto label_1b45c8;
            case 0x1B45CCu: goto label_1b45cc;
            case 0x1B45D0u: goto label_1b45d0;
            case 0x1B45D4u: goto label_1b45d4;
            case 0x1B45D8u: goto label_1b45d8;
            case 0x1B45DCu: goto label_1b45dc;
            case 0x1B45E0u: goto label_1b45e0;
            case 0x1B45E4u: goto label_1b45e4;
            case 0x1B45E8u: goto label_1b45e8;
            case 0x1B45ECu: goto label_1b45ec;
            case 0x1B45F0u: goto label_1b45f0;
            case 0x1B45F4u: goto label_1b45f4;
            case 0x1B45F8u: goto label_1b45f8;
            case 0x1B45FCu: goto label_1b45fc;
            case 0x1B4600u: goto label_1b4600;
            case 0x1B4604u: goto label_1b4604;
            case 0x1B4608u: goto label_1b4608;
            case 0x1B460Cu: goto label_1b460c;
            case 0x1B4610u: goto label_1b4610;
            case 0x1B4614u: goto label_1b4614;
            case 0x1B4618u: goto label_1b4618;
            case 0x1B461Cu: goto label_1b461c;
            case 0x1B4620u: goto label_1b4620;
            case 0x1B4624u: goto label_1b4624;
            case 0x1B4628u: goto label_1b4628;
            case 0x1B462Cu: goto label_1b462c;
            case 0x1B4630u: goto label_1b4630;
            case 0x1B4634u: goto label_1b4634;
            case 0x1B4638u: goto label_1b4638;
            case 0x1B463Cu: goto label_1b463c;
            case 0x1B4640u: goto label_1b4640;
            case 0x1B4644u: goto label_1b4644;
            case 0x1B4648u: goto label_1b4648;
            case 0x1B464Cu: goto label_1b464c;
            case 0x1B4650u: goto label_1b4650;
            case 0x1B4654u: goto label_1b4654;
            case 0x1B4658u: goto label_1b4658;
            case 0x1B465Cu: goto label_1b465c;
            case 0x1B4660u: goto label_1b4660;
            case 0x1B4664u: goto label_1b4664;
            case 0x1B4668u: goto label_1b4668;
            case 0x1B466Cu: goto label_1b466c;
            case 0x1B4670u: goto label_1b4670;
            case 0x1B4674u: goto label_1b4674;
            case 0x1B4678u: goto label_1b4678;
            case 0x1B467Cu: goto label_1b467c;
            case 0x1B4680u: goto label_1b4680;
            case 0x1B4684u: goto label_1b4684;
            case 0x1B4688u: goto label_1b4688;
            case 0x1B468Cu: goto label_1b468c;
            case 0x1B4690u: goto label_1b4690;
            case 0x1B4694u: goto label_1b4694;
            case 0x1B4698u: goto label_1b4698;
            case 0x1B469Cu: goto label_1b469c;
            case 0x1B46A0u: goto label_1b46a0;
            case 0x1B46A4u: goto label_1b46a4;
            case 0x1B46A8u: goto label_1b46a8;
            case 0x1B46ACu: goto label_1b46ac;
            case 0x1B46B0u: goto label_1b46b0;
            case 0x1B46B4u: goto label_1b46b4;
            case 0x1B46B8u: goto label_1b46b8;
            case 0x1B46BCu: goto label_1b46bc;
            case 0x1B46C0u: goto label_1b46c0;
            case 0x1B46C4u: goto label_1b46c4;
            case 0x1B46C8u: goto label_1b46c8;
            case 0x1B46CCu: goto label_1b46cc;
            case 0x1B46D0u: goto label_1b46d0;
            case 0x1B46D4u: goto label_1b46d4;
            case 0x1B46D8u: goto label_1b46d8;
            case 0x1B46DCu: goto label_1b46dc;
            case 0x1B46E0u: goto label_1b46e0;
            case 0x1B46E4u: goto label_1b46e4;
            case 0x1B46E8u: goto label_1b46e8;
            case 0x1B46ECu: goto label_1b46ec;
            case 0x1B46F0u: goto label_1b46f0;
            case 0x1B46F4u: goto label_1b46f4;
            case 0x1B46F8u: goto label_1b46f8;
            case 0x1B46FCu: goto label_1b46fc;
            case 0x1B4700u: goto label_1b4700;
            case 0x1B4704u: goto label_1b4704;
            case 0x1B4708u: goto label_1b4708;
            case 0x1B470Cu: goto label_1b470c;
            case 0x1B4710u: goto label_1b4710;
            case 0x1B4714u: goto label_1b4714;
            case 0x1B4718u: goto label_1b4718;
            case 0x1B471Cu: goto label_1b471c;
            case 0x1B4720u: goto label_1b4720;
            case 0x1B4724u: goto label_1b4724;
            case 0x1B4728u: goto label_1b4728;
            case 0x1B472Cu: goto label_1b472c;
            case 0x1B4730u: goto label_1b4730;
            case 0x1B4734u: goto label_1b4734;
            case 0x1B4738u: goto label_1b4738;
            case 0x1B473Cu: goto label_1b473c;
            case 0x1B4740u: goto label_1b4740;
            case 0x1B4744u: goto label_1b4744;
            case 0x1B4748u: goto label_1b4748;
            case 0x1B474Cu: goto label_1b474c;
            case 0x1B4750u: goto label_1b4750;
            case 0x1B4754u: goto label_1b4754;
            case 0x1B4758u: goto label_1b4758;
            case 0x1B475Cu: goto label_1b475c;
            case 0x1B4760u: goto label_1b4760;
            case 0x1B4764u: goto label_1b4764;
            case 0x1B4768u: goto label_1b4768;
            case 0x1B476Cu: goto label_1b476c;
            case 0x1B4770u: goto label_1b4770;
            case 0x1B4774u: goto label_1b4774;
            case 0x1B4778u: goto label_1b4778;
            case 0x1B477Cu: goto label_1b477c;
            case 0x1B4780u: goto label_1b4780;
            case 0x1B4784u: goto label_1b4784;
            case 0x1B4788u: goto label_1b4788;
            case 0x1B478Cu: goto label_1b478c;
            case 0x1B4790u: goto label_1b4790;
            case 0x1B4794u: goto label_1b4794;
            case 0x1B4798u: goto label_1b4798;
            case 0x1B479Cu: goto label_1b479c;
            case 0x1B47A0u: goto label_1b47a0;
            case 0x1B47A4u: goto label_1b47a4;
            case 0x1B47A8u: goto label_1b47a8;
            case 0x1B47ACu: goto label_1b47ac;
            case 0x1B47B0u: goto label_1b47b0;
            case 0x1B47B4u: goto label_1b47b4;
            case 0x1B47B8u: goto label_1b47b8;
            case 0x1B47BCu: goto label_1b47bc;
            case 0x1B47C0u: goto label_1b47c0;
            case 0x1B47C4u: goto label_1b47c4;
            case 0x1B47C8u: goto label_1b47c8;
            case 0x1B47CCu: goto label_1b47cc;
            case 0x1B47D0u: goto label_1b47d0;
            case 0x1B47D4u: goto label_1b47d4;
            case 0x1B47D8u: goto label_1b47d8;
            case 0x1B47DCu: goto label_1b47dc;
            case 0x1B47E0u: goto label_1b47e0;
            case 0x1B47E4u: goto label_1b47e4;
            case 0x1B47E8u: goto label_1b47e8;
            case 0x1B47ECu: goto label_1b47ec;
            case 0x1B47F0u: goto label_1b47f0;
            case 0x1B47F4u: goto label_1b47f4;
            case 0x1B47F8u: goto label_1b47f8;
            case 0x1B47FCu: goto label_1b47fc;
            case 0x1B4800u: goto label_1b4800;
            case 0x1B4804u: goto label_1b4804;
            case 0x1B4808u: goto label_1b4808;
            case 0x1B480Cu: goto label_1b480c;
            case 0x1B4810u: goto label_1b4810;
            case 0x1B4814u: goto label_1b4814;
            case 0x1B4818u: goto label_1b4818;
            case 0x1B481Cu: goto label_1b481c;
            case 0x1B4820u: goto label_1b4820;
            case 0x1B4824u: goto label_1b4824;
            case 0x1B4828u: goto label_1b4828;
            case 0x1B482Cu: goto label_1b482c;
            case 0x1B4830u: goto label_1b4830;
            case 0x1B4834u: goto label_1b4834;
            case 0x1B4838u: goto label_1b4838;
            case 0x1B483Cu: goto label_1b483c;
            case 0x1B4840u: goto label_1b4840;
            case 0x1B4844u: goto label_1b4844;
            case 0x1B4848u: goto label_1b4848;
            case 0x1B484Cu: goto label_1b484c;
            case 0x1B4850u: goto label_1b4850;
            case 0x1B4854u: goto label_1b4854;
            case 0x1B4858u: goto label_1b4858;
            case 0x1B485Cu: goto label_1b485c;
            case 0x1B4860u: goto label_1b4860;
            case 0x1B4864u: goto label_1b4864;
            case 0x1B4868u: goto label_1b4868;
            case 0x1B486Cu: goto label_1b486c;
            case 0x1B4870u: goto label_1b4870;
            case 0x1B4874u: goto label_1b4874;
            case 0x1B4878u: goto label_1b4878;
            case 0x1B487Cu: goto label_1b487c;
            case 0x1B4880u: goto label_1b4880;
            case 0x1B4884u: goto label_1b4884;
            case 0x1B4888u: goto label_1b4888;
            case 0x1B488Cu: goto label_1b488c;
            case 0x1B4890u: goto label_1b4890;
            case 0x1B4894u: goto label_1b4894;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B489Cu: goto label_1b489c;
            case 0x1B48A0u: goto label_1b48a0;
            case 0x1B48A4u: goto label_1b48a4;
            case 0x1B48A8u: goto label_1b48a8;
            case 0x1B48ACu: goto label_1b48ac;
            case 0x1B48B0u: goto label_1b48b0;
            case 0x1B48B4u: goto label_1b48b4;
            case 0x1B48B8u: goto label_1b48b8;
            case 0x1B48BCu: goto label_1b48bc;
            case 0x1B48C0u: goto label_1b48c0;
            case 0x1B48C4u: goto label_1b48c4;
            case 0x1B48C8u: goto label_1b48c8;
            case 0x1B48CCu: goto label_1b48cc;
            case 0x1B48D0u: goto label_1b48d0;
            case 0x1B48D4u: goto label_1b48d4;
            case 0x1B48D8u: goto label_1b48d8;
            case 0x1B48DCu: goto label_1b48dc;
            case 0x1B48E0u: goto label_1b48e0;
            case 0x1B48E4u: goto label_1b48e4;
            case 0x1B48E8u: goto label_1b48e8;
            case 0x1B48ECu: goto label_1b48ec;
            case 0x1B48F0u: goto label_1b48f0;
            case 0x1B48F4u: goto label_1b48f4;
            case 0x1B48F8u: goto label_1b48f8;
            case 0x1B48FCu: goto label_1b48fc;
            case 0x1B4900u: goto label_1b4900;
            case 0x1B4904u: goto label_1b4904;
            case 0x1B4908u: goto label_1b4908;
            case 0x1B490Cu: goto label_1b490c;
            case 0x1B4910u: goto label_1b4910;
            case 0x1B4914u: goto label_1b4914;
            case 0x1B4918u: goto label_1b4918;
            case 0x1B491Cu: goto label_1b491c;
            case 0x1B4920u: goto label_1b4920;
            case 0x1B4924u: goto label_1b4924;
            case 0x1B4928u: goto label_1b4928;
            case 0x1B492Cu: goto label_1b492c;
            case 0x1B4930u: goto label_1b4930;
            case 0x1B4934u: goto label_1b4934;
            case 0x1B4938u: goto label_1b4938;
            case 0x1B493Cu: goto label_1b493c;
            case 0x1B4940u: goto label_1b4940;
            case 0x1B4944u: goto label_1b4944;
            case 0x1B4948u: goto label_1b4948;
            case 0x1B494Cu: goto label_1b494c;
            case 0x1B4950u: goto label_1b4950;
            case 0x1B4954u: goto label_1b4954;
            case 0x1B4958u: goto label_1b4958;
            case 0x1B495Cu: goto label_1b495c;
            case 0x1B4960u: goto label_1b4960;
            case 0x1B4964u: goto label_1b4964;
            case 0x1B4968u: goto label_1b4968;
            case 0x1B496Cu: goto label_1b496c;
            case 0x1B4970u: goto label_1b4970;
            case 0x1B4974u: goto label_1b4974;
            case 0x1B4978u: goto label_1b4978;
            case 0x1B497Cu: goto label_1b497c;
            case 0x1B4980u: goto label_1b4980;
            case 0x1B4984u: goto label_1b4984;
            case 0x1B4988u: goto label_1b4988;
            case 0x1B498Cu: goto label_1b498c;
            case 0x1B4990u: goto label_1b4990;
            case 0x1B4994u: goto label_1b4994;
            case 0x1B4998u: goto label_1b4998;
            case 0x1B499Cu: goto label_1b499c;
            case 0x1B49A0u: goto label_1b49a0;
            case 0x1B49A4u: goto label_1b49a4;
            case 0x1B49A8u: goto label_1b49a8;
            case 0x1B49ACu: goto label_1b49ac;
            case 0x1B49B0u: goto label_1b49b0;
            case 0x1B49B4u: goto label_1b49b4;
            case 0x1B49B8u: goto label_1b49b8;
            case 0x1B49BCu: goto label_1b49bc;
            case 0x1B49C0u: goto label_1b49c0;
            case 0x1B49C4u: goto label_1b49c4;
            case 0x1B49C8u: goto label_1b49c8;
            case 0x1B49CCu: goto label_1b49cc;
            case 0x1B49D0u: goto label_1b49d0;
            case 0x1B49D4u: goto label_1b49d4;
            case 0x1B49D8u: goto label_1b49d8;
            case 0x1B49DCu: goto label_1b49dc;
            case 0x1B49E0u: goto label_1b49e0;
            case 0x1B49E4u: goto label_1b49e4;
            case 0x1B49E8u: goto label_1b49e8;
            case 0x1B49ECu: goto label_1b49ec;
            case 0x1B49F0u: goto label_1b49f0;
            case 0x1B49F4u: goto label_1b49f4;
            case 0x1B49F8u: goto label_1b49f8;
            case 0x1B49FCu: goto label_1b49fc;
            case 0x1B4A00u: goto label_1b4a00;
            case 0x1B4A04u: goto label_1b4a04;
            case 0x1B4A08u: goto label_1b4a08;
            case 0x1B4A0Cu: goto label_1b4a0c;
            case 0x1B4A10u: goto label_1b4a10;
            case 0x1B4A14u: goto label_1b4a14;
            case 0x1B4A18u: goto label_1b4a18;
            case 0x1B4A1Cu: goto label_1b4a1c;
            case 0x1B4A20u: goto label_1b4a20;
            case 0x1B4A24u: goto label_1b4a24;
            case 0x1B4A28u: goto label_1b4a28;
            case 0x1B4A2Cu: goto label_1b4a2c;
            case 0x1B4A30u: goto label_1b4a30;
            case 0x1B4A34u: goto label_1b4a34;
            case 0x1B4A38u: goto label_1b4a38;
            case 0x1B4A3Cu: goto label_1b4a3c;
            case 0x1B4A40u: goto label_1b4a40;
            case 0x1B4A44u: goto label_1b4a44;
            case 0x1B4A48u: goto label_1b4a48;
            case 0x1B4A4Cu: goto label_1b4a4c;
            case 0x1B4A50u: goto label_1b4a50;
            case 0x1B4A54u: goto label_1b4a54;
            case 0x1B4A58u: goto label_1b4a58;
            case 0x1B4A5Cu: goto label_1b4a5c;
            case 0x1B4A60u: goto label_1b4a60;
            case 0x1B4A64u: goto label_1b4a64;
            case 0x1B4A68u: goto label_1b4a68;
            case 0x1B4A6Cu: goto label_1b4a6c;
            case 0x1B4A70u: goto label_1b4a70;
            case 0x1B4A74u: goto label_1b4a74;
            case 0x1B4A78u: goto label_1b4a78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A3Cu; }
            if (ctx->pc != 0x1B4A3Cu) { return; }
        }
    }
    ctx->pc = 0x1B4A3Cu;
label_1b4a3c:
    // 0x1b4a3c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b4a40:
    if (ctx->pc == 0x1B4A40u) {
        ctx->pc = 0x1B4A44u;
        goto label_1b4a44;
    }
    ctx->pc = 0x1B4A3Cu;
    {
        const bool branch_taken_0x1b4a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a3c) {
            ctx->pc = 0x1B4A68u;
            goto label_1b4a68;
        }
    }
    ctx->pc = 0x1B4A44u;
label_1b4a44:
    // 0x1b4a44: 0x0  nop
    ctx->pc = 0x1b4a44u;
    // NOP
label_1b4a48:
    // 0x1b4a48: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b4a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1b4a4c:
    // 0x1b4a4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b4a50:
    // 0x1b4a50: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1b4a54:
    // 0x1b4a54: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0
    ctx->pc = 0x1b4a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
label_1b4a58:
    // 0x1b4a58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b4a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a5c:
    // 0x1b4a5c: 0xc053ca4  jal         func_14F290
label_1b4a60:
    if (ctx->pc == 0x1B4A60u) {
        ctx->pc = 0x1B4A60u;
            // 0x1b4a60: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A64u;
        goto label_1b4a64;
    }
    ctx->pc = 0x1B4A5Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A64u);
    ctx->pc = 0x1B4A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A5Cu;
            // 0x1b4a60: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A64u; }
        if (ctx->pc != 0x1B4A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4A64u; }
        if (ctx->pc != 0x1B4A64u) { return; }
    }
    ctx->pc = 0x1B4A64u;
label_1b4a64:
    // 0x1b4a64: 0x0  nop
    ctx->pc = 0x1b4a64u;
    // NOP
label_1b4a68:
    // 0x1b4a68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4a6c:
    // 0x1b4a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4a70:
    // 0x1b4a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4a74:
    // 0x1b4a74: 0x3e00008  jr          $ra
label_1b4a78:
    if (ctx->pc == 0x1B4A78u) {
        ctx->pc = 0x1B4A78u;
            // 0x1b4a78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B4A7Cu;
        goto label_fallthrough_0x1b4a74;
    }
    ctx->pc = 0x1B4A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A74u;
            // 0x1b4a78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4160u: goto label_1b4160;
            case 0x1B4164u: goto label_1b4164;
            case 0x1B4168u: goto label_1b4168;
            case 0x1B416Cu: goto label_1b416c;
            case 0x1B4170u: goto label_1b4170;
            case 0x1B4174u: goto label_1b4174;
            case 0x1B4178u: goto label_1b4178;
            case 0x1B417Cu: goto label_1b417c;
            case 0x1B4180u: goto label_1b4180;
            case 0x1B4184u: goto label_1b4184;
            case 0x1B4188u: goto label_1b4188;
            case 0x1B418Cu: goto label_1b418c;
            case 0x1B4190u: goto label_1b4190;
            case 0x1B4194u: goto label_1b4194;
            case 0x1B4198u: goto label_1b4198;
            case 0x1B419Cu: goto label_1b419c;
            case 0x1B41A0u: goto label_1b41a0;
            case 0x1B41A4u: goto label_1b41a4;
            case 0x1B41A8u: goto label_1b41a8;
            case 0x1B41ACu: goto label_1b41ac;
            case 0x1B41B0u: goto label_1b41b0;
            case 0x1B41B4u: goto label_1b41b4;
            case 0x1B41B8u: goto label_1b41b8;
            case 0x1B41BCu: goto label_1b41bc;
            case 0x1B41C0u: goto label_1b41c0;
            case 0x1B41C4u: goto label_1b41c4;
            case 0x1B41C8u: goto label_1b41c8;
            case 0x1B41CCu: goto label_1b41cc;
            case 0x1B41D0u: goto label_1b41d0;
            case 0x1B41D4u: goto label_1b41d4;
            case 0x1B41D8u: goto label_1b41d8;
            case 0x1B41DCu: goto label_1b41dc;
            case 0x1B41E0u: goto label_1b41e0;
            case 0x1B41E4u: goto label_1b41e4;
            case 0x1B41E8u: goto label_1b41e8;
            case 0x1B41ECu: goto label_1b41ec;
            case 0x1B41F0u: goto label_1b41f0;
            case 0x1B41F4u: goto label_1b41f4;
            case 0x1B41F8u: goto label_1b41f8;
            case 0x1B41FCu: goto label_1b41fc;
            case 0x1B4200u: goto label_1b4200;
            case 0x1B4204u: goto label_1b4204;
            case 0x1B4208u: goto label_1b4208;
            case 0x1B420Cu: goto label_1b420c;
            case 0x1B4210u: goto label_1b4210;
            case 0x1B4214u: goto label_1b4214;
            case 0x1B4218u: goto label_1b4218;
            case 0x1B421Cu: goto label_1b421c;
            case 0x1B4220u: goto label_1b4220;
            case 0x1B4224u: goto label_1b4224;
            case 0x1B4228u: goto label_1b4228;
            case 0x1B422Cu: goto label_1b422c;
            case 0x1B4230u: goto label_1b4230;
            case 0x1B4234u: goto label_1b4234;
            case 0x1B4238u: goto label_1b4238;
            case 0x1B423Cu: goto label_1b423c;
            case 0x1B4240u: goto label_1b4240;
            case 0x1B4244u: goto label_1b4244;
            case 0x1B4248u: goto label_1b4248;
            case 0x1B424Cu: goto label_1b424c;
            case 0x1B4250u: goto label_1b4250;
            case 0x1B4254u: goto label_1b4254;
            case 0x1B4258u: goto label_1b4258;
            case 0x1B425Cu: goto label_1b425c;
            case 0x1B4260u: goto label_1b4260;
            case 0x1B4264u: goto label_1b4264;
            case 0x1B4268u: goto label_1b4268;
            case 0x1B426Cu: goto label_1b426c;
            case 0x1B4270u: goto label_1b4270;
            case 0x1B4274u: goto label_1b4274;
            case 0x1B4278u: goto label_1b4278;
            case 0x1B427Cu: goto label_1b427c;
            case 0x1B4280u: goto label_1b4280;
            case 0x1B4284u: goto label_1b4284;
            case 0x1B4288u: goto label_1b4288;
            case 0x1B428Cu: goto label_1b428c;
            case 0x1B4290u: goto label_1b4290;
            case 0x1B4294u: goto label_1b4294;
            case 0x1B4298u: goto label_1b4298;
            case 0x1B429Cu: goto label_1b429c;
            case 0x1B42A0u: goto label_1b42a0;
            case 0x1B42A4u: goto label_1b42a4;
            case 0x1B42A8u: goto label_1b42a8;
            case 0x1B42ACu: goto label_1b42ac;
            case 0x1B42B0u: goto label_1b42b0;
            case 0x1B42B4u: goto label_1b42b4;
            case 0x1B42B8u: goto label_1b42b8;
            case 0x1B42BCu: goto label_1b42bc;
            case 0x1B42C0u: goto label_1b42c0;
            case 0x1B42C4u: goto label_1b42c4;
            case 0x1B42C8u: goto label_1b42c8;
            case 0x1B42CCu: goto label_1b42cc;
            case 0x1B42D0u: goto label_1b42d0;
            case 0x1B42D4u: goto label_1b42d4;
            case 0x1B42D8u: goto label_1b42d8;
            case 0x1B42DCu: goto label_1b42dc;
            case 0x1B42E0u: goto label_1b42e0;
            case 0x1B42E4u: goto label_1b42e4;
            case 0x1B42E8u: goto label_1b42e8;
            case 0x1B42ECu: goto label_1b42ec;
            case 0x1B42F0u: goto label_1b42f0;
            case 0x1B42F4u: goto label_1b42f4;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B42FCu: goto label_1b42fc;
            case 0x1B4300u: goto label_1b4300;
            case 0x1B4304u: goto label_1b4304;
            case 0x1B4308u: goto label_1b4308;
            case 0x1B430Cu: goto label_1b430c;
            case 0x1B4310u: goto label_1b4310;
            case 0x1B4314u: goto label_1b4314;
            case 0x1B4318u: goto label_1b4318;
            case 0x1B431Cu: goto label_1b431c;
            case 0x1B4320u: goto label_1b4320;
            case 0x1B4324u: goto label_1b4324;
            case 0x1B4328u: goto label_1b4328;
            case 0x1B432Cu: goto label_1b432c;
            case 0x1B4330u: goto label_1b4330;
            case 0x1B4334u: goto label_1b4334;
            case 0x1B4338u: goto label_1b4338;
            case 0x1B433Cu: goto label_1b433c;
            case 0x1B4340u: goto label_1b4340;
            case 0x1B4344u: goto label_1b4344;
            case 0x1B4348u: goto label_1b4348;
            case 0x1B434Cu: goto label_1b434c;
            case 0x1B4350u: goto label_1b4350;
            case 0x1B4354u: goto label_1b4354;
            case 0x1B4358u: goto label_1b4358;
            case 0x1B435Cu: goto label_1b435c;
            case 0x1B4360u: goto label_1b4360;
            case 0x1B4364u: goto label_1b4364;
            case 0x1B4368u: goto label_1b4368;
            case 0x1B436Cu: goto label_1b436c;
            case 0x1B4370u: goto label_1b4370;
            case 0x1B4374u: goto label_1b4374;
            case 0x1B4378u: goto label_1b4378;
            case 0x1B437Cu: goto label_1b437c;
            case 0x1B4380u: goto label_1b4380;
            case 0x1B4384u: goto label_1b4384;
            case 0x1B4388u: goto label_1b4388;
            case 0x1B438Cu: goto label_1b438c;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B4394u: goto label_1b4394;
            case 0x1B4398u: goto label_1b4398;
            case 0x1B439Cu: goto label_1b439c;
            case 0x1B43A0u: goto label_1b43a0;
            case 0x1B43A4u: goto label_1b43a4;
            case 0x1B43A8u: goto label_1b43a8;
            case 0x1B43ACu: goto label_1b43ac;
            case 0x1B43B0u: goto label_1b43b0;
            case 0x1B43B4u: goto label_1b43b4;
            case 0x1B43B8u: goto label_1b43b8;
            case 0x1B43BCu: goto label_1b43bc;
            case 0x1B43C0u: goto label_1b43c0;
            case 0x1B43C4u: goto label_1b43c4;
            case 0x1B43C8u: goto label_1b43c8;
            case 0x1B43CCu: goto label_1b43cc;
            case 0x1B43D0u: goto label_1b43d0;
            case 0x1B43D4u: goto label_1b43d4;
            case 0x1B43D8u: goto label_1b43d8;
            case 0x1B43DCu: goto label_1b43dc;
            case 0x1B43E0u: goto label_1b43e0;
            case 0x1B43E4u: goto label_1b43e4;
            case 0x1B43E8u: goto label_1b43e8;
            case 0x1B43ECu: goto label_1b43ec;
            case 0x1B43F0u: goto label_1b43f0;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B43F8u: goto label_1b43f8;
            case 0x1B43FCu: goto label_1b43fc;
            case 0x1B4400u: goto label_1b4400;
            case 0x1B4404u: goto label_1b4404;
            case 0x1B4408u: goto label_1b4408;
            case 0x1B440Cu: goto label_1b440c;
            case 0x1B4410u: goto label_1b4410;
            case 0x1B4414u: goto label_1b4414;
            case 0x1B4418u: goto label_1b4418;
            case 0x1B441Cu: goto label_1b441c;
            case 0x1B4420u: goto label_1b4420;
            case 0x1B4424u: goto label_1b4424;
            case 0x1B4428u: goto label_1b4428;
            case 0x1B442Cu: goto label_1b442c;
            case 0x1B4430u: goto label_1b4430;
            case 0x1B4434u: goto label_1b4434;
            case 0x1B4438u: goto label_1b4438;
            case 0x1B443Cu: goto label_1b443c;
            case 0x1B4440u: goto label_1b4440;
            case 0x1B4444u: goto label_1b4444;
            case 0x1B4448u: goto label_1b4448;
            case 0x1B444Cu: goto label_1b444c;
            case 0x1B4450u: goto label_1b4450;
            case 0x1B4454u: goto label_1b4454;
            case 0x1B4458u: goto label_1b4458;
            case 0x1B445Cu: goto label_1b445c;
            case 0x1B4460u: goto label_1b4460;
            case 0x1B4464u: goto label_1b4464;
            case 0x1B4468u: goto label_1b4468;
            case 0x1B446Cu: goto label_1b446c;
            case 0x1B4470u: goto label_1b4470;
            case 0x1B4474u: goto label_1b4474;
            case 0x1B4478u: goto label_1b4478;
            case 0x1B447Cu: goto label_1b447c;
            case 0x1B4480u: goto label_1b4480;
            case 0x1B4484u: goto label_1b4484;
            case 0x1B4488u: goto label_1b4488;
            case 0x1B448Cu: goto label_1b448c;
            case 0x1B4490u: goto label_1b4490;
            case 0x1B4494u: goto label_1b4494;
            case 0x1B4498u: goto label_1b4498;
            case 0x1B449Cu: goto label_1b449c;
            case 0x1B44A0u: goto label_1b44a0;
            case 0x1B44A4u: goto label_1b44a4;
            case 0x1B44A8u: goto label_1b44a8;
            case 0x1B44ACu: goto label_1b44ac;
            case 0x1B44B0u: goto label_1b44b0;
            case 0x1B44B4u: goto label_1b44b4;
            case 0x1B44B8u: goto label_1b44b8;
            case 0x1B44BCu: goto label_1b44bc;
            case 0x1B44C0u: goto label_1b44c0;
            case 0x1B44C4u: goto label_1b44c4;
            case 0x1B44C8u: goto label_1b44c8;
            case 0x1B44CCu: goto label_1b44cc;
            case 0x1B44D0u: goto label_1b44d0;
            case 0x1B44D4u: goto label_1b44d4;
            case 0x1B44D8u: goto label_1b44d8;
            case 0x1B44DCu: goto label_1b44dc;
            case 0x1B44E0u: goto label_1b44e0;
            case 0x1B44E4u: goto label_1b44e4;
            case 0x1B44E8u: goto label_1b44e8;
            case 0x1B44ECu: goto label_1b44ec;
            case 0x1B44F0u: goto label_1b44f0;
            case 0x1B44F4u: goto label_1b44f4;
            case 0x1B44F8u: goto label_1b44f8;
            case 0x1B44FCu: goto label_1b44fc;
            case 0x1B4500u: goto label_1b4500;
            case 0x1B4504u: goto label_1b4504;
            case 0x1B4508u: goto label_1b4508;
            case 0x1B450Cu: goto label_1b450c;
            case 0x1B4510u: goto label_1b4510;
            case 0x1B4514u: goto label_1b4514;
            case 0x1B4518u: goto label_1b4518;
            case 0x1B451Cu: goto label_1b451c;
            case 0x1B4520u: goto label_1b4520;
            case 0x1B4524u: goto label_1b4524;
            case 0x1B4528u: goto label_1b4528;
            case 0x1B452Cu: goto label_1b452c;
            case 0x1B4530u: goto label_1b4530;
            case 0x1B4534u: goto label_1b4534;
            case 0x1B4538u: goto label_1b4538;
            case 0x1B453Cu: goto label_1b453c;
            case 0x1B4540u: goto label_1b4540;
            case 0x1B4544u: goto label_1b4544;
            case 0x1B4548u: goto label_1b4548;
            case 0x1B454Cu: goto label_1b454c;
            case 0x1B4550u: goto label_1b4550;
            case 0x1B4554u: goto label_1b4554;
            case 0x1B4558u: goto label_1b4558;
            case 0x1B455Cu: goto label_1b455c;
            case 0x1B4560u: goto label_1b4560;
            case 0x1B4564u: goto label_1b4564;
            case 0x1B4568u: goto label_1b4568;
            case 0x1B456Cu: goto label_1b456c;
            case 0x1B4570u: goto label_1b4570;
            case 0x1B4574u: goto label_1b4574;
            case 0x1B4578u: goto label_1b4578;
            case 0x1B457Cu: goto label_1b457c;
            case 0x1B4580u: goto label_1b4580;
            case 0x1B4584u: goto label_1b4584;
            case 0x1B4588u: goto label_1b4588;
            case 0x1B458Cu: goto label_1b458c;
            case 0x1B4590u: goto label_1b4590;
            case 0x1B4594u: goto label_1b4594;
            case 0x1B4598u: goto label_1b4598;
            case 0x1B459Cu: goto label_1b459c;
            case 0x1B45A0u: goto label_1b45a0;
            case 0x1B45A4u: goto label_1b45a4;
            case 0x1B45A8u: goto label_1b45a8;
            case 0x1B45ACu: goto label_1b45ac;
            case 0x1B45B0u: goto label_1b45b0;
            case 0x1B45B4u: goto label_1b45b4;
            case 0x1B45B8u: goto label_1b45b8;
            case 0x1B45BCu: goto label_1b45bc;
            case 0x1B45C0u: goto label_1b45c0;
            case 0x1B45C4u: goto label_1b45c4;
            case 0x1B45C8u: goto label_1b45c8;
            case 0x1B45CCu: goto label_1b45cc;
            case 0x1B45D0u: goto label_1b45d0;
            case 0x1B45D4u: goto label_1b45d4;
            case 0x1B45D8u: goto label_1b45d8;
            case 0x1B45DCu: goto label_1b45dc;
            case 0x1B45E0u: goto label_1b45e0;
            case 0x1B45E4u: goto label_1b45e4;
            case 0x1B45E8u: goto label_1b45e8;
            case 0x1B45ECu: goto label_1b45ec;
            case 0x1B45F0u: goto label_1b45f0;
            case 0x1B45F4u: goto label_1b45f4;
            case 0x1B45F8u: goto label_1b45f8;
            case 0x1B45FCu: goto label_1b45fc;
            case 0x1B4600u: goto label_1b4600;
            case 0x1B4604u: goto label_1b4604;
            case 0x1B4608u: goto label_1b4608;
            case 0x1B460Cu: goto label_1b460c;
            case 0x1B4610u: goto label_1b4610;
            case 0x1B4614u: goto label_1b4614;
            case 0x1B4618u: goto label_1b4618;
            case 0x1B461Cu: goto label_1b461c;
            case 0x1B4620u: goto label_1b4620;
            case 0x1B4624u: goto label_1b4624;
            case 0x1B4628u: goto label_1b4628;
            case 0x1B462Cu: goto label_1b462c;
            case 0x1B4630u: goto label_1b4630;
            case 0x1B4634u: goto label_1b4634;
            case 0x1B4638u: goto label_1b4638;
            case 0x1B463Cu: goto label_1b463c;
            case 0x1B4640u: goto label_1b4640;
            case 0x1B4644u: goto label_1b4644;
            case 0x1B4648u: goto label_1b4648;
            case 0x1B464Cu: goto label_1b464c;
            case 0x1B4650u: goto label_1b4650;
            case 0x1B4654u: goto label_1b4654;
            case 0x1B4658u: goto label_1b4658;
            case 0x1B465Cu: goto label_1b465c;
            case 0x1B4660u: goto label_1b4660;
            case 0x1B4664u: goto label_1b4664;
            case 0x1B4668u: goto label_1b4668;
            case 0x1B466Cu: goto label_1b466c;
            case 0x1B4670u: goto label_1b4670;
            case 0x1B4674u: goto label_1b4674;
            case 0x1B4678u: goto label_1b4678;
            case 0x1B467Cu: goto label_1b467c;
            case 0x1B4680u: goto label_1b4680;
            case 0x1B4684u: goto label_1b4684;
            case 0x1B4688u: goto label_1b4688;
            case 0x1B468Cu: goto label_1b468c;
            case 0x1B4690u: goto label_1b4690;
            case 0x1B4694u: goto label_1b4694;
            case 0x1B4698u: goto label_1b4698;
            case 0x1B469Cu: goto label_1b469c;
            case 0x1B46A0u: goto label_1b46a0;
            case 0x1B46A4u: goto label_1b46a4;
            case 0x1B46A8u: goto label_1b46a8;
            case 0x1B46ACu: goto label_1b46ac;
            case 0x1B46B0u: goto label_1b46b0;
            case 0x1B46B4u: goto label_1b46b4;
            case 0x1B46B8u: goto label_1b46b8;
            case 0x1B46BCu: goto label_1b46bc;
            case 0x1B46C0u: goto label_1b46c0;
            case 0x1B46C4u: goto label_1b46c4;
            case 0x1B46C8u: goto label_1b46c8;
            case 0x1B46CCu: goto label_1b46cc;
            case 0x1B46D0u: goto label_1b46d0;
            case 0x1B46D4u: goto label_1b46d4;
            case 0x1B46D8u: goto label_1b46d8;
            case 0x1B46DCu: goto label_1b46dc;
            case 0x1B46E0u: goto label_1b46e0;
            case 0x1B46E4u: goto label_1b46e4;
            case 0x1B46E8u: goto label_1b46e8;
            case 0x1B46ECu: goto label_1b46ec;
            case 0x1B46F0u: goto label_1b46f0;
            case 0x1B46F4u: goto label_1b46f4;
            case 0x1B46F8u: goto label_1b46f8;
            case 0x1B46FCu: goto label_1b46fc;
            case 0x1B4700u: goto label_1b4700;
            case 0x1B4704u: goto label_1b4704;
            case 0x1B4708u: goto label_1b4708;
            case 0x1B470Cu: goto label_1b470c;
            case 0x1B4710u: goto label_1b4710;
            case 0x1B4714u: goto label_1b4714;
            case 0x1B4718u: goto label_1b4718;
            case 0x1B471Cu: goto label_1b471c;
            case 0x1B4720u: goto label_1b4720;
            case 0x1B4724u: goto label_1b4724;
            case 0x1B4728u: goto label_1b4728;
            case 0x1B472Cu: goto label_1b472c;
            case 0x1B4730u: goto label_1b4730;
            case 0x1B4734u: goto label_1b4734;
            case 0x1B4738u: goto label_1b4738;
            case 0x1B473Cu: goto label_1b473c;
            case 0x1B4740u: goto label_1b4740;
            case 0x1B4744u: goto label_1b4744;
            case 0x1B4748u: goto label_1b4748;
            case 0x1B474Cu: goto label_1b474c;
            case 0x1B4750u: goto label_1b4750;
            case 0x1B4754u: goto label_1b4754;
            case 0x1B4758u: goto label_1b4758;
            case 0x1B475Cu: goto label_1b475c;
            case 0x1B4760u: goto label_1b4760;
            case 0x1B4764u: goto label_1b4764;
            case 0x1B4768u: goto label_1b4768;
            case 0x1B476Cu: goto label_1b476c;
            case 0x1B4770u: goto label_1b4770;
            case 0x1B4774u: goto label_1b4774;
            case 0x1B4778u: goto label_1b4778;
            case 0x1B477Cu: goto label_1b477c;
            case 0x1B4780u: goto label_1b4780;
            case 0x1B4784u: goto label_1b4784;
            case 0x1B4788u: goto label_1b4788;
            case 0x1B478Cu: goto label_1b478c;
            case 0x1B4790u: goto label_1b4790;
            case 0x1B4794u: goto label_1b4794;
            case 0x1B4798u: goto label_1b4798;
            case 0x1B479Cu: goto label_1b479c;
            case 0x1B47A0u: goto label_1b47a0;
            case 0x1B47A4u: goto label_1b47a4;
            case 0x1B47A8u: goto label_1b47a8;
            case 0x1B47ACu: goto label_1b47ac;
            case 0x1B47B0u: goto label_1b47b0;
            case 0x1B47B4u: goto label_1b47b4;
            case 0x1B47B8u: goto label_1b47b8;
            case 0x1B47BCu: goto label_1b47bc;
            case 0x1B47C0u: goto label_1b47c0;
            case 0x1B47C4u: goto label_1b47c4;
            case 0x1B47C8u: goto label_1b47c8;
            case 0x1B47CCu: goto label_1b47cc;
            case 0x1B47D0u: goto label_1b47d0;
            case 0x1B47D4u: goto label_1b47d4;
            case 0x1B47D8u: goto label_1b47d8;
            case 0x1B47DCu: goto label_1b47dc;
            case 0x1B47E0u: goto label_1b47e0;
            case 0x1B47E4u: goto label_1b47e4;
            case 0x1B47E8u: goto label_1b47e8;
            case 0x1B47ECu: goto label_1b47ec;
            case 0x1B47F0u: goto label_1b47f0;
            case 0x1B47F4u: goto label_1b47f4;
            case 0x1B47F8u: goto label_1b47f8;
            case 0x1B47FCu: goto label_1b47fc;
            case 0x1B4800u: goto label_1b4800;
            case 0x1B4804u: goto label_1b4804;
            case 0x1B4808u: goto label_1b4808;
            case 0x1B480Cu: goto label_1b480c;
            case 0x1B4810u: goto label_1b4810;
            case 0x1B4814u: goto label_1b4814;
            case 0x1B4818u: goto label_1b4818;
            case 0x1B481Cu: goto label_1b481c;
            case 0x1B4820u: goto label_1b4820;
            case 0x1B4824u: goto label_1b4824;
            case 0x1B4828u: goto label_1b4828;
            case 0x1B482Cu: goto label_1b482c;
            case 0x1B4830u: goto label_1b4830;
            case 0x1B4834u: goto label_1b4834;
            case 0x1B4838u: goto label_1b4838;
            case 0x1B483Cu: goto label_1b483c;
            case 0x1B4840u: goto label_1b4840;
            case 0x1B4844u: goto label_1b4844;
            case 0x1B4848u: goto label_1b4848;
            case 0x1B484Cu: goto label_1b484c;
            case 0x1B4850u: goto label_1b4850;
            case 0x1B4854u: goto label_1b4854;
            case 0x1B4858u: goto label_1b4858;
            case 0x1B485Cu: goto label_1b485c;
            case 0x1B4860u: goto label_1b4860;
            case 0x1B4864u: goto label_1b4864;
            case 0x1B4868u: goto label_1b4868;
            case 0x1B486Cu: goto label_1b486c;
            case 0x1B4870u: goto label_1b4870;
            case 0x1B4874u: goto label_1b4874;
            case 0x1B4878u: goto label_1b4878;
            case 0x1B487Cu: goto label_1b487c;
            case 0x1B4880u: goto label_1b4880;
            case 0x1B4884u: goto label_1b4884;
            case 0x1B4888u: goto label_1b4888;
            case 0x1B488Cu: goto label_1b488c;
            case 0x1B4890u: goto label_1b4890;
            case 0x1B4894u: goto label_1b4894;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B489Cu: goto label_1b489c;
            case 0x1B48A0u: goto label_1b48a0;
            case 0x1B48A4u: goto label_1b48a4;
            case 0x1B48A8u: goto label_1b48a8;
            case 0x1B48ACu: goto label_1b48ac;
            case 0x1B48B0u: goto label_1b48b0;
            case 0x1B48B4u: goto label_1b48b4;
            case 0x1B48B8u: goto label_1b48b8;
            case 0x1B48BCu: goto label_1b48bc;
            case 0x1B48C0u: goto label_1b48c0;
            case 0x1B48C4u: goto label_1b48c4;
            case 0x1B48C8u: goto label_1b48c8;
            case 0x1B48CCu: goto label_1b48cc;
            case 0x1B48D0u: goto label_1b48d0;
            case 0x1B48D4u: goto label_1b48d4;
            case 0x1B48D8u: goto label_1b48d8;
            case 0x1B48DCu: goto label_1b48dc;
            case 0x1B48E0u: goto label_1b48e0;
            case 0x1B48E4u: goto label_1b48e4;
            case 0x1B48E8u: goto label_1b48e8;
            case 0x1B48ECu: goto label_1b48ec;
            case 0x1B48F0u: goto label_1b48f0;
            case 0x1B48F4u: goto label_1b48f4;
            case 0x1B48F8u: goto label_1b48f8;
            case 0x1B48FCu: goto label_1b48fc;
            case 0x1B4900u: goto label_1b4900;
            case 0x1B4904u: goto label_1b4904;
            case 0x1B4908u: goto label_1b4908;
            case 0x1B490Cu: goto label_1b490c;
            case 0x1B4910u: goto label_1b4910;
            case 0x1B4914u: goto label_1b4914;
            case 0x1B4918u: goto label_1b4918;
            case 0x1B491Cu: goto label_1b491c;
            case 0x1B4920u: goto label_1b4920;
            case 0x1B4924u: goto label_1b4924;
            case 0x1B4928u: goto label_1b4928;
            case 0x1B492Cu: goto label_1b492c;
            case 0x1B4930u: goto label_1b4930;
            case 0x1B4934u: goto label_1b4934;
            case 0x1B4938u: goto label_1b4938;
            case 0x1B493Cu: goto label_1b493c;
            case 0x1B4940u: goto label_1b4940;
            case 0x1B4944u: goto label_1b4944;
            case 0x1B4948u: goto label_1b4948;
            case 0x1B494Cu: goto label_1b494c;
            case 0x1B4950u: goto label_1b4950;
            case 0x1B4954u: goto label_1b4954;
            case 0x1B4958u: goto label_1b4958;
            case 0x1B495Cu: goto label_1b495c;
            case 0x1B4960u: goto label_1b4960;
            case 0x1B4964u: goto label_1b4964;
            case 0x1B4968u: goto label_1b4968;
            case 0x1B496Cu: goto label_1b496c;
            case 0x1B4970u: goto label_1b4970;
            case 0x1B4974u: goto label_1b4974;
            case 0x1B4978u: goto label_1b4978;
            case 0x1B497Cu: goto label_1b497c;
            case 0x1B4980u: goto label_1b4980;
            case 0x1B4984u: goto label_1b4984;
            case 0x1B4988u: goto label_1b4988;
            case 0x1B498Cu: goto label_1b498c;
            case 0x1B4990u: goto label_1b4990;
            case 0x1B4994u: goto label_1b4994;
            case 0x1B4998u: goto label_1b4998;
            case 0x1B499Cu: goto label_1b499c;
            case 0x1B49A0u: goto label_1b49a0;
            case 0x1B49A4u: goto label_1b49a4;
            case 0x1B49A8u: goto label_1b49a8;
            case 0x1B49ACu: goto label_1b49ac;
            case 0x1B49B0u: goto label_1b49b0;
            case 0x1B49B4u: goto label_1b49b4;
            case 0x1B49B8u: goto label_1b49b8;
            case 0x1B49BCu: goto label_1b49bc;
            case 0x1B49C0u: goto label_1b49c0;
            case 0x1B49C4u: goto label_1b49c4;
            case 0x1B49C8u: goto label_1b49c8;
            case 0x1B49CCu: goto label_1b49cc;
            case 0x1B49D0u: goto label_1b49d0;
            case 0x1B49D4u: goto label_1b49d4;
            case 0x1B49D8u: goto label_1b49d8;
            case 0x1B49DCu: goto label_1b49dc;
            case 0x1B49E0u: goto label_1b49e0;
            case 0x1B49E4u: goto label_1b49e4;
            case 0x1B49E8u: goto label_1b49e8;
            case 0x1B49ECu: goto label_1b49ec;
            case 0x1B49F0u: goto label_1b49f0;
            case 0x1B49F4u: goto label_1b49f4;
            case 0x1B49F8u: goto label_1b49f8;
            case 0x1B49FCu: goto label_1b49fc;
            case 0x1B4A00u: goto label_1b4a00;
            case 0x1B4A04u: goto label_1b4a04;
            case 0x1B4A08u: goto label_1b4a08;
            case 0x1B4A0Cu: goto label_1b4a0c;
            case 0x1B4A10u: goto label_1b4a10;
            case 0x1B4A14u: goto label_1b4a14;
            case 0x1B4A18u: goto label_1b4a18;
            case 0x1B4A1Cu: goto label_1b4a1c;
            case 0x1B4A20u: goto label_1b4a20;
            case 0x1B4A24u: goto label_1b4a24;
            case 0x1B4A28u: goto label_1b4a28;
            case 0x1B4A2Cu: goto label_1b4a2c;
            case 0x1B4A30u: goto label_1b4a30;
            case 0x1B4A34u: goto label_1b4a34;
            case 0x1B4A38u: goto label_1b4a38;
            case 0x1B4A3Cu: goto label_1b4a3c;
            case 0x1B4A40u: goto label_1b4a40;
            case 0x1B4A44u: goto label_1b4a44;
            case 0x1B4A48u: goto label_1b4a48;
            case 0x1B4A4Cu: goto label_1b4a4c;
            case 0x1B4A50u: goto label_1b4a50;
            case 0x1B4A54u: goto label_1b4a54;
            case 0x1B4A58u: goto label_1b4a58;
            case 0x1B4A5Cu: goto label_1b4a5c;
            case 0x1B4A60u: goto label_1b4a60;
            case 0x1B4A64u: goto label_1b4a64;
            case 0x1B4A68u: goto label_1b4a68;
            case 0x1B4A6Cu: goto label_1b4a6c;
            case 0x1B4A70u: goto label_1b4a70;
            case 0x1B4A74u: goto label_1b4a74;
            case 0x1B4A78u: goto label_1b4a78;
            default: break;
        }
        return;
    }
label_fallthrough_0x1b4a74:
    ctx->pc = 0x1B4A7Cu;
}
