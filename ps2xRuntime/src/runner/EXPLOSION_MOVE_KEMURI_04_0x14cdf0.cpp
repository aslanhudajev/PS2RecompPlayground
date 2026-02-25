#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_KEMURI_04
// Address: 0x14cdf0 - 0x14cf04
void EXPLOSION_MOVE_KEMURI_04_0x14cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_KEMURI_04_0x14cdf0");
#endif

    ctx->pc = 0x14cdf0u;

    // 0x14cdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cdf4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14cdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cdfc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14cdfcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14ce00: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ce04: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ce08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ce0c: 0x0  nop
    ctx->pc = 0x14ce0cu;
    // NOP
    // 0x14ce10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14ce10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14ce14: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14ce14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14ce18: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ce1c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14ce20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14ce24: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14ce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14ce28: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14ce2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14ce30: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14ce34: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14ce38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14ce3c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14ce3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14ce40: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14ce44: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14ce44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14ce48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CE48u;
    {
        const bool branch_taken_0x14ce48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce48) {
            ctx->pc = 0x14CE58u;
            goto label_14ce58;
        }
    }
    ctx->pc = 0x14CE50u;
    // 0x14ce50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ce54: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_14ce58:
    // 0x14ce58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14ce5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ce60: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14ce64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ce68: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14ce6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ce70: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14ce70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ce74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CE74u;
    {
        const bool branch_taken_0x14ce74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ce74) {
            ctx->pc = 0x14CE90u;
            goto label_14ce90;
        }
    }
    ctx->pc = 0x14CE7Cu;
    // 0x14ce7c: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14CE7Cu;
    SET_GPR_U32(ctx, 31, 0x14CE84u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE84u; }
        if (ctx->pc != 0x14CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE84u; }
        if (ctx->pc != 0x14CE84u) { return; }
    }
    ctx->pc = 0x14CE84u;
    // 0x14ce84: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14CE84u;
    {
        const bool branch_taken_0x14ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce84) {
            ctx->pc = 0x14CEF8u;
            goto label_14cef8;
        }
    }
    ctx->pc = 0x14CE8Cu;
    // 0x14ce8c: 0x0  nop
    ctx->pc = 0x14ce8cu;
    // NOP
label_14ce90:
    // 0x14ce90: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14ce94: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ce98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ce9c: 0x0  nop
    ctx->pc = 0x14ce9cu;
    // NOP
    // 0x14cea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14cea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cea4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14CEA4u;
    {
        const bool branch_taken_0x14cea4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEA4u;
            // 0x14cea8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cea4) {
            ctx->pc = 0x14CEF0u;
            goto label_14cef0;
        }
    }
    ctx->pc = 0x14CEACu;
    // 0x14ceac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ceacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ceb0: 0x0  nop
    ctx->pc = 0x14ceb0u;
    // NOP
    // 0x14ceb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ceb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ceb8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14CEB8u;
    {
        const bool branch_taken_0x14ceb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ceb8) {
            ctx->pc = 0x14CEF0u;
            goto label_14cef0;
        }
    }
    ctx->pc = 0x14CEC0u;
    // 0x14cec0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cec4: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14cec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cecc: 0x0  nop
    ctx->pc = 0x14ceccu;
    // NOP
    // 0x14ced0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ced0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ced4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14CED4u;
    {
        const bool branch_taken_0x14ced4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CED4u;
            // 0x14ced8: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ced4) {
            ctx->pc = 0x14CEF0u;
            goto label_14cef0;
        }
    }
    ctx->pc = 0x14CEDCu;
    // 0x14cedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cee0: 0x0  nop
    ctx->pc = 0x14cee0u;
    // NOP
    // 0x14cee4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14cee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cee8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14CEE8u;
    {
        const bool branch_taken_0x14cee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cee8) {
            ctx->pc = 0x14CEF8u;
            goto label_14cef8;
        }
    }
    ctx->pc = 0x14CEF0u;
label_14cef0:
    // 0x14cef0: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14CEF0u;
    SET_GPR_U32(ctx, 31, 0x14CEF8u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEF8u; }
        if (ctx->pc != 0x14CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEF8u; }
        if (ctx->pc != 0x14CEF8u) { return; }
    }
    ctx->pc = 0x14CEF8u;
label_14cef8:
    // 0x14cef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cefc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEFCu;
            // 0x14cf00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CE58u: goto label_14ce58;
            case 0x14CE90u: goto label_14ce90;
            case 0x14CEF0u: goto label_14cef0;
            case 0x14CEF8u: goto label_14cef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CF04u;
}
