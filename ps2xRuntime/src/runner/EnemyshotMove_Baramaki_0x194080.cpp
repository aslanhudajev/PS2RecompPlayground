#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Baramaki
// Address: 0x194080 - 0x194218
void EnemyshotMove_Baramaki_0x194080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Baramaki_0x194080");
#endif

    ctx->pc = 0x194080u;

    // 0x194080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19408c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x19408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194090: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x194090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194094: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x194094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x194098: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x194098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x19409c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x19409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1940a0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1940a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1940a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1940a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1940a8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1940a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1940ac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1940acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1940b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1940b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1940b4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1940b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1940b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1940b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1940bc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1940bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1940c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1940C0u;
    {
        const bool branch_taken_0x1940c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1940C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940C0u;
            // 0x1940c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940c0) {
            ctx->pc = 0x1940D0u;
            goto label_1940d0;
        }
    }
    ctx->pc = 0x1940C8u;
    // 0x1940c8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1940c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1940cc: 0x0  nop
    ctx->pc = 0x1940ccu;
    // NOP
label_1940d0:
    // 0x1940d0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x1940d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x1940d4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1940d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1940d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1940d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1940dc: 0x0  nop
    ctx->pc = 0x1940dcu;
    // NOP
    // 0x1940e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1940e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1940e4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1940E4u;
    {
        const bool branch_taken_0x1940e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1940E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940E4u;
            // 0x1940e8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940e4) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x1940ECu;
    // 0x1940ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1940ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1940f0: 0x0  nop
    ctx->pc = 0x1940f0u;
    // NOP
    // 0x1940f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1940f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1940f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1940F8u;
    {
        const bool branch_taken_0x1940f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1940f8) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x194100u;
    // 0x194100: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x194100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194104: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x194104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x194108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19410c: 0x0  nop
    ctx->pc = 0x19410cu;
    // NOP
    // 0x194110: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x194110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194114: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x194114u;
    {
        const bool branch_taken_0x194114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194114u;
            // 0x194118: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194114) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x19411Cu;
    // 0x19411c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19411cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194120: 0x0  nop
    ctx->pc = 0x194120u;
    // NOP
    // 0x194124: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x194124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194128: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x194128u;
    {
        const bool branch_taken_0x194128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194128) {
            ctx->pc = 0x194140u;
            goto label_194140;
        }
    }
    ctx->pc = 0x194130u;
label_194130:
    // 0x194130: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x194130u;
    SET_GPR_U32(ctx, 31, 0x194138u);
    ctx->pc = 0x194134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194130u;
            // 0x194134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194138u; }
        if (ctx->pc != 0x194138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194138u; }
        if (ctx->pc != 0x194138u) { return; }
    }
    ctx->pc = 0x194138u;
    // 0x194138: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x194138u;
    {
        const bool branch_taken_0x194138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194138) {
            ctx->pc = 0x194208u;
            goto label_194208;
        }
    }
    ctx->pc = 0x194140u;
label_194140:
    // 0x194140: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x194144: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x194144u;
    {
        const bool branch_taken_0x194144 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x194148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194144u;
            // 0x194148: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194144) {
            ctx->pc = 0x1941B8u;
            goto label_1941b8;
        }
    }
    ctx->pc = 0x19414Cu;
    // 0x19414c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x19414cu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x194150: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x194150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x194154: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x194154u;
    {
        const bool branch_taken_0x194154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194154u;
            // 0x194158: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194154) {
            ctx->pc = 0x194188u;
            goto label_194188;
        }
    }
    ctx->pc = 0x19415Cu;
    // 0x19415c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194160: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x194160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x194164: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194168: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19416c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19416cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x194170: 0xc065944  jal         func_196510
    ctx->pc = 0x194170u;
    SET_GPR_U32(ctx, 31, 0x194178u);
    ctx->pc = 0x194174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194170u;
            // 0x194174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194178u; }
        if (ctx->pc != 0x194178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194178u; }
        if (ctx->pc != 0x194178u) { return; }
    }
    ctx->pc = 0x194178u;
    // 0x194178: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x194178u;
    SET_GPR_U32(ctx, 31, 0x194180u);
    ctx->pc = 0x19417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194178u;
            // 0x19417c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194180u; }
        if (ctx->pc != 0x194180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194180u; }
        if (ctx->pc != 0x194180u) { return; }
    }
    ctx->pc = 0x194180u;
    // 0x194180: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x194180u;
    {
        const bool branch_taken_0x194180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194180) {
            ctx->pc = 0x194208u;
            goto label_194208;
        }
    }
    ctx->pc = 0x194188u;
label_194188:
    // 0x194188: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19418c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x194190: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194194: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194198: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x19419c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19419cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1941a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1941a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1941a8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1941a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1941ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1941ACu;
    {
        const bool branch_taken_0x1941ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941ACu;
            // 0x1941b0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941ac) {
            ctx->pc = 0x194208u;
            goto label_194208;
        }
    }
    ctx->pc = 0x1941B4u;
    // 0x1941b4: 0x0  nop
    ctx->pc = 0x1941b4u;
    // NOP
label_1941b8:
    // 0x1941b8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1941bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1941bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1941c0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1941c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1941c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1941c8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1941c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1941cc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1941ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1941d0: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x1941d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1941d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1941d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941dc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1941dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1941e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1941e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1941e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1941e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1941e8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1941e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1941ec: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1941ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1941f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1941f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1941f4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1941f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1941f8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1941f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1941fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1941fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194200: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x194200u;
    SET_GPR_U32(ctx, 31, 0x194208u);
    ctx->pc = 0x194204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194200u;
            // 0x194204: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194208u; }
        if (ctx->pc != 0x194208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194208u; }
        if (ctx->pc != 0x194208u) { return; }
    }
    ctx->pc = 0x194208u;
label_194208:
    // 0x194208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19420c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19420cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194210: 0x3e00008  jr          $ra
    ctx->pc = 0x194210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194210u;
            // 0x194214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1940D0u: goto label_1940d0;
            case 0x194130u: goto label_194130;
            case 0x194140u: goto label_194140;
            case 0x194188u: goto label_194188;
            case 0x1941B8u: goto label_1941b8;
            case 0x194208u: goto label_194208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194218u;
}
