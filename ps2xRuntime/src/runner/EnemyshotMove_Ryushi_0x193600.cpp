#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Ryushi
// Address: 0x193600 - 0x193788
void EnemyshotMove_Ryushi_0x193600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Ryushi_0x193600");
#endif

    ctx->pc = 0x193600u;

    // 0x193600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19360c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x19360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x193610: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x193610u;
    {
        const bool branch_taken_0x193610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193610u;
            // 0x193614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193610) {
            ctx->pc = 0x193688u;
            goto label_193688;
        }
    }
    ctx->pc = 0x193618u;
    // 0x193618: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x193618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19361c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193620: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x193620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193624: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x193624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19362c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19362cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193630: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x193630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x193634: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x193634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193638: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19363c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19363cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193640: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x193640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x193644: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193648: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x193648u;
    SET_GPR_U32(ctx, 31, 0x193650u);
    ctx->pc = 0x19364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193648u;
            // 0x19364c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193650u; }
        if (ctx->pc != 0x193650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193650u; }
        if (ctx->pc != 0x193650u) { return; }
    }
    ctx->pc = 0x193650u;
    // 0x193650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193654: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19365c: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x19365Cu;
    SET_GPR_U32(ctx, 31, 0x193664u);
    ctx->pc = 0x193660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19365Cu;
            // 0x193660: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193664u; }
        if (ctx->pc != 0x193664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193664u; }
        if (ctx->pc != 0x193664u) { return; }
    }
    ctx->pc = 0x193664u;
    // 0x193664: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x193664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193668: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x193668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19366c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19366cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193670: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x193670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x193674: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x193674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193678: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x193678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19367c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19367cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193680: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x193680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x193684: 0x0  nop
    ctx->pc = 0x193684u;
    // NOP
label_193688:
    // 0x193688: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x19368c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x19368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193690: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193698: 0x0  nop
    ctx->pc = 0x193698u;
    // NOP
    // 0x19369c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19369cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1936a0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1936a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1936a4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1936a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1936a8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1936a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1936acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1936b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1936b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936b4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1936B4u;
    {
        const bool branch_taken_0x1936b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1936B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936B4u;
            // 0x1936b8: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936b4) {
            ctx->pc = 0x193718u;
            goto label_193718;
        }
    }
    ctx->pc = 0x1936BCu;
    // 0x1936bc: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x1936bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x1936c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1936c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936c4: 0x0  nop
    ctx->pc = 0x1936c4u;
    // NOP
    // 0x1936c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1936c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936cc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1936CCu;
    {
        const bool branch_taken_0x1936cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936cc) {
            ctx->pc = 0x193718u;
            goto label_193718;
        }
    }
    ctx->pc = 0x1936D4u;
    // 0x1936d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1936d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936d8: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x1936dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1936dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936e0: 0x0  nop
    ctx->pc = 0x1936e0u;
    // NOP
    // 0x1936e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1936e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1936E8u;
    {
        const bool branch_taken_0x1936e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1936ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936E8u;
            // 0x1936ec: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936e8) {
            ctx->pc = 0x193718u;
            goto label_193718;
        }
    }
    ctx->pc = 0x1936F0u;
    // 0x1936f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1936f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936f4: 0x0  nop
    ctx->pc = 0x1936f4u;
    // NOP
    // 0x1936f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1936f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1936FCu;
    {
        const bool branch_taken_0x1936fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936fc) {
            ctx->pc = 0x193718u;
            goto label_193718;
        }
    }
    ctx->pc = 0x193704u;
    // 0x193704: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x193708: 0x28a100c9  slti        $at, $a1, 0xC9
    ctx->pc = 0x193708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x19370c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19370Cu;
    {
        const bool branch_taken_0x19370c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19370c) {
            ctx->pc = 0x193728u;
            goto label_193728;
        }
    }
    ctx->pc = 0x193714u;
    // 0x193714: 0x0  nop
    ctx->pc = 0x193714u;
    // NOP
label_193718:
    // 0x193718: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193718u;
    SET_GPR_U32(ctx, 31, 0x193720u);
    ctx->pc = 0x19371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193718u;
            // 0x19371c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193720u; }
        if (ctx->pc != 0x193720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193720u; }
        if (ctx->pc != 0x193720u) { return; }
    }
    ctx->pc = 0x193720u;
    // 0x193720: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x193720u;
    {
        const bool branch_taken_0x193720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193720) {
            ctx->pc = 0x193778u;
            goto label_193778;
        }
    }
    ctx->pc = 0x193728u;
label_193728:
    // 0x193728: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x193728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19372c: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19372Cu;
    {
        const bool branch_taken_0x19372c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x19372c) {
            ctx->pc = 0x193748u;
            goto label_193748;
        }
    }
    ctx->pc = 0x193734u;
    // 0x193734: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x193734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x193738: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x193738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19373c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x193740: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x193740u;
    {
        const bool branch_taken_0x193740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193740u;
            // 0x193744: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193740) {
            ctx->pc = 0x193778u;
            goto label_193778;
        }
    }
    ctx->pc = 0x193748u;
label_193748:
    // 0x193748: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19374c: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x19374cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x193750: 0x0  nop
    ctx->pc = 0x193750u;
    // NOP
    // 0x193754: 0x0  nop
    ctx->pc = 0x193754u;
    // NOP
    // 0x193758: 0x1810  mfhi        $v1
    ctx->pc = 0x193758u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19375c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19375Cu;
    {
        const bool branch_taken_0x19375c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19375Cu;
            // 0x193760: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19375c) {
            ctx->pc = 0x193768u;
            goto label_193768;
        }
    }
    ctx->pc = 0x193764u;
    // 0x193764: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x193764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_193768:
    // 0x193768: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x193768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19376c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x193770: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x193770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x193774: 0x0  nop
    ctx->pc = 0x193774u;
    // NOP
label_193778:
    // 0x193778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19377c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19377cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193780: 0x3e00008  jr          $ra
    ctx->pc = 0x193780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193780u;
            // 0x193784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193688u: goto label_193688;
            case 0x193718u: goto label_193718;
            case 0x193728u: goto label_193728;
            case 0x193748u: goto label_193748;
            case 0x193768u: goto label_193768;
            case 0x193778u: goto label_193778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193788u;
}
