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
// Address: 0x1ea0e0 - 0x1ea118
void Trans3Dto2D_0x1ea0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D_0x1ea0e0");
#endif

    ctx->pc = 0x1ea0e0u;

    // 0x1ea0e0: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1ea0e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ea0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea0e8: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x1ea0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x1ea0ec: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1ea0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1ea0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea0f4: 0x0  nop
    ctx->pc = 0x1ea0f4u;
    // NOP
    // 0x1ea0f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ea0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ea0fc: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1ea0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1ea100: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ea100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ea104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ea104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ea108: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ea108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ea10c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ea10cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ea110: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA110u;
            // 0x1ea114: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA118u;
}
