#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: spline
// Address: 0x119e00 - 0x119e58
void spline_0x119e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("spline_0x119e00");
#endif

    ctx->pc = 0x119e00u;

    // 0x119e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119e04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x119e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e08: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x119e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x119e0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e10: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x119e10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x119e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119e18: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x119E18u;
    SET_GPR_U32(ctx, 31, 0x119E20u);
    ctx->pc = 0x119E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E18u;
            // 0x119e1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E20u; }
        if (ctx->pc != 0x119E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E20u; }
        if (ctx->pc != 0x119E20u) { return; }
    }
    ctx->pc = 0x119E20u;
    // 0x119e20: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x119e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119e24: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x119e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119e28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x119e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x119e2c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x119e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119e30: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x119e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119e3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x119e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x119e40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119e44: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x119e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x119e48: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x119e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119e4c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x119e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x119e50: 0x3e00008  jr          $ra
    ctx->pc = 0x119E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E50u;
            // 0x119e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119E58u;
}
