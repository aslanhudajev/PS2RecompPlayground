#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossSyuhouMove
// Address: 0x1b87b0 - 0x1b91f0
void Stage7BossSyuhouMove_0x1b87b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossSyuhouMove_0x1b87b0");
#endif

    ctx->pc = 0x1b87b0u;

    // 0x1b87b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b87b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b87b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1b87b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b87b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b87bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b87bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b87c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b87c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b87c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b87c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b87c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87cc: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1b87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1b87d0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1B87D0u;
    SET_GPR_U32(ctx, 31, 0x1B87D8u);
    ctx->pc = 0x1B87D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87D0u;
            // 0x1b87d4: 0xdc25aa08  ld          $a1, -0x55F8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87D8u; }
        if (ctx->pc != 0x1B87D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87D8u; }
        if (ctx->pc != 0x1B87D8u) { return; }
    }
    ctx->pc = 0x1B87D8u;
    // 0x1b87d8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b87d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b87dc: 0xac221be0  sw          $v0, 0x1BE0($at)
    ctx->pc = 0x1b87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7136), GPR_U32(ctx, 2));
    // 0x1b87e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b87e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b87e4: 0x8c241be0  lw          $a0, 0x1BE0($at)
    ctx->pc = 0x1b87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7136)));
    // 0x1b87e8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1B87E8u;
    SET_GPR_U32(ctx, 31, 0x1B87F0u);
    ctx->pc = 0x1B87ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87E8u;
            // 0x1b87ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87F0u; }
        if (ctx->pc != 0x1B87F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87F0u; }
        if (ctx->pc != 0x1B87F0u) { return; }
    }
    ctx->pc = 0x1B87F0u;
    // 0x1b87f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b87f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b87f4: 0xac221be8  sw          $v0, 0x1BE8($at)
    ctx->pc = 0x1b87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7144), GPR_U32(ctx, 2));
    // 0x1b87f8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1b87fc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b87fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b8800u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b8804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8808: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b880c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8810: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1b8810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8814: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b8818: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1b8818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1b881c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8820: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b8820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8824: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8828: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b882c: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1b882cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b8830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8834: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x1b8834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8838: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1b8838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b883c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b883cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b8840: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1b8840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1b8844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8848: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1b8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b884c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8850: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b8854: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1b8854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1b8858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b885c: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1b885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8860: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8864: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8864u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b8868: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1b8868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1b886c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8870: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b8870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8874: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b8874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8878: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b887c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1b887cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1b8880: 0x8c221be8  lw          $v0, 0x1BE8($at)
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7144)));
    // 0x1b8884: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1b8884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b888c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B888Cu;
    {
        const bool branch_taken_0x1b888c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B888Cu;
            // 0x1b8890: 0x24430014  addiu       $v1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b888c) {
            ctx->pc = 0x1B88B0u;
            goto label_1b88b0;
        }
    }
    ctx->pc = 0x1B8894u;
    // 0x1b8894: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b8898: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b8898u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b889c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b889cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b88a0: 0x0  nop
    ctx->pc = 0x1b88a0u;
    // NOP
    // 0x1b88a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b88a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b88a8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b88a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b88ac: 0x0  nop
    ctx->pc = 0x1b88acu;
    // NOP
label_1b88b0:
    // 0x1b88b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b88b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b88b4: 0x8c231be8  lw          $v1, 0x1BE8($at)
    ctx->pc = 0x1b88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7144)));
    // 0x1b88b8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b88bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b88bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b88c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b88c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b88c4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1b88c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b88c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b88c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b88cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B88CCu;
    {
        const bool branch_taken_0x1b88cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B88D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88CCu;
            // 0x1b88d0: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88cc) {
            ctx->pc = 0x1B88F0u;
            goto label_1b88f0;
        }
    }
    ctx->pc = 0x1B88D4u;
    // 0x1b88d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b88d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b88d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b88dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b88dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b88e0: 0x0  nop
    ctx->pc = 0x1b88e0u;
    // NOP
    // 0x1b88e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b88e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b88e8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b88e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b88ec: 0x0  nop
    ctx->pc = 0x1b88ecu;
    // NOP
label_1b88f0:
    // 0x1b88f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b88f4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1b88f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1b88f8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b88f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b88fc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b88fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b8900: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1B8900u;
    SET_GPR_U32(ctx, 31, 0x1B8908u);
    ctx->pc = 0x1B8904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8900u;
            // 0x1b8904: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8908u; }
        if (ctx->pc != 0x1B8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8908u; }
        if (ctx->pc != 0x1B8908u) { return; }
    }
    ctx->pc = 0x1B8908u;
    // 0x1b8908: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b8908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b890c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8910: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b8910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1b8914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8918: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b8918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1b891c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b8920: 0x10620187  beq         $v1, $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x1B8920u;
    {
        const bool branch_taken_0x1b8920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8920u;
            // 0x1b8924: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8920) {
            ctx->pc = 0x1B8F40u;
            goto label_1b8f40;
        }
    }
    ctx->pc = 0x1B8928u;
    // 0x1b8928: 0x1062014d  beq         $v1, $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x1B8928u;
    {
        const bool branch_taken_0x1b8928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8928) {
            ctx->pc = 0x1B8E60u;
            goto label_1b8e60;
        }
    }
    ctx->pc = 0x1B8930u;
    // 0x1b8930: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8934: 0x10620132  beq         $v1, $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x1B8934u;
    {
        const bool branch_taken_0x1b8934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8934u;
            // 0x1b8938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8934) {
            ctx->pc = 0x1B8E00u;
            goto label_1b8e00;
        }
    }
    ctx->pc = 0x1B893Cu;
    // 0x1b893c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B893Cu;
    {
        const bool branch_taken_0x1b893c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b893c) {
            ctx->pc = 0x1B8958u;
            goto label_1b8958;
        }
    }
    ctx->pc = 0x1B8944u;
    // 0x1b8944: 0x1060018c  beqz        $v1, . + 4 + (0x18C << 2)
    ctx->pc = 0x1B8944u;
    {
        const bool branch_taken_0x1b8944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8944) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B894Cu;
    // 0x1b894c: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x1B894Cu;
    {
        const bool branch_taken_0x1b894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b894c) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8954u;
    // 0x1b8954: 0x0  nop
    ctx->pc = 0x1b8954u;
    // NOP
label_1b8958:
    // 0x1b8958: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8958u;
    SET_GPR_U32(ctx, 31, 0x1B8960u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8960u; }
        if (ctx->pc != 0x1B8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8960u; }
        if (ctx->pc != 0x1B8960u) { return; }
    }
    ctx->pc = 0x1B8960u;
    // 0x1b8960: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8964: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B8964u;
    {
        const bool branch_taken_0x1b8964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8964) {
            ctx->pc = 0x1B8A28u;
            goto label_1b8a28;
        }
    }
    ctx->pc = 0x1B896Cu;
    // 0x1b896c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8970: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b8974: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8974u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8978: 0x0  nop
    ctx->pc = 0x1b8978u;
    // NOP
    // 0x1b897c: 0x0  nop
    ctx->pc = 0x1b897cu;
    // NOP
    // 0x1b8980: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8980u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8984: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1B8984u;
    {
        const bool branch_taken_0x1b8984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8984u;
            // 0x1b8988: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8984) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B898Cu;
    // 0x1b898c: 0x8c221c10  lw          $v0, 0x1C10($at)
    ctx->pc = 0x1b898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x1b8990: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B8990u;
    {
        const bool branch_taken_0x1b8990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8990) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B8998u;
    // 0x1b8998: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b899c: 0x8c221c08  lw          $v0, 0x1C08($at)
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7176)));
    // 0x1b89a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B89A0u;
    {
        const bool branch_taken_0x1b89a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89A0u;
            // 0x1b89a4: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89a0) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B89A8u;
    // 0x1b89a8: 0x8c221c00  lw          $v0, 0x1C00($at)
    ctx->pc = 0x1b89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7168)));
    // 0x1b89ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B89ACu;
    {
        const bool branch_taken_0x1b89ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b89ac) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B89B4u;
    // 0x1b89b4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b89b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b89b8: 0x8c221bf8  lw          $v0, 0x1BF8($at)
    ctx->pc = 0x1b89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7160)));
    // 0x1b89bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B89BCu;
    {
        const bool branch_taken_0x1b89bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89BCu;
            // 0x1b89c0: 0x3c0242f0  lui         $v0, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89bc) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B89C4u;
    // 0x1b89c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b89c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b89cc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B89CCu;
    SET_GPR_U32(ctx, 31, 0x1B89D4u);
    ctx->pc = 0x1B89D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89CCu;
            // 0x1b89d0: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89D4u; }
        if (ctx->pc != 0x1B89D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89D4u; }
        if (ctx->pc != 0x1B89D4u) { return; }
    }
    ctx->pc = 0x1B89D4u;
    // 0x1b89d4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1b89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1b89d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b89dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b89e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B89E0u;
    SET_GPR_U32(ctx, 31, 0x1B89E8u);
    ctx->pc = 0x1B89E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89E0u;
            // 0x1b89e4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89E8u; }
        if (ctx->pc != 0x1B89E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89E8u; }
        if (ctx->pc != 0x1B89E8u) { return; }
    }
    ctx->pc = 0x1B89E8u;
    // 0x1b89e8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1b89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1b89ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b89ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b89f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b89f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B89F4u;
    SET_GPR_U32(ctx, 31, 0x1B89FCu);
    ctx->pc = 0x1B89F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89F4u;
            // 0x1b89f8: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89FCu; }
        if (ctx->pc != 0x1B89FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89FCu; }
        if (ctx->pc != 0x1B89FCu) { return; }
    }
    ctx->pc = 0x1B89FCu;
    // 0x1b89fc: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1b8a00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8a08: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B8A08u;
    SET_GPR_U32(ctx, 31, 0x1B8A10u);
    ctx->pc = 0x1B8A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A08u;
            // 0x1b8a0c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A10u; }
        if (ctx->pc != 0x1B8A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A10u; }
        if (ctx->pc != 0x1B8A10u) { return; }
    }
    ctx->pc = 0x1B8A10u;
label_1b8a10:
    // 0x1b8a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8a18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B8A18u;
    SET_GPR_U32(ctx, 31, 0x1B8A20u);
    ctx->pc = 0x1B8A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A18u;
            // 0x1b8a1c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A20u; }
        if (ctx->pc != 0x1B8A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A20u; }
        if (ctx->pc != 0x1B8A20u) { return; }
    }
    ctx->pc = 0x1B8A20u;
    // 0x1b8a20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B8A20u;
    {
        const bool branch_taken_0x1b8a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a20) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A28u;
label_1b8a28:
    // 0x1b8a28: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8A28u;
    SET_GPR_U32(ctx, 31, 0x1B8A30u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A30u; }
        if (ctx->pc != 0x1B8A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A30u; }
        if (ctx->pc != 0x1B8A30u) { return; }
    }
    ctx->pc = 0x1B8A30u;
    // 0x1b8a30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8a34: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B8A34u;
    {
        const bool branch_taken_0x1b8a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8a34) {
            ctx->pc = 0x1B8AB0u;
            goto label_1b8ab0;
        }
    }
    ctx->pc = 0x1B8A3Cu;
    // 0x1b8a3c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8a40: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1b8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b8a44: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8a44u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8a48: 0x0  nop
    ctx->pc = 0x1b8a48u;
    // NOP
    // 0x1b8a4c: 0x0  nop
    ctx->pc = 0x1b8a4cu;
    // NOP
    // 0x1b8a50: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8a50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8a54: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B8A54u;
    {
        const bool branch_taken_0x1b8a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A54u;
            // 0x1b8a58: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a54) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A5Cu;
    // 0x1b8a5c: 0x8c221c10  lw          $v0, 0x1C10($at)
    ctx->pc = 0x1b8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x1b8a60: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B8A60u;
    {
        const bool branch_taken_0x1b8a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a60) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A68u;
    // 0x1b8a68: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8a6c: 0x8c221c08  lw          $v0, 0x1C08($at)
    ctx->pc = 0x1b8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7176)));
    // 0x1b8a70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B8A70u;
    {
        const bool branch_taken_0x1b8a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A70u;
            // 0x1b8a74: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a70) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A78u;
    // 0x1b8a78: 0x8c221c00  lw          $v0, 0x1C00($at)
    ctx->pc = 0x1b8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7168)));
    // 0x1b8a7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B8A7Cu;
    {
        const bool branch_taken_0x1b8a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a7c) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A84u;
    // 0x1b8a84: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8a88: 0x8c221bf8  lw          $v0, 0x1BF8($at)
    ctx->pc = 0x1b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7160)));
    // 0x1b8a8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B8A8Cu;
    {
        const bool branch_taken_0x1b8a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a8c) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A94u;
    // 0x1b8a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8a98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a9c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8AA4u);
    ctx->pc = 0x1B8AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A9Cu;
            // 0x1b8aa0: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AA4u; }
        if (ctx->pc != 0x1B8AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AA4u; }
        if (ctx->pc != 0x1B8AA4u) { return; }
    }
    ctx->pc = 0x1B8AA4u;
    // 0x1b8aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8AA4u;
    {
        const bool branch_taken_0x1b8aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8aa4) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8AACu;
    // 0x1b8aac: 0x0  nop
    ctx->pc = 0x1b8aacu;
    // NOP
label_1b8ab0:
    // 0x1b8ab0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8AB0u;
    SET_GPR_U32(ctx, 31, 0x1B8AB8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB8u; }
        if (ctx->pc != 0x1B8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB8u; }
        if (ctx->pc != 0x1B8AB8u) { return; }
    }
    ctx->pc = 0x1B8AB8u;
label_1b8ab8:
    // 0x1b8ab8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8abc: 0x8c221c10  lw          $v0, 0x1C10($at)
    ctx->pc = 0x1b8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x1b8ac0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B8AC0u;
    {
        const bool branch_taken_0x1b8ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ac0) {
            ctx->pc = 0x1B8B80u;
            goto label_1b8b80;
        }
    }
    ctx->pc = 0x1B8AC8u;
    // 0x1b8ac8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8acc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b8accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b8ad0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8ad0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8ad4: 0x0  nop
    ctx->pc = 0x1b8ad4u;
    // NOP
    // 0x1b8ad8: 0x0  nop
    ctx->pc = 0x1b8ad8u;
    // NOP
    // 0x1b8adc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8adcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8ae0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B8AE0u;
    {
        const bool branch_taken_0x1b8ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ae0) {
            ctx->pc = 0x1B8B80u;
            goto label_1b8b80;
        }
    }
    ctx->pc = 0x1B8AE8u;
    // 0x1b8ae8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B8AE8u;
    SET_GPR_U32(ctx, 31, 0x1B8AF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF0u; }
        if (ctx->pc != 0x1B8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF0u; }
        if (ctx->pc != 0x1B8AF0u) { return; }
    }
    ctx->pc = 0x1B8AF0u;
    // 0x1b8af0: 0x30510001  andi        $s1, $v0, 0x1
    ctx->pc = 0x1b8af0u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1b8af4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8af8: 0x2626001f  addiu       $a2, $s1, 0x1F
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1b8afc: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8AFCu;
    SET_GPR_U32(ctx, 31, 0x1B8B04u);
    ctx->pc = 0x1B8B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AFCu;
            // 0x1b8b00: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B04u; }
        if (ctx->pc != 0x1B8B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B04u; }
        if (ctx->pc != 0x1B8B04u) { return; }
    }
    ctx->pc = 0x1B8B04u;
    // 0x1b8b04: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8B04u;
    SET_GPR_U32(ctx, 31, 0x1B8B0Cu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B0Cu; }
        if (ctx->pc != 0x1B8B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B0Cu; }
        if (ctx->pc != 0x1B8B0Cu) { return; }
    }
    ctx->pc = 0x1B8B0Cu;
    // 0x1b8b0c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8B0Cu;
    {
        const bool branch_taken_0x1b8b0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B0Cu;
            // 0x1b8b10: 0x26260022  addiu       $a2, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b0c) {
            ctx->pc = 0x1B8B20u;
            goto label_1b8b20;
        }
    }
    ctx->pc = 0x1B8B14u;
    // 0x1b8b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b18: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8B18u;
    SET_GPR_U32(ctx, 31, 0x1B8B20u);
    ctx->pc = 0x1B8B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B18u;
            // 0x1b8b1c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B20u; }
        if (ctx->pc != 0x1B8B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B20u; }
        if (ctx->pc != 0x1B8B20u) { return; }
    }
    ctx->pc = 0x1B8B20u;
label_1b8b20:
    // 0x1b8b20: 0x26260026  addiu       $a2, $s1, 0x26
    ctx->pc = 0x1b8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x1b8b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b28: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8B28u;
    SET_GPR_U32(ctx, 31, 0x1B8B30u);
    ctx->pc = 0x1B8B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B28u;
            // 0x1b8b2c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B30u; }
        if (ctx->pc != 0x1B8B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B30u; }
        if (ctx->pc != 0x1B8B30u) { return; }
    }
    ctx->pc = 0x1B8B30u;
    // 0x1b8b30: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8B30u;
    SET_GPR_U32(ctx, 31, 0x1B8B38u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B38u; }
        if (ctx->pc != 0x1B8B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B38u; }
        if (ctx->pc != 0x1B8B38u) { return; }
    }
    ctx->pc = 0x1B8B38u;
    // 0x1b8b38: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8b3c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8B3Cu;
    {
        const bool branch_taken_0x1b8b3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B3Cu;
            // 0x1b8b40: 0x2626002a  addiu       $a2, $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b3c) {
            ctx->pc = 0x1B8B50u;
            goto label_1b8b50;
        }
    }
    ctx->pc = 0x1B8B44u;
    // 0x1b8b44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b48: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8B48u;
    SET_GPR_U32(ctx, 31, 0x1B8B50u);
    ctx->pc = 0x1B8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B48u;
            // 0x1b8b4c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B50u; }
        if (ctx->pc != 0x1B8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B50u; }
        if (ctx->pc != 0x1B8B50u) { return; }
    }
    ctx->pc = 0x1B8B50u;
label_1b8b50:
    // 0x1b8b50: 0x2626002e  addiu       $a2, $s1, 0x2E
    ctx->pc = 0x1b8b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
    // 0x1b8b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b58: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8B58u;
    SET_GPR_U32(ctx, 31, 0x1B8B60u);
    ctx->pc = 0x1B8B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B58u;
            // 0x1b8b5c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B60u; }
        if (ctx->pc != 0x1B8B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B60u; }
        if (ctx->pc != 0x1B8B60u) { return; }
    }
    ctx->pc = 0x1B8B60u;
    // 0x1b8b60: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8B60u;
    SET_GPR_U32(ctx, 31, 0x1B8B68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B68u; }
        if (ctx->pc != 0x1B8B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B68u; }
        if (ctx->pc != 0x1B8B68u) { return; }
    }
    ctx->pc = 0x1B8B68u;
    // 0x1b8b68: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8b6c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8B6Cu;
    {
        const bool branch_taken_0x1b8b6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B6Cu;
            // 0x1b8b70: 0x26260032  addiu       $a2, $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b6c) {
            ctx->pc = 0x1B8B80u;
            goto label_1b8b80;
        }
    }
    ctx->pc = 0x1B8B74u;
    // 0x1b8b74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b78: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8B78u;
    SET_GPR_U32(ctx, 31, 0x1B8B80u);
    ctx->pc = 0x1B8B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B78u;
            // 0x1b8b7c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B80u; }
        if (ctx->pc != 0x1B8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B80u; }
        if (ctx->pc != 0x1B8B80u) { return; }
    }
    ctx->pc = 0x1B8B80u;
label_1b8b80:
    // 0x1b8b80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8b84: 0x8c221c08  lw          $v0, 0x1C08($at)
    ctx->pc = 0x1b8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7176)));
    // 0x1b8b88: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B8B88u;
    {
        const bool branch_taken_0x1b8b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b88) {
            ctx->pc = 0x1B8C48u;
            goto label_1b8c48;
        }
    }
    ctx->pc = 0x1B8B90u;
    // 0x1b8b90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8b94: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b8b98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8b98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8b9c: 0x0  nop
    ctx->pc = 0x1b8b9cu;
    // NOP
    // 0x1b8ba0: 0x0  nop
    ctx->pc = 0x1b8ba0u;
    // NOP
    // 0x1b8ba4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8ba4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8ba8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B8BA8u;
    {
        const bool branch_taken_0x1b8ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ba8) {
            ctx->pc = 0x1B8C48u;
            goto label_1b8c48;
        }
    }
    ctx->pc = 0x1B8BB0u;
    // 0x1b8bb0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B8BB0u;
    SET_GPR_U32(ctx, 31, 0x1B8BB8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BB8u; }
        if (ctx->pc != 0x1B8BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BB8u; }
        if (ctx->pc != 0x1B8BB8u) { return; }
    }
    ctx->pc = 0x1B8BB8u;
    // 0x1b8bb8: 0x30510001  andi        $s1, $v0, 0x1
    ctx->pc = 0x1b8bb8u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1b8bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bc0: 0x2626001f  addiu       $a2, $s1, 0x1F
    ctx->pc = 0x1b8bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1b8bc4: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8BC4u;
    SET_GPR_U32(ctx, 31, 0x1B8BCCu);
    ctx->pc = 0x1B8BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BC4u;
            // 0x1b8bc8: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BCCu; }
        if (ctx->pc != 0x1B8BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BCCu; }
        if (ctx->pc != 0x1B8BCCu) { return; }
    }
    ctx->pc = 0x1B8BCCu;
    // 0x1b8bcc: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8BCCu;
    SET_GPR_U32(ctx, 31, 0x1B8BD4u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BD4u; }
        if (ctx->pc != 0x1B8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BD4u; }
        if (ctx->pc != 0x1B8BD4u) { return; }
    }
    ctx->pc = 0x1B8BD4u;
    // 0x1b8bd4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8BD4u;
    {
        const bool branch_taken_0x1b8bd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BD4u;
            // 0x1b8bd8: 0x26260022  addiu       $a2, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bd4) {
            ctx->pc = 0x1B8BE8u;
            goto label_1b8be8;
        }
    }
    ctx->pc = 0x1B8BDCu;
    // 0x1b8bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8be0: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8BE0u;
    SET_GPR_U32(ctx, 31, 0x1B8BE8u);
    ctx->pc = 0x1B8BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BE0u;
            // 0x1b8be4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BE8u; }
        if (ctx->pc != 0x1B8BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BE8u; }
        if (ctx->pc != 0x1B8BE8u) { return; }
    }
    ctx->pc = 0x1B8BE8u;
label_1b8be8:
    // 0x1b8be8: 0x26260026  addiu       $a2, $s1, 0x26
    ctx->pc = 0x1b8be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x1b8bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bf0: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8BF0u;
    SET_GPR_U32(ctx, 31, 0x1B8BF8u);
    ctx->pc = 0x1B8BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BF0u;
            // 0x1b8bf4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BF8u; }
        if (ctx->pc != 0x1B8BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BF8u; }
        if (ctx->pc != 0x1B8BF8u) { return; }
    }
    ctx->pc = 0x1B8BF8u;
    // 0x1b8bf8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8BF8u;
    SET_GPR_U32(ctx, 31, 0x1B8C00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C00u; }
        if (ctx->pc != 0x1B8C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C00u; }
        if (ctx->pc != 0x1B8C00u) { return; }
    }
    ctx->pc = 0x1B8C00u;
    // 0x1b8c00: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8c00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8c04: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8C04u;
    {
        const bool branch_taken_0x1b8c04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C04u;
            // 0x1b8c08: 0x2626002a  addiu       $a2, $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c04) {
            ctx->pc = 0x1B8C18u;
            goto label_1b8c18;
        }
    }
    ctx->pc = 0x1B8C0Cu;
    // 0x1b8c0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c10: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8C10u;
    SET_GPR_U32(ctx, 31, 0x1B8C18u);
    ctx->pc = 0x1B8C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C10u;
            // 0x1b8c14: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C18u; }
        if (ctx->pc != 0x1B8C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C18u; }
        if (ctx->pc != 0x1B8C18u) { return; }
    }
    ctx->pc = 0x1B8C18u;
label_1b8c18:
    // 0x1b8c18: 0x2626002e  addiu       $a2, $s1, 0x2E
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
    // 0x1b8c1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c20: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8C20u;
    SET_GPR_U32(ctx, 31, 0x1B8C28u);
    ctx->pc = 0x1B8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C20u;
            // 0x1b8c24: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C28u; }
        if (ctx->pc != 0x1B8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C28u; }
        if (ctx->pc != 0x1B8C28u) { return; }
    }
    ctx->pc = 0x1B8C28u;
    // 0x1b8c28: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8C28u;
    SET_GPR_U32(ctx, 31, 0x1B8C30u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C30u; }
        if (ctx->pc != 0x1B8C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C30u; }
        if (ctx->pc != 0x1B8C30u) { return; }
    }
    ctx->pc = 0x1B8C30u;
    // 0x1b8c30: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8c34: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8C34u;
    {
        const bool branch_taken_0x1b8c34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C34u;
            // 0x1b8c38: 0x26260032  addiu       $a2, $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c34) {
            ctx->pc = 0x1B8C48u;
            goto label_1b8c48;
        }
    }
    ctx->pc = 0x1B8C3Cu;
    // 0x1b8c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c40: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8C40u;
    SET_GPR_U32(ctx, 31, 0x1B8C48u);
    ctx->pc = 0x1B8C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C40u;
            // 0x1b8c44: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C48u; }
        if (ctx->pc != 0x1B8C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C48u; }
        if (ctx->pc != 0x1B8C48u) { return; }
    }
    ctx->pc = 0x1B8C48u;
label_1b8c48:
    // 0x1b8c48: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8c4c: 0x8c221c00  lw          $v0, 0x1C00($at)
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7168)));
    // 0x1b8c50: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B8C50u;
    {
        const bool branch_taken_0x1b8c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c50) {
            ctx->pc = 0x1B8D20u;
            goto label_1b8d20;
        }
    }
    ctx->pc = 0x1B8C58u;
    // 0x1b8c58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8c5c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1b8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b8c60: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8c60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8c64: 0x0  nop
    ctx->pc = 0x1b8c64u;
    // NOP
    // 0x1b8c68: 0x0  nop
    ctx->pc = 0x1b8c68u;
    // NOP
    // 0x1b8c6c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8c6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8c70: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B8C70u;
    {
        const bool branch_taken_0x1b8c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c70) {
            ctx->pc = 0x1B8D20u;
            goto label_1b8d20;
        }
    }
    ctx->pc = 0x1B8C78u;
    // 0x1b8c78: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B8C78u;
    SET_GPR_U32(ctx, 31, 0x1B8C80u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C80u; }
        if (ctx->pc != 0x1B8C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C80u; }
        if (ctx->pc != 0x1B8C80u) { return; }
    }
    ctx->pc = 0x1B8C80u;
    // 0x1b8c80: 0x30510003  andi        $s1, $v0, 0x3
    ctx->pc = 0x1b8c80u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x1b8c84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c88: 0x2626001f  addiu       $a2, $s1, 0x1F
    ctx->pc = 0x1b8c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1b8c8c: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8C94u);
    ctx->pc = 0x1B8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C8Cu;
            // 0x1b8c90: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C94u; }
        if (ctx->pc != 0x1B8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C94u; }
        if (ctx->pc != 0x1B8C94u) { return; }
    }
    ctx->pc = 0x1B8C94u;
    // 0x1b8c94: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8C94u;
    SET_GPR_U32(ctx, 31, 0x1B8C9Cu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C9Cu; }
        if (ctx->pc != 0x1B8C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C9Cu; }
        if (ctx->pc != 0x1B8C9Cu) { return; }
    }
    ctx->pc = 0x1B8C9Cu;
    // 0x1b8c9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8C9Cu;
    {
        const bool branch_taken_0x1b8c9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C9Cu;
            // 0x1b8ca0: 0x26260023  addiu       $a2, $s1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c9c) {
            ctx->pc = 0x1B8CB0u;
            goto label_1b8cb0;
        }
    }
    ctx->pc = 0x1B8CA4u;
    // 0x1b8ca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ca8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8CA8u;
    SET_GPR_U32(ctx, 31, 0x1B8CB0u);
    ctx->pc = 0x1B8CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CA8u;
            // 0x1b8cac: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CB0u; }
        if (ctx->pc != 0x1B8CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CB0u; }
        if (ctx->pc != 0x1B8CB0u) { return; }
    }
    ctx->pc = 0x1B8CB0u;
label_1b8cb0:
    // 0x1b8cb0: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x1b8cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1b8cb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8cb8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8CB8u;
    SET_GPR_U32(ctx, 31, 0x1B8CC0u);
    ctx->pc = 0x1B8CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CB8u;
            // 0x1b8cbc: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC0u; }
        if (ctx->pc != 0x1B8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC0u; }
        if (ctx->pc != 0x1B8CC0u) { return; }
    }
    ctx->pc = 0x1B8CC0u;
    // 0x1b8cc0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8CC0u;
    SET_GPR_U32(ctx, 31, 0x1B8CC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
        if (ctx->pc != 0x1B8CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
        if (ctx->pc != 0x1B8CC8u) { return; }
    }
    ctx->pc = 0x1B8CC8u;
    // 0x1b8cc8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8ccc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8CCCu;
    {
        const bool branch_taken_0x1b8ccc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CCCu;
            // 0x1b8cd0: 0x2626002d  addiu       $a2, $s1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ccc) {
            ctx->pc = 0x1B8CE0u;
            goto label_1b8ce0;
        }
    }
    ctx->pc = 0x1B8CD4u;
    // 0x1b8cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8cd8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8CD8u;
    SET_GPR_U32(ctx, 31, 0x1B8CE0u);
    ctx->pc = 0x1B8CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CD8u;
            // 0x1b8cdc: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CE0u; }
        if (ctx->pc != 0x1B8CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CE0u; }
        if (ctx->pc != 0x1B8CE0u) { return; }
    }
    ctx->pc = 0x1B8CE0u;
label_1b8ce0:
    // 0x1b8ce0: 0x26260032  addiu       $a2, $s1, 0x32
    ctx->pc = 0x1b8ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
    // 0x1b8ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ce8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8CE8u;
    SET_GPR_U32(ctx, 31, 0x1B8CF0u);
    ctx->pc = 0x1B8CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CE8u;
            // 0x1b8cec: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF0u; }
        if (ctx->pc != 0x1B8CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF0u; }
        if (ctx->pc != 0x1B8CF0u) { return; }
    }
    ctx->pc = 0x1B8CF0u;
    // 0x1b8cf0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8CF0u;
    SET_GPR_U32(ctx, 31, 0x1B8CF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF8u; }
        if (ctx->pc != 0x1B8CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF8u; }
        if (ctx->pc != 0x1B8CF8u) { return; }
    }
    ctx->pc = 0x1B8CF8u;
    // 0x1b8cf8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8cfc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8CFCu;
    {
        const bool branch_taken_0x1b8cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CFCu;
            // 0x1b8d00: 0x26260037  addiu       $a2, $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cfc) {
            ctx->pc = 0x1B8D10u;
            goto label_1b8d10;
        }
    }
    ctx->pc = 0x1B8D04u;
    // 0x1b8d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d08: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8D08u;
    SET_GPR_U32(ctx, 31, 0x1B8D10u);
    ctx->pc = 0x1B8D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D08u;
            // 0x1b8d0c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D10u; }
        if (ctx->pc != 0x1B8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D10u; }
        if (ctx->pc != 0x1B8D10u) { return; }
    }
    ctx->pc = 0x1B8D10u;
label_1b8d10:
    // 0x1b8d10: 0x2626003c  addiu       $a2, $s1, 0x3C
    ctx->pc = 0x1b8d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1b8d14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d18: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1B8D18u;
    SET_GPR_U32(ctx, 31, 0x1B8D20u);
    ctx->pc = 0x1B8D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D18u;
            // 0x1b8d1c: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D20u; }
        if (ctx->pc != 0x1B8D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D20u; }
        if (ctx->pc != 0x1B8D20u) { return; }
    }
    ctx->pc = 0x1B8D20u;
label_1b8d20:
    // 0x1b8d20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8d24: 0x8c221bf8  lw          $v0, 0x1BF8($at)
    ctx->pc = 0x1b8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7160)));
    // 0x1b8d28: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x1B8D28u;
    {
        const bool branch_taken_0x1b8d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d28) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8D30u;
    // 0x1b8d30: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8d34: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1b8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b8d38: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8d38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8d3c: 0x0  nop
    ctx->pc = 0x1b8d3cu;
    // NOP
    // 0x1b8d40: 0x0  nop
    ctx->pc = 0x1b8d40u;
    // NOP
    // 0x1b8d44: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8d44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8d48: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1B8D48u;
    {
        const bool branch_taken_0x1b8d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d48) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8D50u;
    // 0x1b8d50: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B8D50u;
    SET_GPR_U32(ctx, 31, 0x1B8D58u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D58u; }
        if (ctx->pc != 0x1B8D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D58u; }
        if (ctx->pc != 0x1B8D58u) { return; }
    }
    ctx->pc = 0x1B8D58u;
    // 0x1b8d58: 0x30510003  andi        $s1, $v0, 0x3
    ctx->pc = 0x1b8d58u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x1b8d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d60: 0x2626001f  addiu       $a2, $s1, 0x1F
    ctx->pc = 0x1b8d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1b8d64: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8D64u;
    SET_GPR_U32(ctx, 31, 0x1B8D6Cu);
    ctx->pc = 0x1B8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D64u;
            // 0x1b8d68: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D6Cu; }
        if (ctx->pc != 0x1B8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D6Cu; }
        if (ctx->pc != 0x1B8D6Cu) { return; }
    }
    ctx->pc = 0x1B8D6Cu;
    // 0x1b8d6c: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D74u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D74u; }
        if (ctx->pc != 0x1B8D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D74u; }
        if (ctx->pc != 0x1B8D74u) { return; }
    }
    ctx->pc = 0x1B8D74u;
    // 0x1b8d74: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8D74u;
    {
        const bool branch_taken_0x1b8d74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D74u;
            // 0x1b8d78: 0x26260023  addiu       $a2, $s1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d74) {
            ctx->pc = 0x1B8D88u;
            goto label_1b8d88;
        }
    }
    ctx->pc = 0x1B8D7Cu;
    // 0x1b8d7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d80: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8D80u;
    SET_GPR_U32(ctx, 31, 0x1B8D88u);
    ctx->pc = 0x1B8D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D80u;
            // 0x1b8d84: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D88u; }
        if (ctx->pc != 0x1B8D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D88u; }
        if (ctx->pc != 0x1B8D88u) { return; }
    }
    ctx->pc = 0x1B8D88u;
label_1b8d88:
    // 0x1b8d88: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1b8d8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d90: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8D90u;
    SET_GPR_U32(ctx, 31, 0x1B8D98u);
    ctx->pc = 0x1B8D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D90u;
            // 0x1b8d94: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D98u; }
        if (ctx->pc != 0x1B8D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D98u; }
        if (ctx->pc != 0x1B8D98u) { return; }
    }
    ctx->pc = 0x1B8D98u;
    // 0x1b8d98: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8D98u;
    SET_GPR_U32(ctx, 31, 0x1B8DA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DA0u; }
        if (ctx->pc != 0x1B8DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DA0u; }
        if (ctx->pc != 0x1B8DA0u) { return; }
    }
    ctx->pc = 0x1B8DA0u;
    // 0x1b8da0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8da4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8DA4u;
    {
        const bool branch_taken_0x1b8da4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DA4u;
            // 0x1b8da8: 0x2626002d  addiu       $a2, $s1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8da4) {
            ctx->pc = 0x1B8DB8u;
            goto label_1b8db8;
        }
    }
    ctx->pc = 0x1B8DACu;
    // 0x1b8dac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8db0: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8DB0u;
    SET_GPR_U32(ctx, 31, 0x1B8DB8u);
    ctx->pc = 0x1B8DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DB0u;
            // 0x1b8db4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DB8u; }
        if (ctx->pc != 0x1B8DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DB8u; }
        if (ctx->pc != 0x1B8DB8u) { return; }
    }
    ctx->pc = 0x1B8DB8u;
label_1b8db8:
    // 0x1b8db8: 0x26260032  addiu       $a2, $s1, 0x32
    ctx->pc = 0x1b8db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
    // 0x1b8dbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8dc0: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8DC0u;
    SET_GPR_U32(ctx, 31, 0x1B8DC8u);
    ctx->pc = 0x1B8DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DC0u;
            // 0x1b8dc4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DC8u; }
        if (ctx->pc != 0x1B8DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DC8u; }
        if (ctx->pc != 0x1B8DC8u) { return; }
    }
    ctx->pc = 0x1B8DC8u;
    // 0x1b8dc8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B8DC8u;
    SET_GPR_U32(ctx, 31, 0x1B8DD0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DD0u; }
        if (ctx->pc != 0x1B8DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DD0u; }
        if (ctx->pc != 0x1B8DD0u) { return; }
    }
    ctx->pc = 0x1B8DD0u;
    // 0x1b8dd0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b8dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8dd4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8DD4u;
    {
        const bool branch_taken_0x1b8dd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DD4u;
            // 0x1b8dd8: 0x26260037  addiu       $a2, $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dd4) {
            ctx->pc = 0x1B8DE8u;
            goto label_1b8de8;
        }
    }
    ctx->pc = 0x1B8DDCu;
    // 0x1b8ddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8de0: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8DE0u;
    SET_GPR_U32(ctx, 31, 0x1B8DE8u);
    ctx->pc = 0x1B8DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DE0u;
            // 0x1b8de4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DE8u; }
        if (ctx->pc != 0x1B8DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DE8u; }
        if (ctx->pc != 0x1B8DE8u) { return; }
    }
    ctx->pc = 0x1B8DE8u;
label_1b8de8:
    // 0x1b8de8: 0x2626003c  addiu       $a2, $s1, 0x3C
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1b8dec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8df0: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1B8DF0u;
    SET_GPR_U32(ctx, 31, 0x1B8DF8u);
    ctx->pc = 0x1B8DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DF0u;
            // 0x1b8df4: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DF8u; }
        if (ctx->pc != 0x1B8DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DF8u; }
        if (ctx->pc != 0x1B8DF8u) { return; }
    }
    ctx->pc = 0x1B8DF8u;
    // 0x1b8df8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1B8DF8u;
    {
        const bool branch_taken_0x1b8df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8df8) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8E00u;
label_1b8e00:
    // 0x1b8e00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8e04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b8e08: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8e08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8e0c: 0x0  nop
    ctx->pc = 0x1b8e0cu;
    // NOP
    // 0x1b8e10: 0x0  nop
    ctx->pc = 0x1b8e10u;
    // NOP
    // 0x1b8e14: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8e14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8e18: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8E18u;
    {
        const bool branch_taken_0x1b8e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e18) {
            ctx->pc = 0x1B8E48u;
            goto label_1b8e48;
        }
    }
    ctx->pc = 0x1B8E20u;
    // 0x1b8e20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8e24: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b8e28: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B8E28u;
    SET_GPR_U32(ctx, 31, 0x1B8E30u);
    ctx->pc = 0x1B8E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E28u;
            // 0x1b8e2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E30u; }
        if (ctx->pc != 0x1B8E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E30u; }
        if (ctx->pc != 0x1B8E30u) { return; }
    }
    ctx->pc = 0x1B8E30u;
    // 0x1b8e30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8e34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e38: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b8e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b8e3c: 0xc065198  jal         func_194660
    ctx->pc = 0x1B8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E44u);
    ctx->pc = 0x1B8E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E3Cu;
            // 0x1b8e40: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194660u;
    if (runtime->hasFunction(0x194660u)) {
        auto targetFn = runtime->lookupFunction(0x194660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E44u; }
        if (ctx->pc != 0x1B8E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_Dammy_0x194660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E44u; }
        if (ctx->pc != 0x1B8E44u) { return; }
    }
    ctx->pc = 0x1B8E44u;
    // 0x1b8e44: 0x0  nop
    ctx->pc = 0x1b8e44u;
    // NOP
label_1b8e48:
    // 0x1b8e48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e50: 0xc06515c  jal         func_194570
    ctx->pc = 0x1B8E50u;
    SET_GPR_U32(ctx, 31, 0x1B8E58u);
    ctx->pc = 0x1B8E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E50u;
            // 0x1b8e54: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194570u;
    if (runtime->hasFunction(0x194570u)) {
        auto targetFn = runtime->lookupFunction(0x194570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E58u; }
        if (ctx->pc != 0x1B8E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_LC_0x194570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E58u; }
        if (ctx->pc != 0x1B8E58u) { return; }
    }
    ctx->pc = 0x1B8E58u;
    // 0x1b8e58: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1B8E58u;
    {
        const bool branch_taken_0x1b8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e58) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8E60u;
label_1b8e60:
    // 0x1b8e60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8e64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8e68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8e68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8e6c: 0x0  nop
    ctx->pc = 0x1b8e6cu;
    // NOP
    // 0x1b8e70: 0x0  nop
    ctx->pc = 0x1b8e70u;
    // NOP
    // 0x1b8e74: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8e74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8e78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8E78u;
    {
        const bool branch_taken_0x1b8e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e78) {
            ctx->pc = 0x1B8E90u;
            goto label_1b8e90;
        }
    }
    ctx->pc = 0x1B8E80u;
    // 0x1b8e80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8e84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e88: 0xc065138  jal         func_1944E0
    ctx->pc = 0x1B8E88u;
    SET_GPR_U32(ctx, 31, 0x1B8E90u);
    ctx->pc = 0x1B8E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E88u;
            // 0x1b8e8c: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944E0u;
    if (runtime->hasFunction(0x1944E0u)) {
        auto targetFn = runtime->lookupFunction(0x1944E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E90u; }
        if (ctx->pc != 0x1B8E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_LCADD_0x1944e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E90u; }
        if (ctx->pc != 0x1B8E90u) { return; }
    }
    ctx->pc = 0x1B8E90u;
label_1b8e90:
    // 0x1b8e90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8e94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b8e98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8e98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8e9c: 0x0  nop
    ctx->pc = 0x1b8e9cu;
    // NOP
    // 0x1b8ea0: 0x0  nop
    ctx->pc = 0x1b8ea0u;
    // NOP
    // 0x1b8ea4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8ea4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8ea8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B8EA8u;
    {
        const bool branch_taken_0x1b8ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ea8) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8EB0u;
    // 0x1b8eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8eb4: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x1b8eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b8eb8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B8EB8u;
    SET_GPR_U32(ctx, 31, 0x1B8EC0u);
    ctx->pc = 0x1B8EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EB8u;
            // 0x1b8ebc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EC0u; }
        if (ctx->pc != 0x1B8EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EC0u; }
        if (ctx->pc != 0x1B8EC0u) { return; }
    }
    ctx->pc = 0x1B8EC0u;
    // 0x1b8ec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ecc: 0xc065458  jal         func_195160
    ctx->pc = 0x1B8ECCu;
    SET_GPR_U32(ctx, 31, 0x1B8ED4u);
    ctx->pc = 0x1B8ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8ECCu;
            // 0x1b8ed0: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8ED4u; }
        if (ctx->pc != 0x1B8ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8ED4u; }
        if (ctx->pc != 0x1B8ED4u) { return; }
    }
    ctx->pc = 0x1B8ED4u;
    // 0x1b8ed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ee0: 0xc065458  jal         func_195160
    ctx->pc = 0x1B8EE0u;
    SET_GPR_U32(ctx, 31, 0x1B8EE8u);
    ctx->pc = 0x1B8EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EE0u;
            // 0x1b8ee4: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EE8u; }
        if (ctx->pc != 0x1B8EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EE8u; }
        if (ctx->pc != 0x1B8EE8u) { return; }
    }
    ctx->pc = 0x1B8EE8u;
    // 0x1b8ee8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ef4: 0xc065458  jal         func_195160
    ctx->pc = 0x1B8EF4u;
    SET_GPR_U32(ctx, 31, 0x1B8EFCu);
    ctx->pc = 0x1B8EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EF4u;
            // 0x1b8ef8: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EFCu; }
        if (ctx->pc != 0x1B8EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EFCu; }
        if (ctx->pc != 0x1B8EFCu) { return; }
    }
    ctx->pc = 0x1B8EFCu;
    // 0x1b8efc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8f00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f08: 0xc065458  jal         func_195160
    ctx->pc = 0x1B8F08u;
    SET_GPR_U32(ctx, 31, 0x1B8F10u);
    ctx->pc = 0x1B8F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F08u;
            // 0x1b8f0c: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F10u; }
        if (ctx->pc != 0x1B8F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F10u; }
        if (ctx->pc != 0x1B8F10u) { return; }
    }
    ctx->pc = 0x1B8F10u;
    // 0x1b8f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8f14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f1c: 0xc065458  jal         func_195160
    ctx->pc = 0x1B8F1Cu;
    SET_GPR_U32(ctx, 31, 0x1B8F24u);
    ctx->pc = 0x1B8F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F1Cu;
            // 0x1b8f20: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F24u; }
        if (ctx->pc != 0x1B8F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F24u; }
        if (ctx->pc != 0x1B8F24u) { return; }
    }
    ctx->pc = 0x1B8F24u;
    // 0x1b8f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f2c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b8f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b8f30: 0xc0651cc  jal         func_194730
    ctx->pc = 0x1B8F30u;
    SET_GPR_U32(ctx, 31, 0x1B8F38u);
    ctx->pc = 0x1B8F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F30u;
            // 0x1b8f34: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194730u;
    if (runtime->hasFunction(0x194730u)) {
        auto targetFn = runtime->lookupFunction(0x194730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F38u; }
        if (ctx->pc != 0x1B8F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_0x194730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F38u; }
        if (ctx->pc != 0x1B8F38u) { return; }
    }
    ctx->pc = 0x1B8F38u;
    // 0x1b8f38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B8F38u;
    {
        const bool branch_taken_0x1b8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f38) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8F40u;
label_1b8f40:
    // 0x1b8f40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8f44: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b8f48: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8f48u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8f4c: 0x0  nop
    ctx->pc = 0x1b8f4cu;
    // NOP
    // 0x1b8f50: 0x0  nop
    ctx->pc = 0x1b8f50u;
    // NOP
    // 0x1b8f54: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8f54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8f58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8F58u;
    {
        const bool branch_taken_0x1b8f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f58) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8F60u;
    // 0x1b8f60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f68: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b8f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b8f6c: 0xc065198  jal         func_194660
    ctx->pc = 0x1B8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B8F74u);
    ctx->pc = 0x1B8F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F6Cu;
            // 0x1b8f70: 0x2445fa74  addiu       $a1, $v0, -0x58C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194660u;
    if (runtime->hasFunction(0x194660u)) {
        auto targetFn = runtime->lookupFunction(0x194660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F74u; }
        if (ctx->pc != 0x1B8F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_Dammy_0x194660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F74u; }
        if (ctx->pc != 0x1B8F74u) { return; }
    }
    ctx->pc = 0x1B8F74u;
    // 0x1b8f74: 0x0  nop
    ctx->pc = 0x1b8f74u;
    // NOP
label_1b8f78:
    // 0x1b8f78: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1B8F78u;
    SET_GPR_U32(ctx, 31, 0x1B8F80u);
    ctx->pc = 0x1B8F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F78u;
            // 0x1b8f7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F80u; }
        if (ctx->pc != 0x1B8F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F80u; }
        if (ctx->pc != 0x1B8F80u) { return; }
    }
    ctx->pc = 0x1B8F80u;
    // 0x1b8f80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8f84: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b8f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8f88: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1B8F88u;
    SET_GPR_U32(ctx, 31, 0x1B8F90u);
    ctx->pc = 0x1B8F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F88u;
            // 0x1b8f8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F90u; }
        if (ctx->pc != 0x1B8F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F90u; }
        if (ctx->pc != 0x1B8F90u) { return; }
    }
    ctx->pc = 0x1B8F90u;
    // 0x1b8f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8f94: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8f98: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1B8F98u;
    SET_GPR_U32(ctx, 31, 0x1B8FA0u);
    ctx->pc = 0x1B8F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F98u;
            // 0x1b8f9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FA0u; }
        if (ctx->pc != 0x1B8FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FA0u; }
        if (ctx->pc != 0x1B8FA0u) { return; }
    }
    ctx->pc = 0x1B8FA0u;
    // 0x1b8fa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8fa4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b8fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8fa8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1B8FA8u;
    SET_GPR_U32(ctx, 31, 0x1B8FB0u);
    ctx->pc = 0x1B8FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FA8u;
            // 0x1b8fac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FB0u; }
        if (ctx->pc != 0x1B8FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FB0u; }
        if (ctx->pc != 0x1B8FB0u) { return; }
    }
    ctx->pc = 0x1B8FB0u;
    // 0x1b8fb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8fb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b8fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fb8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1B8FB8u;
    SET_GPR_U32(ctx, 31, 0x1B8FC0u);
    ctx->pc = 0x1B8FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FB8u;
            // 0x1b8fbc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FC0u; }
        if (ctx->pc != 0x1B8FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FC0u; }
        if (ctx->pc != 0x1B8FC0u) { return; }
    }
    ctx->pc = 0x1B8FC0u;
    // 0x1b8fc0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b8fc4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b8fc8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b8fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b8fcc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B8FCCu;
    {
        const bool branch_taken_0x1b8fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8fcc) {
            ctx->pc = 0x1B9020u;
            goto label_1b9020;
        }
    }
    ctx->pc = 0x1B8FD4u;
    // 0x1b8fd4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1b8fd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8FD8u;
    {
        const bool branch_taken_0x1b8fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8fd8) {
            ctx->pc = 0x1B8FF0u;
            goto label_1b8ff0;
        }
    }
    ctx->pc = 0x1B8FE0u;
    // 0x1b8fe0: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1B8FE0u;
    SET_GPR_U32(ctx, 31, 0x1B8FE8u);
    ctx->pc = 0x1B8FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FE0u;
            // 0x1b8fe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FE8u; }
        if (ctx->pc != 0x1B8FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FE8u; }
        if (ctx->pc != 0x1B8FE8u) { return; }
    }
    ctx->pc = 0x1B8FE8u;
    // 0x1b8fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8FE8u;
    {
        const bool branch_taken_0x1b8fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8fe8) {
            ctx->pc = 0x1B8FF8u;
            goto label_1b8ff8;
        }
    }
    ctx->pc = 0x1B8FF0u;
label_1b8ff0:
    // 0x1b8ff0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1B8FF0u;
    SET_GPR_U32(ctx, 31, 0x1B8FF8u);
    ctx->pc = 0x1B8FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FF0u;
            // 0x1b8ff4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FF8u; }
        if (ctx->pc != 0x1B8FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FF8u; }
        if (ctx->pc != 0x1B8FF8u) { return; }
    }
    ctx->pc = 0x1B8FF8u;
label_1b8ff8:
    // 0x1b8ff8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1b8ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8FFCu;
    {
        const bool branch_taken_0x1b8ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ffc) {
            ctx->pc = 0x1B9010u;
            goto label_1b9010;
        }
    }
    ctx->pc = 0x1B9004u;
    // 0x1b9004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B9004u;
    {
        const bool branch_taken_0x1b9004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9004u;
            // 0x1b9008: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9004) {
            ctx->pc = 0x1B9030u;
            goto label_1b9030;
        }
    }
    ctx->pc = 0x1B900Cu;
    // 0x1b900c: 0x0  nop
    ctx->pc = 0x1b900cu;
    // NOP
label_1b9010:
    // 0x1b9010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9014u;
    {
        const bool branch_taken_0x1b9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9014u;
            // 0x1b9018: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9014) {
            ctx->pc = 0x1B9030u;
            goto label_1b9030;
        }
    }
    ctx->pc = 0x1B901Cu;
    // 0x1b901c: 0x0  nop
    ctx->pc = 0x1b901cu;
    // NOP
label_1b9020:
    // 0x1b9020: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1B9020u;
    SET_GPR_U32(ctx, 31, 0x1B9028u);
    ctx->pc = 0x1B9024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9020u;
            // 0x1b9024: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9028u; }
        if (ctx->pc != 0x1B9028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9028u; }
        if (ctx->pc != 0x1B9028u) { return; }
    }
    ctx->pc = 0x1B9028u;
    // 0x1b9028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b902c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b902cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b9030:
    // 0x1b9030: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9034: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b9034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1b9038: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b903c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B903Cu;
    {
        const bool branch_taken_0x1b903c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b903c) {
            ctx->pc = 0x1B9050u;
            goto label_1b9050;
        }
    }
    ctx->pc = 0x1B9044u;
    // 0x1b9044: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b9048: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B9048u;
    {
        const bool branch_taken_0x1b9048 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b9048) {
            ctx->pc = 0x1B90C0u;
            goto label_1b90c0;
        }
    }
    ctx->pc = 0x1B9050u;
label_1b9050:
    // 0x1b9050: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b9054: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b9054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b9058: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b9058u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b905c: 0x0  nop
    ctx->pc = 0x1b905cu;
    // NOP
    // 0x1b9060: 0x0  nop
    ctx->pc = 0x1b9060u;
    // NOP
    // 0x1b9064: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9064u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9068: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9068u;
    {
        const bool branch_taken_0x1b9068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9068) {
            ctx->pc = 0x1B9088u;
            goto label_1b9088;
        }
    }
    ctx->pc = 0x1B9070u;
    // 0x1b9070: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b9070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b9074: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9078: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b907c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1B907Cu;
    SET_GPR_U32(ctx, 31, 0x1B9084u);
    ctx->pc = 0x1B9080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B907Cu;
            // 0x1b9080: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9084u; }
        if (ctx->pc != 0x1B9084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9084u; }
        if (ctx->pc != 0x1B9084u) { return; }
    }
    ctx->pc = 0x1B9084u;
    // 0x1b9084: 0x0  nop
    ctx->pc = 0x1b9084u;
    // NOP
label_1b9088:
    // 0x1b9088: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b9088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b908c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9090: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9094: 0xac221bf0  sw          $v0, 0x1BF0($at)
    ctx->pc = 0x1b9094u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7152), GPR_U32(ctx, 2));
    // 0x1b9098: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1B9098u;
    SET_GPR_U32(ctx, 31, 0x1B90A0u);
    ctx->pc = 0x1B909Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9098u;
            // 0x1b909c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90A0u; }
        if (ctx->pc != 0x1B90A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90A0u; }
        if (ctx->pc != 0x1B90A0u) { return; }
    }
    ctx->pc = 0x1B90A0u;
    // 0x1b90a0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1b90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b90a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b90a8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1b90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1b90ac: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1b90acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b90b0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1B90B0u;
    SET_GPR_U32(ctx, 31, 0x1B90B8u);
    ctx->pc = 0x1B90B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90B0u;
            // 0x1b90b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90B8u; }
        if (ctx->pc != 0x1B90B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90B8u; }
        if (ctx->pc != 0x1B90B8u) { return; }
    }
    ctx->pc = 0x1B90B8u;
    // 0x1b90b8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B90B8u;
    {
        const bool branch_taken_0x1b90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b90b8) {
            ctx->pc = 0x1B91D0u;
            goto label_1b91d0;
        }
    }
    ctx->pc = 0x1B90C0u;
label_1b90c0:
    // 0x1b90c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1b90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b90c4: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b90c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b90c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b90cc: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b90ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1b90d0: 0x24c67f10  addiu       $a2, $a2, 0x7F10
    ctx->pc = 0x1b90d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32528));
    // 0x1b90d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b90d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b90d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90dc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1b90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b90e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b90e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b90e4: 0x0  nop
    ctx->pc = 0x1b90e4u;
    // NOP
    // 0x1b90e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b90e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b90ec: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b90ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1b90f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b90f4: 0x2442fa36  addiu       $v0, $v0, -0x5CA
    ctx->pc = 0x1b90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965814));
    // 0x1b90f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b90f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b90fc: 0x0  nop
    ctx->pc = 0x1b90fcu;
    // NOP
    // 0x1b9100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9104: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1b9104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1b9108: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1b9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b910c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1b9110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9114: 0x0  nop
    ctx->pc = 0x1b9114u;
    // NOP
    // 0x1b9118: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b911c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1b911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1b9120: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b9124: 0x2442fa76  addiu       $v0, $v0, -0x58A
    ctx->pc = 0x1b9124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965878));
    // 0x1b9128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b912c: 0x0  nop
    ctx->pc = 0x1b912cu;
    // NOP
    // 0x1b9130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9134: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1B9134u;
    SET_GPR_U32(ctx, 31, 0x1B913Cu);
    ctx->pc = 0x1B9138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9134u;
            // 0x1b9138: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B913Cu; }
        if (ctx->pc != 0x1B913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B913Cu; }
        if (ctx->pc != 0x1B913Cu) { return; }
    }
    ctx->pc = 0x1B913Cu;
    // 0x1b913c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1b913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b9140: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b9140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b9144: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b9144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9148: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1b9148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1b914c: 0x24c67f10  addiu       $a2, $a2, 0x7F10
    ctx->pc = 0x1b914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32528));
    // 0x1b9150: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9154: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b9154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9158: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1b915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9160: 0x0  nop
    ctx->pc = 0x1b9160u;
    // NOP
    // 0x1b9164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9168: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1b9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1b916c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b9170: 0x2442fa16  addiu       $v0, $v0, -0x5EA
    ctx->pc = 0x1b9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965782));
    // 0x1b9174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9178: 0x0  nop
    ctx->pc = 0x1b9178u;
    // NOP
    // 0x1b917c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b917cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9180: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1b9180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1b9184: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1b9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b9188: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1b9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1b918c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b918cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9190: 0x0  nop
    ctx->pc = 0x1b9190u;
    // NOP
    // 0x1b9194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9198: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1b9198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1b919c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b91a0: 0x2442fa36  addiu       $v0, $v0, -0x5CA
    ctx->pc = 0x1b91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965814));
    // 0x1b91a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b91a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b91a8: 0x0  nop
    ctx->pc = 0x1b91a8u;
    // NOP
    // 0x1b91ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b91acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b91b0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1B91B0u;
    SET_GPR_U32(ctx, 31, 0x1B91B8u);
    ctx->pc = 0x1B91B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91B0u;
            // 0x1b91b4: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91B8u; }
        if (ctx->pc != 0x1B91B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91B8u; }
        if (ctx->pc != 0x1B91B8u) { return; }
    }
    ctx->pc = 0x1B91B8u;
    // 0x1b91b8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1b91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b91bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B91BCu;
    {
        const bool branch_taken_0x1b91bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b91bc) {
            ctx->pc = 0x1B91D0u;
            goto label_1b91d0;
        }
    }
    ctx->pc = 0x1B91C4u;
    // 0x1b91c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b91c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b91cc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1b91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1b91d0:
    // 0x1b91d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b91d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b91d8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1b91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1b91dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b91dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b91e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b91e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b91e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b91e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B91E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B91ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91E8u;
            // 0x1b91ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B88B0u: goto label_1b88b0;
            case 0x1B88F0u: goto label_1b88f0;
            case 0x1B8958u: goto label_1b8958;
            case 0x1B8A10u: goto label_1b8a10;
            case 0x1B8A28u: goto label_1b8a28;
            case 0x1B8AB0u: goto label_1b8ab0;
            case 0x1B8AB8u: goto label_1b8ab8;
            case 0x1B8B20u: goto label_1b8b20;
            case 0x1B8B50u: goto label_1b8b50;
            case 0x1B8B80u: goto label_1b8b80;
            case 0x1B8BE8u: goto label_1b8be8;
            case 0x1B8C18u: goto label_1b8c18;
            case 0x1B8C48u: goto label_1b8c48;
            case 0x1B8CB0u: goto label_1b8cb0;
            case 0x1B8CE0u: goto label_1b8ce0;
            case 0x1B8D10u: goto label_1b8d10;
            case 0x1B8D20u: goto label_1b8d20;
            case 0x1B8D88u: goto label_1b8d88;
            case 0x1B8DB8u: goto label_1b8db8;
            case 0x1B8DE8u: goto label_1b8de8;
            case 0x1B8E00u: goto label_1b8e00;
            case 0x1B8E48u: goto label_1b8e48;
            case 0x1B8E60u: goto label_1b8e60;
            case 0x1B8E90u: goto label_1b8e90;
            case 0x1B8F40u: goto label_1b8f40;
            case 0x1B8F78u: goto label_1b8f78;
            case 0x1B8FF0u: goto label_1b8ff0;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B9010u: goto label_1b9010;
            case 0x1B9020u: goto label_1b9020;
            case 0x1B9030u: goto label_1b9030;
            case 0x1B9050u: goto label_1b9050;
            case 0x1B9088u: goto label_1b9088;
            case 0x1B90C0u: goto label_1b90c0;
            case 0x1B91D0u: goto label_1b91d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B91F0u;
}
