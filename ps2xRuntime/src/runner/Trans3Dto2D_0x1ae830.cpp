#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Trans3Dto2D
// Address: 0x1ae830 - 0x1ae868
void Trans3Dto2D_0x1ae830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D_0x1ae830");
#endif

    ctx->pc = 0x1ae830u;

    // 0x1ae830: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1ae830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1ae834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ae834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae838: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x1ae838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x1ae83c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1ae83cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1ae840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae844: 0x0  nop
    ctx->pc = 0x1ae844u;
    // NOP
    // 0x1ae848: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ae84c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1ae84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1ae850: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ae850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ae854: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ae858: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ae858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ae85c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ae85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ae860: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE860u;
            // 0x1ae864: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE868u;
}
