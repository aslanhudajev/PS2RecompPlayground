#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg2_1_2
// Address: 0x147490 - 0x147658
void MapMoveingFuncStg2_1_2_0x147490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg2_1_2_0x147490");
#endif

    ctx->pc = 0x147490u;

    // 0x147490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147494: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x147494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x147498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14749c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14749cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1474a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1474a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1474a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1474a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1474ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1474acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1474b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1474b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1474b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1474b8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1474b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1474bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1474bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1474c0: 0xc4209d00  lwc1        $f0, -0x6300($at)
    ctx->pc = 0x1474c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1474c4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1474c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1474c8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1474c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1474cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1474ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1474d0: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1474d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1474d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1474d8: 0xc4209cf8  lwc1        $f0, -0x6308($at)
    ctx->pc = 0x1474d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1474dc: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1474DCu;
    SET_GPR_U32(ctx, 31, 0x1474E4u);
    ctx->pc = 0x1474E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1474DCu;
            // 0x1474e0: 0xe4400118  swc1        $f0, 0x118($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474E4u; }
        if (ctx->pc != 0x1474E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474E4u; }
        if (ctx->pc != 0x1474E4u) { return; }
    }
    ctx->pc = 0x1474E4u;
    // 0x1474e4: 0x28410258  slti        $at, $v0, 0x258
    ctx->pc = 0x1474e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1474e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1474E8u;
    {
        const bool branch_taken_0x1474e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1474e8) {
            ctx->pc = 0x147510u;
            goto label_147510;
        }
    }
    ctx->pc = 0x1474F0u;
    // 0x1474f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1474f4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1474f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1474f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1474f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1474fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1474fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147500: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x147500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147504: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147508: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x147508u;
    {
        const bool branch_taken_0x147508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147508u;
            // 0x14750c: 0xe4800128  swc1        $f0, 0x128($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147508) {
            ctx->pc = 0x147540u;
            goto label_147540;
        }
    }
    ctx->pc = 0x147510u;
label_147510:
    // 0x147510: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x147510u;
    SET_GPR_U32(ctx, 31, 0x147518u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147518u; }
        if (ctx->pc != 0x147518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147518u; }
        if (ctx->pc != 0x147518u) { return; }
    }
    ctx->pc = 0x147518u;
    // 0x147518: 0x28430578  slti        $v1, $v0, 0x578
    ctx->pc = 0x147518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1400) ? 1 : 0);
    // 0x14751c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14751Cu;
    {
        const bool branch_taken_0x14751c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14751c) {
            ctx->pc = 0x147540u;
            goto label_147540;
        }
    }
    ctx->pc = 0x147524u;
    // 0x147524: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147528: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x147528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x14752c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x14752cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x147530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147534: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x147534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147538: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14753c: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x14753cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_147540:
    // 0x147540: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147544: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147548: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147548u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14754c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14754cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147550: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147558: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147558u;
    {
        const bool branch_taken_0x147558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147558u;
            // 0x14755c: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147558) {
            ctx->pc = 0x147578u;
            goto label_147578;
        }
    }
    ctx->pc = 0x147560u;
    // 0x147560: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147564: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147564u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14756c: 0x0  nop
    ctx->pc = 0x14756cu;
    // NOP
    // 0x147570: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147574: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147578:
    // 0x147578: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14757c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147580: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147580u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147588: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14758c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14758cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147590: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147590u;
    {
        const bool branch_taken_0x147590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147590u;
            // 0x147594: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147590) {
            ctx->pc = 0x1475B0u;
            goto label_1475b0;
        }
    }
    ctx->pc = 0x147598u;
    // 0x147598: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14759c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14759cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1475a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1475a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1475a4: 0x0  nop
    ctx->pc = 0x1475a4u;
    // NOP
    // 0x1475a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1475a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1475ac: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1475acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1475b0:
    // 0x1475b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1475b4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1475b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1475b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1475b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1475bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1475bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1475c0: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1475c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1475c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1475c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1475c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1475C8u;
    {
        const bool branch_taken_0x1475c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1475CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475C8u;
            // 0x1475cc: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475c8) {
            ctx->pc = 0x1475E8u;
            goto label_1475e8;
        }
    }
    ctx->pc = 0x1475D0u;
    // 0x1475d0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1475d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1475d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1475d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1475d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1475dc: 0x0  nop
    ctx->pc = 0x1475dcu;
    // NOP
    // 0x1475e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1475e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1475e4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1475e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1475e8:
    // 0x1475e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1475e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1475ec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1475ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1475f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1475f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1475f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1475f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1475f8: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1475f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1475fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1475fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147600: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147600u;
    {
        const bool branch_taken_0x147600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147600u;
            // 0x147604: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147600) {
            ctx->pc = 0x147620u;
            goto label_147620;
        }
    }
    ctx->pc = 0x147608u;
    // 0x147608: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14760c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14760cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147614: 0x0  nop
    ctx->pc = 0x147614u;
    // NOP
    // 0x147618: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14761c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147620:
    // 0x147620: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147624: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x147624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x147628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14762c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x14762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147634: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x147634u;
    {
        const bool branch_taken_0x147634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147634u;
            // 0x147638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147634) {
            ctx->pc = 0x147648u;
            goto label_147648;
        }
    }
    ctx->pc = 0x14763Cu;
    // 0x14763c: 0xc053348  jal         func_14CD20
    ctx->pc = 0x14763Cu;
    SET_GPR_U32(ctx, 31, 0x147644u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147644u; }
        if (ctx->pc != 0x147644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147644u; }
        if (ctx->pc != 0x147644u) { return; }
    }
    ctx->pc = 0x147644u;
    // 0x147644: 0x0  nop
    ctx->pc = 0x147644u;
    // NOP
label_147648:
    // 0x147648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14764c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14764cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147650: 0x3e00008  jr          $ra
    ctx->pc = 0x147650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147650u;
            // 0x147654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147510u: goto label_147510;
            case 0x147540u: goto label_147540;
            case 0x147578u: goto label_147578;
            case 0x1475B0u: goto label_1475b0;
            case 0x1475E8u: goto label_1475e8;
            case 0x147620u: goto label_147620;
            case 0x147648u: goto label_147648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147658u;
}
