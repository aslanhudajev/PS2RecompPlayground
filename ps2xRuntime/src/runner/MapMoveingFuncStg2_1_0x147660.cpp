#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg2_1
// Address: 0x147660 - 0x147828
void MapMoveingFuncStg2_1_0x147660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg2_1_0x147660");
#endif

    ctx->pc = 0x147660u;

    // 0x147660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147664: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x147668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14766c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14766cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147674: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x147678: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14767c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14767cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147680: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x147680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147688: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x147688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x14768c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147690: 0xc4209d00  lwc1        $f0, -0x6300($at)
    ctx->pc = 0x147690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147694: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x147694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147698: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14769c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14769cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1476a0: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1476a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1476a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1476a8: 0xc4209cf8  lwc1        $f0, -0x6308($at)
    ctx->pc = 0x1476a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1476ac: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1476ACu;
    SET_GPR_U32(ctx, 31, 0x1476B4u);
    ctx->pc = 0x1476B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1476ACu;
            // 0x1476b0: 0xe4400118  swc1        $f0, 0x118($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476B4u; }
        if (ctx->pc != 0x1476B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476B4u; }
        if (ctx->pc != 0x1476B4u) { return; }
    }
    ctx->pc = 0x1476B4u;
    // 0x1476b4: 0x28410258  slti        $at, $v0, 0x258
    ctx->pc = 0x1476b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1476b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1476B8u;
    {
        const bool branch_taken_0x1476b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1476b8) {
            ctx->pc = 0x1476E0u;
            goto label_1476e0;
        }
    }
    ctx->pc = 0x1476C0u;
    // 0x1476c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1476c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1476c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1476c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1476c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1476c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1476cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1476ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1476d0: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x1476d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1476d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1476d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1476d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1476D8u;
    {
        const bool branch_taken_0x1476d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1476DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476D8u;
            // 0x1476dc: 0xe4800128  swc1        $f0, 0x128($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476d8) {
            ctx->pc = 0x147710u;
            goto label_147710;
        }
    }
    ctx->pc = 0x1476E0u;
label_1476e0:
    // 0x1476e0: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1476E0u;
    SET_GPR_U32(ctx, 31, 0x1476E8u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476E8u; }
        if (ctx->pc != 0x1476E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476E8u; }
        if (ctx->pc != 0x1476E8u) { return; }
    }
    ctx->pc = 0x1476E8u;
    // 0x1476e8: 0x28430578  slti        $v1, $v0, 0x578
    ctx->pc = 0x1476e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1400) ? 1 : 0);
    // 0x1476ec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1476ECu;
    {
        const bool branch_taken_0x1476ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1476ec) {
            ctx->pc = 0x147710u;
            goto label_147710;
        }
    }
    ctx->pc = 0x1476F4u;
    // 0x1476f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1476f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1476f8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1476fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1476fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x147700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147704: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x147704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147708: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14770c: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x14770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_147710:
    // 0x147710: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147714: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147718: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147718u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14771c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14771cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147720: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147724: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147728: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147728u;
    {
        const bool branch_taken_0x147728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147728u;
            // 0x14772c: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147728) {
            ctx->pc = 0x147748u;
            goto label_147748;
        }
    }
    ctx->pc = 0x147730u;
    // 0x147730: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147734: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147734u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14773c: 0x0  nop
    ctx->pc = 0x14773cu;
    // NOP
    // 0x147740: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147744: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147748:
    // 0x147748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14774c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147750: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147750u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147758: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x147758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14775c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14775cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147760: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147760u;
    {
        const bool branch_taken_0x147760 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147760u;
            // 0x147764: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147760) {
            ctx->pc = 0x147780u;
            goto label_147780;
        }
    }
    ctx->pc = 0x147768u;
    // 0x147768: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14776c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14776cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147774: 0x0  nop
    ctx->pc = 0x147774u;
    // NOP
    // 0x147778: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14777c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147780:
    // 0x147780: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147784: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147788: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147788u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14778c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14778cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147790: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147794: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147798: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147798u;
    {
        const bool branch_taken_0x147798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147798u;
            // 0x14779c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147798) {
            ctx->pc = 0x1477B8u;
            goto label_1477b8;
        }
    }
    ctx->pc = 0x1477A0u;
    // 0x1477a0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1477a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1477a4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1477a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1477a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1477a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477ac: 0x0  nop
    ctx->pc = 0x1477acu;
    // NOP
    // 0x1477b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1477b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1477b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1477b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1477b8:
    // 0x1477b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1477bc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1477c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1477c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1477c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1477c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477c8: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1477c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1477cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1477ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1477d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1477D0u;
    {
        const bool branch_taken_0x1477d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1477D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1477D0u;
            // 0x1477d4: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477d0) {
            ctx->pc = 0x1477F0u;
            goto label_1477f0;
        }
    }
    ctx->pc = 0x1477D8u;
    // 0x1477d8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1477dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1477dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1477e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1477e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477e4: 0x0  nop
    ctx->pc = 0x1477e4u;
    // NOP
    // 0x1477e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1477e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1477ec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1477ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1477f0:
    // 0x1477f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1477f4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1477f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1477f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1477f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1477fc: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1477fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147804: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x147804u;
    {
        const bool branch_taken_0x147804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147804u;
            // 0x147808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147804) {
            ctx->pc = 0x147818u;
            goto label_147818;
        }
    }
    ctx->pc = 0x14780Cu;
    // 0x14780c: 0xc053348  jal         func_14CD20
    ctx->pc = 0x14780Cu;
    SET_GPR_U32(ctx, 31, 0x147814u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147814u; }
        if (ctx->pc != 0x147814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147814u; }
        if (ctx->pc != 0x147814u) { return; }
    }
    ctx->pc = 0x147814u;
    // 0x147814: 0x0  nop
    ctx->pc = 0x147814u;
    // NOP
label_147818:
    // 0x147818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14781c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14781cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147820: 0x3e00008  jr          $ra
    ctx->pc = 0x147820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147820u;
            // 0x147824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1476E0u: goto label_1476e0;
            case 0x147710u: goto label_147710;
            case 0x147748u: goto label_147748;
            case 0x147780u: goto label_147780;
            case 0x1477B8u: goto label_1477b8;
            case 0x1477F0u: goto label_1477f0;
            case 0x147818u: goto label_147818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147828u;
}
