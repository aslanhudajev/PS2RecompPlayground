#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PARTICLE_MOVE_04
// Address: 0x16ea70 - 0x16eadc
void PARTICLE_MOVE_04_0x16ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PARTICLE_MOVE_04_0x16ea70");
#endif

    ctx->pc = 0x16ea70u;

    // 0x16ea70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ea74: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x16ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x16ea78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ea7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ea7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ea80: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x16ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ea84: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16ea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ea88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ea88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ea8c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x16ea8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16ea90: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x16ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ea94: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x16ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ea98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ea98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ea9c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x16ea9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x16eaa0: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x16eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eaa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16eaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eaa8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16EAA8u;
    {
        const bool branch_taken_0x16eaa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAA8u;
            // 0x16eaac: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaa8) {
            ctx->pc = 0x16EAC8u;
            goto label_16eac8;
        }
    }
    ctx->pc = 0x16EAB0u;
    // 0x16eab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eab4: 0x0  nop
    ctx->pc = 0x16eab4u;
    // NOP
    // 0x16eab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16eab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16eabc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EABCu;
    {
        const bool branch_taken_0x16eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EABCu;
            // 0x16eac0: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eabc) {
            ctx->pc = 0x16EAD0u;
            goto label_16ead0;
        }
    }
    ctx->pc = 0x16EAC4u;
    // 0x16eac4: 0x0  nop
    ctx->pc = 0x16eac4u;
    // NOP
label_16eac8:
    // 0x16eac8: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16EAC8u;
    SET_GPR_U32(ctx, 31, 0x16EAD0u);
    ctx->pc = 0x16F2F0u;
    if (runtime->hasFunction(0x16F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x16F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EAD0u; }
        if (ctx->pc != 0x16EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleFree_0x16f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EAD0u; }
        if (ctx->pc != 0x16EAD0u) { return; }
    }
    ctx->pc = 0x16EAD0u;
label_16ead0:
    // 0x16ead0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x16EAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAD4u;
            // 0x16ead8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EAD0u: goto label_16ead0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EADCu;
}
