#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Zanzou_dan_wave
// Address: 0x1937d0 - 0x1939b8
void EnemyshotMove_Zanzou_dan_wave_0x1937d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Zanzou_dan_wave_0x1937d0");
#endif

    ctx->pc = 0x1937d0u;

    // 0x1937d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1937d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1937d4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1937d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1937d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1937dc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1937dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1937e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1937e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1937e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1937e8: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x1937e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1937ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1937ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1937f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1937f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1937f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1937f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1937f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1937fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1937fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x193800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193804: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x193804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x193808: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x193808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x19380c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x19380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193810: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x193814: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x193814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x193818: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x193818u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x19381c: 0x0  nop
    ctx->pc = 0x19381cu;
    // NOP
    // 0x193820: 0x0  nop
    ctx->pc = 0x193820u;
    // NOP
    // 0x193824: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x193824u;
    SET_GPR_U32(ctx, 31, 0x19382Cu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19382Cu; }
        if (ctx->pc != 0x19382Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19382Cu; }
        if (ctx->pc != 0x19382Cu) { return; }
    }
    ctx->pc = 0x19382Cu;
    // 0x19382c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x19382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x193830: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193834: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193838: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x193838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19383c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19383cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193840: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x193840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x193844: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x193844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193848: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19384c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19384cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193850: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x193850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x193854: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19385c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x19385cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x193860: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193864: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193868: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19386c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19386cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193870: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x193870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x193874: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193878: 0xc065450  jal         func_195140
    ctx->pc = 0x193878u;
    SET_GPR_U32(ctx, 31, 0x193880u);
    ctx->pc = 0x195140u;
    if (runtime->hasFunction(0x195140u)) {
        auto targetFn = runtime->lookupFunction(0x195140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193880u; }
        if (ctx->pc != 0x193880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzou_0x195140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193880u; }
        if (ctx->pc != 0x193880u) { return; }
    }
    ctx->pc = 0x193880u;
    // 0x193880: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x193880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193884: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x193884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x193888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19388c: 0x0  nop
    ctx->pc = 0x19388cu;
    // NOP
    // 0x193890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193894: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x193894u;
    {
        const bool branch_taken_0x193894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193894) {
            ctx->pc = 0x1938D0u;
            goto label_1938d0;
        }
    }
    ctx->pc = 0x19389Cu;
    // 0x19389c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x19389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1938a0: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x1938a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x1938a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1938a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1938a8: 0x0  nop
    ctx->pc = 0x1938a8u;
    // NOP
    // 0x1938ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1938acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1938b0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1938B0u;
    {
        const bool branch_taken_0x1938b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1938B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1938B0u;
            // 0x1938b4: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938b0) {
            ctx->pc = 0x1938D0u;
            goto label_1938d0;
        }
    }
    ctx->pc = 0x1938B8u;
    // 0x1938b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1938b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1938bc: 0x0  nop
    ctx->pc = 0x1938bcu;
    // NOP
    // 0x1938c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1938c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1938c4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1938C4u;
    {
        const bool branch_taken_0x1938c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1938c4) {
            ctx->pc = 0x1938E0u;
            goto label_1938e0;
        }
    }
    ctx->pc = 0x1938CCu;
    // 0x1938cc: 0x0  nop
    ctx->pc = 0x1938ccu;
    // NOP
label_1938d0:
    // 0x1938d0: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1938D0u;
    SET_GPR_U32(ctx, 31, 0x1938D8u);
    ctx->pc = 0x1938D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938D0u;
            // 0x1938d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D8u; }
        if (ctx->pc != 0x1938D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D8u; }
        if (ctx->pc != 0x1938D8u) { return; }
    }
    ctx->pc = 0x1938D8u;
    // 0x1938d8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1938D8u;
    {
        const bool branch_taken_0x1938d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1938d8) {
            ctx->pc = 0x1939A8u;
            goto label_1939a8;
        }
    }
    ctx->pc = 0x1938E0u;
label_1938e0:
    // 0x1938e0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1938e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1938e4: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1938E4u;
    {
        const bool branch_taken_0x1938e4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1938E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1938E4u;
            // 0x1938e8: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938e4) {
            ctx->pc = 0x193958u;
            goto label_193958;
        }
    }
    ctx->pc = 0x1938ECu;
    // 0x1938ec: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1938ecu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x1938f0: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1938f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1938f4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1938F4u;
    {
        const bool branch_taken_0x1938f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1938F4u;
            // 0x1938f8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938f4) {
            ctx->pc = 0x193928u;
            goto label_193928;
        }
    }
    ctx->pc = 0x1938FCu;
    // 0x1938fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1938fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193900: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193904: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193908: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19390c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19390cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x193910: 0xc065944  jal         func_196510
    ctx->pc = 0x193910u;
    SET_GPR_U32(ctx, 31, 0x193918u);
    ctx->pc = 0x193914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193910u;
            // 0x193914: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193918u; }
        if (ctx->pc != 0x193918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193918u; }
        if (ctx->pc != 0x193918u) { return; }
    }
    ctx->pc = 0x193918u;
    // 0x193918: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193918u;
    SET_GPR_U32(ctx, 31, 0x193920u);
    ctx->pc = 0x19391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193918u;
            // 0x19391c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193920u; }
        if (ctx->pc != 0x193920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193920u; }
        if (ctx->pc != 0x193920u) { return; }
    }
    ctx->pc = 0x193920u;
    // 0x193920: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x193920u;
    {
        const bool branch_taken_0x193920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193920) {
            ctx->pc = 0x1939A8u;
            goto label_1939a8;
        }
    }
    ctx->pc = 0x193928u;
label_193928:
    // 0x193928: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19392c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x193930: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193934: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x193938: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x193938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x19393c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19393cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x193940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193944: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193948: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x193948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x19394c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19394Cu;
    {
        const bool branch_taken_0x19394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19394Cu;
            // 0x193950: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19394c) {
            ctx->pc = 0x1939A8u;
            goto label_1939a8;
        }
    }
    ctx->pc = 0x193954u;
    // 0x193954: 0x0  nop
    ctx->pc = 0x193954u;
    // NOP
label_193958:
    // 0x193958: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x19395c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19395cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193960: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x193960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x193964: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x193964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193968: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x193968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x19396c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x19396cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x193970: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x193970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x193974: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x193974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193978: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x193978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19397c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x19397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x193980: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193988: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x193988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x19398c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x19398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193994: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x193994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x193998: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19399c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19399cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1939a0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1939A0u;
    SET_GPR_U32(ctx, 31, 0x1939A8u);
    ctx->pc = 0x1939A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939A0u;
            // 0x1939a4: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939A8u; }
        if (ctx->pc != 0x1939A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939A8u; }
        if (ctx->pc != 0x1939A8u) { return; }
    }
    ctx->pc = 0x1939A8u;
label_1939a8:
    // 0x1939a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1939a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1939ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1939acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1939b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1939B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1939B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939B0u;
            // 0x1939b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1938D0u: goto label_1938d0;
            case 0x1938E0u: goto label_1938e0;
            case 0x193928u: goto label_193928;
            case 0x193958u: goto label_193958;
            case 0x1939A8u: goto label_1939a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1939B8u;
}
