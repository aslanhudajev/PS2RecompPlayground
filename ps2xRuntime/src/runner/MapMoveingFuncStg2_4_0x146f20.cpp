#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg2_4
// Address: 0x146f20 - 0x1470e8
void MapMoveingFuncStg2_4_0x146f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg2_4_0x146f20");
#endif

    ctx->pc = 0x146f20u;

    // 0x146f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146f24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x146f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x146f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x146f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146f30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146f34: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146f38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f40: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x146f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146f48: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x146f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x146f4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146f50: 0xc4209d00  lwc1        $f0, -0x6300($at)
    ctx->pc = 0x146f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f54: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x146f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f58: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146f5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146f60: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x146f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x146f64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x146f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146f68: 0xc4209cf8  lwc1        $f0, -0x6308($at)
    ctx->pc = 0x146f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f6c: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x146F6Cu;
    SET_GPR_U32(ctx, 31, 0x146F74u);
    ctx->pc = 0x146F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F6Cu;
            // 0x146f70: 0xe4400118  swc1        $f0, 0x118($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F74u; }
        if (ctx->pc != 0x146F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F74u; }
        if (ctx->pc != 0x146F74u) { return; }
    }
    ctx->pc = 0x146F74u;
    // 0x146f74: 0x28410258  slti        $at, $v0, 0x258
    ctx->pc = 0x146f74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x146f78: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x146F78u;
    {
        const bool branch_taken_0x146f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f78) {
            ctx->pc = 0x146FA0u;
            goto label_146fa0;
        }
    }
    ctx->pc = 0x146F80u;
    // 0x146f80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146f84: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x146f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x146f88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x146f88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x146f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146f90: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x146f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146f98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x146F98u;
    {
        const bool branch_taken_0x146f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146F98u;
            // 0x146f9c: 0xe4800128  swc1        $f0, 0x128($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f98) {
            ctx->pc = 0x146FD0u;
            goto label_146fd0;
        }
    }
    ctx->pc = 0x146FA0u;
label_146fa0:
    // 0x146fa0: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x146FA0u;
    SET_GPR_U32(ctx, 31, 0x146FA8u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FA8u; }
        if (ctx->pc != 0x146FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FA8u; }
        if (ctx->pc != 0x146FA8u) { return; }
    }
    ctx->pc = 0x146FA8u;
    // 0x146fa8: 0x28430578  slti        $v1, $v0, 0x578
    ctx->pc = 0x146fa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1400) ? 1 : 0);
    // 0x146fac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146FACu;
    {
        const bool branch_taken_0x146fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146fac) {
            ctx->pc = 0x146FD0u;
            goto label_146fd0;
        }
    }
    ctx->pc = 0x146FB4u;
    // 0x146fb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146fb8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x146fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x146fbc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x146fbcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x146fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146fc4: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x146fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146fc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146fcc: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x146fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_146fd0:
    // 0x146fd0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x146fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146fd4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x146fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x146fd8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146fd8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146fe0: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x146fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146fe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146fe8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x146FE8u;
    {
        const bool branch_taken_0x146fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146FE8u;
            // 0x146fec: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fe8) {
            ctx->pc = 0x147008u;
            goto label_147008;
        }
    }
    ctx->pc = 0x146FF0u;
    // 0x146ff0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x146ff4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x146ff4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x146ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146ffc: 0x0  nop
    ctx->pc = 0x146ffcu;
    // NOP
    // 0x147000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147004: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147008:
    // 0x147008: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14700c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147010: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147010u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147018: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14701c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14701cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147020: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147020u;
    {
        const bool branch_taken_0x147020 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147020u;
            // 0x147024: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147020) {
            ctx->pc = 0x147040u;
            goto label_147040;
        }
    }
    ctx->pc = 0x147028u;
    // 0x147028: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14702c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14702cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147034: 0x0  nop
    ctx->pc = 0x147034u;
    // NOP
    // 0x147038: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14703c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147040:
    // 0x147040: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147044: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147048: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147048u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14704c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14704cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147050: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147058: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147058u;
    {
        const bool branch_taken_0x147058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147058u;
            // 0x14705c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147058) {
            ctx->pc = 0x147078u;
            goto label_147078;
        }
    }
    ctx->pc = 0x147060u;
    // 0x147060: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147064: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147064u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14706c: 0x0  nop
    ctx->pc = 0x14706cu;
    // NOP
    // 0x147070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147074: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147078:
    // 0x147078: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14707c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147080: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147080u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147088: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14708c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14708cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147090: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147090u;
    {
        const bool branch_taken_0x147090 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147090u;
            // 0x147094: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147090) {
            ctx->pc = 0x1470B0u;
            goto label_1470b0;
        }
    }
    ctx->pc = 0x147098u;
    // 0x147098: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14709c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14709cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1470a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1470a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1470a4: 0x0  nop
    ctx->pc = 0x1470a4u;
    // NOP
    // 0x1470a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1470a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1470ac: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1470acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1470b0:
    // 0x1470b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1470b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1470b4: 0x3c034454  lui         $v1, 0x4454
    ctx->pc = 0x1470b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17492 << 16));
    // 0x1470b8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1470b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1470bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1470bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1470c0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1470c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1470c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1470c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1470c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1470C8u;
    {
        const bool branch_taken_0x1470c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1470CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470C8u;
            // 0x1470cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470c8) {
            ctx->pc = 0x1470D8u;
            goto label_1470d8;
        }
    }
    ctx->pc = 0x1470D0u;
    // 0x1470d0: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1470D0u;
    SET_GPR_U32(ctx, 31, 0x1470D8u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1470D8u; }
        if (ctx->pc != 0x1470D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1470D8u; }
        if (ctx->pc != 0x1470D8u) { return; }
    }
    ctx->pc = 0x1470D8u;
label_1470d8:
    // 0x1470d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1470d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1470dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1470dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1470e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1470E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1470E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470E0u;
            // 0x1470e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146FA0u: goto label_146fa0;
            case 0x146FD0u: goto label_146fd0;
            case 0x147008u: goto label_147008;
            case 0x147040u: goto label_147040;
            case 0x147078u: goto label_147078;
            case 0x1470B0u: goto label_1470b0;
            case 0x1470D8u: goto label_1470d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1470E8u;
}
