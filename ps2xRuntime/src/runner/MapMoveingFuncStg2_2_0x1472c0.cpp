#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg2_2
// Address: 0x1472c0 - 0x147488
void MapMoveingFuncStg2_2_0x1472c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg2_2_0x1472c0");
#endif

    ctx->pc = 0x1472c0u;

    // 0x1472c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1472c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1472c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1472c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1472c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1472c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1472cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1472ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1472d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1472d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1472d4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1472d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1472d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1472d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1472dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1472dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472e0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1472e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1472e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1472e8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1472e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1472ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1472f0: 0xc4209d00  lwc1        $f0, -0x6300($at)
    ctx->pc = 0x1472f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1472f4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1472f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472f8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1472f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1472fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1472fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147300: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x147300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x147304: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x147304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147308: 0xc4209cf8  lwc1        $f0, -0x6308($at)
    ctx->pc = 0x147308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14730c: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x14730Cu;
    SET_GPR_U32(ctx, 31, 0x147314u);
    ctx->pc = 0x147310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14730Cu;
            // 0x147310: 0xe4400118  swc1        $f0, 0x118($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147314u; }
        if (ctx->pc != 0x147314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147314u; }
        if (ctx->pc != 0x147314u) { return; }
    }
    ctx->pc = 0x147314u;
    // 0x147314: 0x28410258  slti        $at, $v0, 0x258
    ctx->pc = 0x147314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x147318: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x147318u;
    {
        const bool branch_taken_0x147318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147318) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x147320u;
    // 0x147320: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147324: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x147328: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x147328u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x14732c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14732cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147330: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x147330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147338: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x147338u;
    {
        const bool branch_taken_0x147338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147338u;
            // 0x14733c: 0xe4800128  swc1        $f0, 0x128($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147338) {
            ctx->pc = 0x147370u;
            goto label_147370;
        }
    }
    ctx->pc = 0x147340u;
label_147340:
    // 0x147340: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x147340u;
    SET_GPR_U32(ctx, 31, 0x147348u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147348u; }
        if (ctx->pc != 0x147348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147348u; }
        if (ctx->pc != 0x147348u) { return; }
    }
    ctx->pc = 0x147348u;
    // 0x147348: 0x28430578  slti        $v1, $v0, 0x578
    ctx->pc = 0x147348u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1400) ? 1 : 0);
    // 0x14734c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14734Cu;
    {
        const bool branch_taken_0x14734c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14734c) {
            ctx->pc = 0x147370u;
            goto label_147370;
        }
    }
    ctx->pc = 0x147354u;
    // 0x147354: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147358: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x14735c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x14735cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x147360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147364: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x147364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14736c: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x14736cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_147370:
    // 0x147370: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147374: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147378: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147378u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14737c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14737cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147380: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147388: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147388u;
    {
        const bool branch_taken_0x147388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147388u;
            // 0x14738c: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147388) {
            ctx->pc = 0x1473A8u;
            goto label_1473a8;
        }
    }
    ctx->pc = 0x147390u;
    // 0x147390: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147394: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147394u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14739c: 0x0  nop
    ctx->pc = 0x14739cu;
    // NOP
    // 0x1473a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1473a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1473a4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1473a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1473a8:
    // 0x1473a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1473a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1473ac: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1473acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1473b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1473b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1473b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1473b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1473b8: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x1473b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1473bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1473bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1473c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1473C0u;
    {
        const bool branch_taken_0x1473c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1473C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1473C0u;
            // 0x1473c4: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473c0) {
            ctx->pc = 0x1473E0u;
            goto label_1473e0;
        }
    }
    ctx->pc = 0x1473C8u;
    // 0x1473c8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1473c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1473cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1473ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1473d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1473d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1473d4: 0x0  nop
    ctx->pc = 0x1473d4u;
    // NOP
    // 0x1473d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1473d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1473dc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1473dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1473e0:
    // 0x1473e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1473e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1473e4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1473e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1473e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1473e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1473ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1473ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1473f0: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1473f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1473f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1473f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1473f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1473F8u;
    {
        const bool branch_taken_0x1473f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1473FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1473F8u;
            // 0x1473fc: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473f8) {
            ctx->pc = 0x147418u;
            goto label_147418;
        }
    }
    ctx->pc = 0x147400u;
    // 0x147400: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147404: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147404u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14740c: 0x0  nop
    ctx->pc = 0x14740cu;
    // NOP
    // 0x147410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147414: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147418:
    // 0x147418: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14741c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14741cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147420: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147420u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147428: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14742c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14742cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147430: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147430u;
    {
        const bool branch_taken_0x147430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147430u;
            // 0x147434: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147430) {
            ctx->pc = 0x147450u;
            goto label_147450;
        }
    }
    ctx->pc = 0x147438u;
    // 0x147438: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14743c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14743cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147444: 0x0  nop
    ctx->pc = 0x147444u;
    // NOP
    // 0x147448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14744c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147450:
    // 0x147450: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147454: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x147454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x147458: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x147458u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x14745c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14745cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147460: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x147460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147468: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x147468u;
    {
        const bool branch_taken_0x147468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147468u;
            // 0x14746c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147468) {
            ctx->pc = 0x147478u;
            goto label_147478;
        }
    }
    ctx->pc = 0x147470u;
    // 0x147470: 0xc053348  jal         func_14CD20
    ctx->pc = 0x147470u;
    SET_GPR_U32(ctx, 31, 0x147478u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147478u; }
        if (ctx->pc != 0x147478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147478u; }
        if (ctx->pc != 0x147478u) { return; }
    }
    ctx->pc = 0x147478u;
label_147478:
    // 0x147478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14747c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14747cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147480: 0x3e00008  jr          $ra
    ctx->pc = 0x147480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147480u;
            // 0x147484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147340u: goto label_147340;
            case 0x147370u: goto label_147370;
            case 0x1473A8u: goto label_1473a8;
            case 0x1473E0u: goto label_1473e0;
            case 0x147418u: goto label_147418;
            case 0x147450u: goto label_147450;
            case 0x147478u: goto label_147478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147488u;
}
