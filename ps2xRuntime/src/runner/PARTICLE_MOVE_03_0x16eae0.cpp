#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PARTICLE_MOVE_03
// Address: 0x16eae0 - 0x16eb4c
void PARTICLE_MOVE_03_0x16eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PARTICLE_MOVE_03_0x16eae0");
#endif

    ctx->pc = 0x16eae0u;

    // 0x16eae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eae4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x16eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x16eae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eaf0: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x16eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16eaf4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eaf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16eaf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16eafc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x16eafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16eb00: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x16eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16eb04: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x16eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eb08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16eb08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16eb0c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x16eb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x16eb10: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x16eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16eb14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16eb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eb18: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16EB18u;
    {
        const bool branch_taken_0x16eb18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB18u;
            // 0x16eb1c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb18) {
            ctx->pc = 0x16EB38u;
            goto label_16eb38;
        }
    }
    ctx->pc = 0x16EB20u;
    // 0x16eb20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eb24: 0x0  nop
    ctx->pc = 0x16eb24u;
    // NOP
    // 0x16eb28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16eb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16eb2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EB2Cu;
    {
        const bool branch_taken_0x16eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB2Cu;
            // 0x16eb30: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb2c) {
            ctx->pc = 0x16EB40u;
            goto label_16eb40;
        }
    }
    ctx->pc = 0x16EB34u;
    // 0x16eb34: 0x0  nop
    ctx->pc = 0x16eb34u;
    // NOP
label_16eb38:
    // 0x16eb38: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16EB38u;
    SET_GPR_U32(ctx, 31, 0x16EB40u);
    ctx->pc = 0x16F2F0u;
    if (runtime->hasFunction(0x16F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x16F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EB40u; }
        if (ctx->pc != 0x16EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleFree_0x16f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EB40u; }
        if (ctx->pc != 0x16EB40u) { return; }
    }
    ctx->pc = 0x16EB40u;
label_16eb40:
    // 0x16eb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb44: 0x3e00008  jr          $ra
    ctx->pc = 0x16EB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB44u;
            // 0x16eb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EB38u: goto label_16eb38;
            case 0x16EB40u: goto label_16eb40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EB4Cu;
}
