#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg2_3
// Address: 0x1470f0 - 0x1472c0
void MapMoveingFuncStg2_3_0x1470f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg2_3_0x1470f0");
#endif

    ctx->pc = 0x1470f0u;

    // 0x1470f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1470f4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1470f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1470f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1470fc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1470fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x147100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147108: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14710c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14710cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x147110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147114: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x147114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147118: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14711c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x14711cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x147120: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147124: 0xc4209d00  lwc1        $f0, -0x6300($at)
    ctx->pc = 0x147124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147128: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x147128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14712c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x147130: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147134: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x147134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x147138: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x147138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14713c: 0xc4209cf8  lwc1        $f0, -0x6308($at)
    ctx->pc = 0x14713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147140: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x147140u;
    SET_GPR_U32(ctx, 31, 0x147148u);
    ctx->pc = 0x147144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147140u;
            // 0x147144: 0xe4400118  swc1        $f0, 0x118($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147148u; }
        if (ctx->pc != 0x147148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147148u; }
        if (ctx->pc != 0x147148u) { return; }
    }
    ctx->pc = 0x147148u;
    // 0x147148: 0x28410258  slti        $at, $v0, 0x258
    ctx->pc = 0x147148u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x14714c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x14714Cu;
    {
        const bool branch_taken_0x14714c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14714c) {
            ctx->pc = 0x147178u;
            goto label_147178;
        }
    }
    ctx->pc = 0x147154u;
    // 0x147154: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147158: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x14715c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x14715cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x147160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147164: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x147164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147168: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14716c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14716Cu;
    {
        const bool branch_taken_0x14716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14716Cu;
            // 0x147170: 0xe4800128  swc1        $f0, 0x128($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14716c) {
            ctx->pc = 0x1471A8u;
            goto label_1471a8;
        }
    }
    ctx->pc = 0x147174u;
    // 0x147174: 0x0  nop
    ctx->pc = 0x147174u;
    // NOP
label_147178:
    // 0x147178: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x147178u;
    SET_GPR_U32(ctx, 31, 0x147180u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147180u; }
        if (ctx->pc != 0x147180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147180u; }
        if (ctx->pc != 0x147180u) { return; }
    }
    ctx->pc = 0x147180u;
    // 0x147180: 0x28430578  slti        $v1, $v0, 0x578
    ctx->pc = 0x147180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1400) ? 1 : 0);
    // 0x147184: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x147184u;
    {
        const bool branch_taken_0x147184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147184) {
            ctx->pc = 0x1471A8u;
            goto label_1471a8;
        }
    }
    ctx->pc = 0x14718Cu;
    // 0x14718c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147190: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x147194: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x147194u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x147198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14719c: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x14719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1471a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1471a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1471a4: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x1471a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
label_1471a8:
    // 0x1471a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1471a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1471ac: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1471acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1471b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1471b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1471b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1471b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1471b8: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x1471b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1471bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1471bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1471C0u;
    {
        const bool branch_taken_0x1471c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1471C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471C0u;
            // 0x1471c4: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471c0) {
            ctx->pc = 0x1471E0u;
            goto label_1471e0;
        }
    }
    ctx->pc = 0x1471C8u;
    // 0x1471c8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1471c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1471cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1471ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1471d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1471d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1471d4: 0x0  nop
    ctx->pc = 0x1471d4u;
    // NOP
    // 0x1471d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1471d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1471dc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1471dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1471e0:
    // 0x1471e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1471e4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1471e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1471e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1471e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1471ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1471ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1471f0: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x1471f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1471f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1471f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1471F8u;
    {
        const bool branch_taken_0x1471f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1471FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471F8u;
            // 0x1471fc: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471f8) {
            ctx->pc = 0x147218u;
            goto label_147218;
        }
    }
    ctx->pc = 0x147200u;
    // 0x147200: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147204: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147204u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14720c: 0x0  nop
    ctx->pc = 0x14720cu;
    // NOP
    // 0x147210: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147214: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147218:
    // 0x147218: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14721c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x14721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147220: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147220u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147228: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14722c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14722cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147230: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147230u;
    {
        const bool branch_taken_0x147230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147230u;
            // 0x147234: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147230) {
            ctx->pc = 0x147250u;
            goto label_147250;
        }
    }
    ctx->pc = 0x147238u;
    // 0x147238: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14723c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14723cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147244: 0x0  nop
    ctx->pc = 0x147244u;
    // NOP
    // 0x147248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14724c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147250:
    // 0x147250: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147254: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147258: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147258u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14725c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14725cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147260: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x147260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147264: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147268: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147268u;
    {
        const bool branch_taken_0x147268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147268u;
            // 0x14726c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147268) {
            ctx->pc = 0x147288u;
            goto label_147288;
        }
    }
    ctx->pc = 0x147270u;
    // 0x147270: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147274: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147274u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14727c: 0x0  nop
    ctx->pc = 0x14727cu;
    // NOP
    // 0x147280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147284: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147288:
    // 0x147288: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x147288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14728c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x14728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x147290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147294: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x147294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147298: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14729c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14729Cu;
    {
        const bool branch_taken_0x14729c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1472A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14729Cu;
            // 0x1472a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14729c) {
            ctx->pc = 0x1472B0u;
            goto label_1472b0;
        }
    }
    ctx->pc = 0x1472A4u;
    // 0x1472a4: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1472A4u;
    SET_GPR_U32(ctx, 31, 0x1472ACu);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1472ACu; }
        if (ctx->pc != 0x1472ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1472ACu; }
        if (ctx->pc != 0x1472ACu) { return; }
    }
    ctx->pc = 0x1472ACu;
    // 0x1472ac: 0x0  nop
    ctx->pc = 0x1472acu;
    // NOP
label_1472b0:
    // 0x1472b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1472b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1472b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1472b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1472b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1472B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1472BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1472B8u;
            // 0x1472bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147178u: goto label_147178;
            case 0x1471A8u: goto label_1471a8;
            case 0x1471E0u: goto label_1471e0;
            case 0x147218u: goto label_147218;
            case 0x147250u: goto label_147250;
            case 0x147288u: goto label_147288;
            case 0x1472B0u: goto label_1472b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1472C0u;
}
