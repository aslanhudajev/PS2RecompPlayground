#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_KEMURI_00
// Address: 0x14d270 - 0x14d384
void EXPLOSION_MOVE_KEMURI_00_0x14d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_KEMURI_00_0x14d270");
#endif

    ctx->pc = 0x14d270u;

    // 0x14d270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d274: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d27c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d27cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d280: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d284: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d288: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d28c: 0x0  nop
    ctx->pc = 0x14d28cu;
    // NOP
    // 0x14d290: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d294: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d298: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d29c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d2a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d2a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d2a8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d2ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d2b0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d2b4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d2b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d2bc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d2c0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d2c4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d2c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D2C8u;
    {
        const bool branch_taken_0x14d2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2c8) {
            ctx->pc = 0x14D2D8u;
            goto label_14d2d8;
        }
    }
    ctx->pc = 0x14D2D0u;
    // 0x14d2d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d2d4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_14d2d8:
    // 0x14d2d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d2dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d2e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14d2e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d2e8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d2ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d2f0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14d2f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d2f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D2F4u;
    {
        const bool branch_taken_0x14d2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d2f4) {
            ctx->pc = 0x14D310u;
            goto label_14d310;
        }
    }
    ctx->pc = 0x14D2FCu;
    // 0x14d2fc: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D2FCu;
    SET_GPR_U32(ctx, 31, 0x14D304u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D304u; }
        if (ctx->pc != 0x14D304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D304u; }
        if (ctx->pc != 0x14D304u) { return; }
    }
    ctx->pc = 0x14D304u;
    // 0x14d304: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14D304u;
    {
        const bool branch_taken_0x14d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d304) {
            ctx->pc = 0x14D378u;
            goto label_14d378;
        }
    }
    ctx->pc = 0x14D30Cu;
    // 0x14d30c: 0x0  nop
    ctx->pc = 0x14d30cu;
    // NOP
label_14d310:
    // 0x14d310: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d314: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d31c: 0x0  nop
    ctx->pc = 0x14d31cu;
    // NOP
    // 0x14d320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d324: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D324u;
    {
        const bool branch_taken_0x14d324 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D324u;
            // 0x14d328: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d324) {
            ctx->pc = 0x14D370u;
            goto label_14d370;
        }
    }
    ctx->pc = 0x14D32Cu;
    // 0x14d32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d330: 0x0  nop
    ctx->pc = 0x14d330u;
    // NOP
    // 0x14d334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d338: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D338u;
    {
        const bool branch_taken_0x14d338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d338) {
            ctx->pc = 0x14D370u;
            goto label_14d370;
        }
    }
    ctx->pc = 0x14D340u;
    // 0x14d340: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d344: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d34c: 0x0  nop
    ctx->pc = 0x14d34cu;
    // NOP
    // 0x14d350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d354: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D354u;
    {
        const bool branch_taken_0x14d354 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D354u;
            // 0x14d358: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d354) {
            ctx->pc = 0x14D370u;
            goto label_14d370;
        }
    }
    ctx->pc = 0x14D35Cu;
    // 0x14d35c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d360: 0x0  nop
    ctx->pc = 0x14d360u;
    // NOP
    // 0x14d364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d368: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D368u;
    {
        const bool branch_taken_0x14d368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d368) {
            ctx->pc = 0x14D378u;
            goto label_14d378;
        }
    }
    ctx->pc = 0x14D370u;
label_14d370:
    // 0x14d370: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D370u;
    SET_GPR_U32(ctx, 31, 0x14D378u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D378u; }
        if (ctx->pc != 0x14D378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D378u; }
        if (ctx->pc != 0x14D378u) { return; }
    }
    ctx->pc = 0x14D378u;
label_14d378:
    // 0x14d378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d37c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D37Cu;
            // 0x14d380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D2D8u: goto label_14d2d8;
            case 0x14D310u: goto label_14d310;
            case 0x14D370u: goto label_14d370;
            case 0x14D378u: goto label_14d378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D384u;
}
