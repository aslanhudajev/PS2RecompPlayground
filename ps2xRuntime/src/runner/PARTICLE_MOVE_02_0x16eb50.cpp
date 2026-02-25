#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PARTICLE_MOVE_02
// Address: 0x16eb50 - 0x16ebbc
void PARTICLE_MOVE_02_0x16eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PARTICLE_MOVE_02_0x16eb50");
#endif

    ctx->pc = 0x16eb50u;

    // 0x16eb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eb54: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x16eb58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eb60: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x16eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16eb64: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eb68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16eb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16eb6c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x16eb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16eb70: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x16eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16eb74: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x16eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eb78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16eb78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16eb7c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x16eb7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x16eb80: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x16eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eb84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16eb84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eb88: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16EB88u;
    {
        const bool branch_taken_0x16eb88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB88u;
            // 0x16eb8c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb88) {
            ctx->pc = 0x16EBA8u;
            goto label_16eba8;
        }
    }
    ctx->pc = 0x16EB90u;
    // 0x16eb90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eb90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eb94: 0x0  nop
    ctx->pc = 0x16eb94u;
    // NOP
    // 0x16eb98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16eb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16eb9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EB9Cu;
    {
        const bool branch_taken_0x16eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB9Cu;
            // 0x16eba0: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb9c) {
            ctx->pc = 0x16EBB0u;
            goto label_16ebb0;
        }
    }
    ctx->pc = 0x16EBA4u;
    // 0x16eba4: 0x0  nop
    ctx->pc = 0x16eba4u;
    // NOP
label_16eba8:
    // 0x16eba8: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16EBA8u;
    SET_GPR_U32(ctx, 31, 0x16EBB0u);
    ctx->pc = 0x16F2F0u;
    if (runtime->hasFunction(0x16F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x16F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBB0u; }
        if (ctx->pc != 0x16EBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleFree_0x16f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBB0u; }
        if (ctx->pc != 0x16EBB0u) { return; }
    }
    ctx->pc = 0x16EBB0u;
label_16ebb0:
    // 0x16ebb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x16EBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EBB4u;
            // 0x16ebb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EBA8u: goto label_16eba8;
            case 0x16EBB0u: goto label_16ebb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EBBCu;
}
