#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: HitCheck
// Address: 0x14f1b0 - 0x14f218
void HitCheck_0x14f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("HitCheck_0x14f1b0");
#endif

    ctx->pc = 0x14f1b0u;

    // 0x14f1b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x14f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f1b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f1b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f1b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f1bc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x14F1BCu;
    {
        const bool branch_taken_0x14f1bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f1bc) {
            ctx->pc = 0x14F208u;
            goto label_14f208;
        }
    }
    ctx->pc = 0x14F1C4u;
    // 0x14f1c4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x14f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f1c8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f1cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f1ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f1d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14F1D0u;
    {
        const bool branch_taken_0x14f1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f1d0) {
            ctx->pc = 0x14F208u;
            goto label_14f208;
        }
    }
    ctx->pc = 0x14F1D8u;
    // 0x14f1d8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x14f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f1dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x14f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f1e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14f1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f1e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x14F1E4u;
    {
        const bool branch_taken_0x14f1e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f1e4) {
            ctx->pc = 0x14F208u;
            goto label_14f208;
        }
    }
    ctx->pc = 0x14F1ECu;
    // 0x14f1ec: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f1f0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x14f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f1f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14f1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f1f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F1F8u;
    {
        const bool branch_taken_0x14f1f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1F8u;
            // 0x14f1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1f8) {
            ctx->pc = 0x14F208u;
            goto label_14f208;
        }
    }
    ctx->pc = 0x14F200u;
    // 0x14f200: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F200u;
    {
        const bool branch_taken_0x14f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f200) {
            ctx->pc = 0x14F210u;
            goto label_14f210;
        }
    }
    ctx->pc = 0x14F208u;
label_14f208:
    // 0x14f208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f20c: 0x0  nop
    ctx->pc = 0x14f20cu;
    // NOP
label_14f210:
    // 0x14f210: 0x3e00008  jr          $ra
    ctx->pc = 0x14F210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F208u: goto label_14f208;
            case 0x14F210u: goto label_14f210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F218u;
}
