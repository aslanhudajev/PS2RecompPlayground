#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_KEMURI_02
// Address: 0x14d030 - 0x14d144
void EXPLOSION_MOVE_KEMURI_02_0x14d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_KEMURI_02_0x14d030");
#endif

    ctx->pc = 0x14d030u;

    // 0x14d030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d034: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d03c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d03cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d040: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d044: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d048: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d04c: 0x0  nop
    ctx->pc = 0x14d04cu;
    // NOP
    // 0x14d050: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d054: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d058: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d05c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d060: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d064: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d068: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d06c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d070: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d074: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d07c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d080: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d084: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D088u;
    {
        const bool branch_taken_0x14d088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d088) {
            ctx->pc = 0x14D098u;
            goto label_14d098;
        }
    }
    ctx->pc = 0x14D090u;
    // 0x14d090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d094: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14d094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_14d098:
    // 0x14d098: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d09c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d0a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14d0a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d0a8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d0ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d0b0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14d0b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d0b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D0B4u;
    {
        const bool branch_taken_0x14d0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d0b4) {
            ctx->pc = 0x14D0D0u;
            goto label_14d0d0;
        }
    }
    ctx->pc = 0x14D0BCu;
    // 0x14d0bc: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D0BCu;
    SET_GPR_U32(ctx, 31, 0x14D0C4u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0C4u; }
        if (ctx->pc != 0x14D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0C4u; }
        if (ctx->pc != 0x14D0C4u) { return; }
    }
    ctx->pc = 0x14D0C4u;
    // 0x14d0c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14D0C4u;
    {
        const bool branch_taken_0x14d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0c4) {
            ctx->pc = 0x14D138u;
            goto label_14d138;
        }
    }
    ctx->pc = 0x14D0CCu;
    // 0x14d0cc: 0x0  nop
    ctx->pc = 0x14d0ccu;
    // NOP
label_14d0d0:
    // 0x14d0d0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d0d4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d0dc: 0x0  nop
    ctx->pc = 0x14d0dcu;
    // NOP
    // 0x14d0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d0e4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D0E4u;
    {
        const bool branch_taken_0x14d0e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0E4u;
            // 0x14d0e8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0e4) {
            ctx->pc = 0x14D130u;
            goto label_14d130;
        }
    }
    ctx->pc = 0x14D0ECu;
    // 0x14d0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d0f0: 0x0  nop
    ctx->pc = 0x14d0f0u;
    // NOP
    // 0x14d0f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d0f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d0f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D0F8u;
    {
        const bool branch_taken_0x14d0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d0f8) {
            ctx->pc = 0x14D130u;
            goto label_14d130;
        }
    }
    ctx->pc = 0x14D100u;
    // 0x14d100: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d104: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d10c: 0x0  nop
    ctx->pc = 0x14d10cu;
    // NOP
    // 0x14d110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d114: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D114u;
    {
        const bool branch_taken_0x14d114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D114u;
            // 0x14d118: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d114) {
            ctx->pc = 0x14D130u;
            goto label_14d130;
        }
    }
    ctx->pc = 0x14D11Cu;
    // 0x14d11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d120: 0x0  nop
    ctx->pc = 0x14d120u;
    // NOP
    // 0x14d124: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d128: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D128u;
    {
        const bool branch_taken_0x14d128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d128) {
            ctx->pc = 0x14D138u;
            goto label_14d138;
        }
    }
    ctx->pc = 0x14D130u;
label_14d130:
    // 0x14d130: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D130u;
    SET_GPR_U32(ctx, 31, 0x14D138u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D138u; }
        if (ctx->pc != 0x14D138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D138u; }
        if (ctx->pc != 0x14D138u) { return; }
    }
    ctx->pc = 0x14D138u;
label_14d138:
    // 0x14d138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D13Cu;
            // 0x14d140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D098u: goto label_14d098;
            case 0x14D0D0u: goto label_14d0d0;
            case 0x14D130u: goto label_14d130;
            case 0x14D138u: goto label_14d138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D144u;
}
