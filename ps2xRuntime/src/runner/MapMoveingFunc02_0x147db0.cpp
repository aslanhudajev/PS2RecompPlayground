#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc02
// Address: 0x147db0 - 0x147f28
void MapMoveingFunc02_0x147db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc02_0x147db0");
#endif

    ctx->pc = 0x147db0u;

    // 0x147db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147db4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x147db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x147db8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147dc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147dc8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x147dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x147dcc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x147DCCu;
    SET_GPR_U32(ctx, 31, 0x147DD4u);
    ctx->pc = 0x147DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147DCCu;
            // 0x147dd0: 0xdc259518  ld          $a1, -0x6AE8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294939928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DD4u; }
        if (ctx->pc != 0x147DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DD4u; }
        if (ctx->pc != 0x147DD4u) { return; }
    }
    ctx->pc = 0x147DD4u;
    // 0x147dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147dd8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x147DD8u;
    SET_GPR_U32(ctx, 31, 0x147DE0u);
    ctx->pc = 0x147DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147DD8u;
            // 0x147ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DE0u; }
        if (ctx->pc != 0x147DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DE0u; }
        if (ctx->pc != 0x147DE0u) { return; }
    }
    ctx->pc = 0x147DE0u;
    // 0x147de0: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x147de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147de4: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x147de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x147de8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x147de8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x147dec: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x147decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x147df0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x147df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147df4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x147df4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147df8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147dfc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147dfcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147e00: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x147e00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x147e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e08: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x147e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x147e0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147e10: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x147e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147e14: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x147e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x147e18: 0xe4610124  swc1        $f1, 0x124($v1)
    ctx->pc = 0x147e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x147e1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x147e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147e20: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x147e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147E28u;
    {
        const bool branch_taken_0x147e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E28u;
            // 0x147e2c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e28) {
            ctx->pc = 0x147E48u;
            goto label_147e48;
        }
    }
    ctx->pc = 0x147E30u;
    // 0x147e30: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147e34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147e34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e3c: 0x0  nop
    ctx->pc = 0x147e3cu;
    // NOP
    // 0x147e40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147e44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x147e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_147e48:
    // 0x147e48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147e4c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147e50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147e50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e58: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147e5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147E60u;
    {
        const bool branch_taken_0x147e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E60u;
            // 0x147e64: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e60) {
            ctx->pc = 0x147E80u;
            goto label_147e80;
        }
    }
    ctx->pc = 0x147E68u;
    // 0x147e68: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147e6c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147e6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147e70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e74: 0x0  nop
    ctx->pc = 0x147e74u;
    // NOP
    // 0x147e78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147e7c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147e80:
    // 0x147e80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147e84: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147e88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147e88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e90: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147e94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147E98u;
    {
        const bool branch_taken_0x147e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E98u;
            // 0x147e9c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e98) {
            ctx->pc = 0x147EB8u;
            goto label_147eb8;
        }
    }
    ctx->pc = 0x147EA0u;
    // 0x147ea0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147ea4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147ea4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147eac: 0x0  nop
    ctx->pc = 0x147eacu;
    // NOP
    // 0x147eb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147eb4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147eb8:
    // 0x147eb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147ebc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147ec0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147ec0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ec8: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147ecc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147ed0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147ED0u;
    {
        const bool branch_taken_0x147ed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147ED0u;
            // 0x147ed4: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ed0) {
            ctx->pc = 0x147EF0u;
            goto label_147ef0;
        }
    }
    ctx->pc = 0x147ED8u;
    // 0x147ed8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147edc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147edcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ee4: 0x0  nop
    ctx->pc = 0x147ee4u;
    // NOP
    // 0x147ee8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147eec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147ef0:
    // 0x147ef0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147ef4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x147ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x147ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147efc: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x147efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x147F04u;
    {
        const bool branch_taken_0x147f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147F04u;
            // 0x147f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f04) {
            ctx->pc = 0x147F18u;
            goto label_147f18;
        }
    }
    ctx->pc = 0x147F0Cu;
    // 0x147f0c: 0xc053348  jal         func_14CD20
    ctx->pc = 0x147F0Cu;
    SET_GPR_U32(ctx, 31, 0x147F14u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F14u; }
        if (ctx->pc != 0x147F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F14u; }
        if (ctx->pc != 0x147F14u) { return; }
    }
    ctx->pc = 0x147F14u;
    // 0x147f14: 0x0  nop
    ctx->pc = 0x147f14u;
    // NOP
label_147f18:
    // 0x147f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147f20: 0x3e00008  jr          $ra
    ctx->pc = 0x147F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147F20u;
            // 0x147f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147E48u: goto label_147e48;
            case 0x147E80u: goto label_147e80;
            case 0x147EB8u: goto label_147eb8;
            case 0x147EF0u: goto label_147ef0;
            case 0x147F18u: goto label_147f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147F28u;
}
