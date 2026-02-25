#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Trans3Dto2D2
// Address: 0x1a3fb0 - 0x1a3fec
void Trans3Dto2D2_0x1a3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D2_0x1a3fb0");
#endif

    ctx->pc = 0x1a3fb0u;

    // 0x1a3fb0: 0x3c0340c3  lui         $v1, 0x40C3
    ctx->pc = 0x1a3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16579 << 16));
    // 0x1a3fb4: 0x34663333  ori         $a2, $v1, 0x3333
    ctx->pc = 0x1a3fb4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a3fb8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1a3fb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3fbc: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x1a3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
    // 0x1a3fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a3fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3fc4: 0x0  nop
    ctx->pc = 0x1a3fc4u;
    // NOP
    // 0x1a3fc8: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1a3fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1a3fcc: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1a3fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1a3fd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3fd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a3fd4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a3fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a3fd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a3fdc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a3fe0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a3fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a3fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FE4u;
            // 0x1a3fe8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3FECu;
}
