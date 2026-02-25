#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_KEMURI_01
// Address: 0x14d150 - 0x14d264
void EXPLOSION_MOVE_KEMURI_01_0x14d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_KEMURI_01_0x14d150");
#endif

    ctx->pc = 0x14d150u;

    // 0x14d150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d154: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d15c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d15cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d160: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d164: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d168: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d16c: 0x0  nop
    ctx->pc = 0x14d16cu;
    // NOP
    // 0x14d170: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d174: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d178: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d17c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d180: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d184: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d188: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d18c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d190: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d194: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d198: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d19c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d1a0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d1a4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d1a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d1a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D1A8u;
    {
        const bool branch_taken_0x14d1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1a8) {
            ctx->pc = 0x14D1B8u;
            goto label_14d1b8;
        }
    }
    ctx->pc = 0x14D1B0u;
    // 0x14d1b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d1b4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_14d1b8:
    // 0x14d1b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d1bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d1c0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14d1c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d1c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d1cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d1d0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14d1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d1d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D1D4u;
    {
        const bool branch_taken_0x14d1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d1d4) {
            ctx->pc = 0x14D1F0u;
            goto label_14d1f0;
        }
    }
    ctx->pc = 0x14D1DCu;
    // 0x14d1dc: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D1DCu;
    SET_GPR_U32(ctx, 31, 0x14D1E4u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D1E4u; }
        if (ctx->pc != 0x14D1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D1E4u; }
        if (ctx->pc != 0x14D1E4u) { return; }
    }
    ctx->pc = 0x14D1E4u;
    // 0x14d1e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14D1E4u;
    {
        const bool branch_taken_0x14d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1e4) {
            ctx->pc = 0x14D258u;
            goto label_14d258;
        }
    }
    ctx->pc = 0x14D1ECu;
    // 0x14d1ec: 0x0  nop
    ctx->pc = 0x14d1ecu;
    // NOP
label_14d1f0:
    // 0x14d1f0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d1f4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14d1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d1fc: 0x0  nop
    ctx->pc = 0x14d1fcu;
    // NOP
    // 0x14d200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d204: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D204u;
    {
        const bool branch_taken_0x14d204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D204u;
            // 0x14d208: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d204) {
            ctx->pc = 0x14D250u;
            goto label_14d250;
        }
    }
    ctx->pc = 0x14D20Cu;
    // 0x14d20c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d20cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d210: 0x0  nop
    ctx->pc = 0x14d210u;
    // NOP
    // 0x14d214: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d218: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D218u;
    {
        const bool branch_taken_0x14d218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d218) {
            ctx->pc = 0x14D250u;
            goto label_14d250;
        }
    }
    ctx->pc = 0x14D220u;
    // 0x14d220: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d224: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d22c: 0x0  nop
    ctx->pc = 0x14d22cu;
    // NOP
    // 0x14d230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d234: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D234u;
    {
        const bool branch_taken_0x14d234 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D234u;
            // 0x14d238: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d234) {
            ctx->pc = 0x14D250u;
            goto label_14d250;
        }
    }
    ctx->pc = 0x14D23Cu;
    // 0x14d23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d240: 0x0  nop
    ctx->pc = 0x14d240u;
    // NOP
    // 0x14d244: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d248: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D248u;
    {
        const bool branch_taken_0x14d248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d248) {
            ctx->pc = 0x14D258u;
            goto label_14d258;
        }
    }
    ctx->pc = 0x14D250u;
label_14d250:
    // 0x14d250: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D250u;
    SET_GPR_U32(ctx, 31, 0x14D258u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D258u; }
        if (ctx->pc != 0x14D258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D258u; }
        if (ctx->pc != 0x14D258u) { return; }
    }
    ctx->pc = 0x14D258u;
label_14d258:
    // 0x14d258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d25c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D25Cu;
            // 0x14d260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D1B8u: goto label_14d1b8;
            case 0x14D1F0u: goto label_14d1f0;
            case 0x14D250u: goto label_14d250;
            case 0x14D258u: goto label_14d258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D264u;
}
