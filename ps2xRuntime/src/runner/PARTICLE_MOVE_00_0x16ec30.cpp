#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PARTICLE_MOVE_00
// Address: 0x16ec30 - 0x16ec9c
void PARTICLE_MOVE_00_0x16ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PARTICLE_MOVE_00_0x16ec30");
#endif

    ctx->pc = 0x16ec30u;

    // 0x16ec30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ec34: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x16ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x16ec38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ec3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ec3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ec40: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x16ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ec44: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ec48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ec48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ec4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x16ec4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16ec50: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x16ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ec54: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x16ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ec58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ec58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ec5c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x16ec5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x16ec60: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x16ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ec64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ec64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ec68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16EC68u;
    {
        const bool branch_taken_0x16ec68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC68u;
            // 0x16ec6c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec68) {
            ctx->pc = 0x16EC88u;
            goto label_16ec88;
        }
    }
    ctx->pc = 0x16EC70u;
    // 0x16ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ec74: 0x0  nop
    ctx->pc = 0x16ec74u;
    // NOP
    // 0x16ec78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16ec78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16ec7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EC7Cu;
    {
        const bool branch_taken_0x16ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC7Cu;
            // 0x16ec80: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec7c) {
            ctx->pc = 0x16EC90u;
            goto label_16ec90;
        }
    }
    ctx->pc = 0x16EC84u;
    // 0x16ec84: 0x0  nop
    ctx->pc = 0x16ec84u;
    // NOP
label_16ec88:
    // 0x16ec88: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16EC88u;
    SET_GPR_U32(ctx, 31, 0x16EC90u);
    ctx->pc = 0x16F2F0u;
    if (runtime->hasFunction(0x16F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x16F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC90u; }
        if (ctx->pc != 0x16EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleFree_0x16f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC90u; }
        if (ctx->pc != 0x16EC90u) { return; }
    }
    ctx->pc = 0x16EC90u;
label_16ec90:
    // 0x16ec90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ec94: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC94u;
            // 0x16ec98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EC88u: goto label_16ec88;
            case 0x16EC90u: goto label_16ec90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EC9Cu;
}
