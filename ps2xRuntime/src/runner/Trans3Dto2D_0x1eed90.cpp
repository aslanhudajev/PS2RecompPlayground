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
// Address: 0x1eed90 - 0x1eedc4
void Trans3Dto2D_0x1eed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D_0x1eed90");
#endif

    ctx->pc = 0x1eed90u;

    // 0x1eed90: 0x3c033f0c  lui         $v1, 0x3F0C
    ctx->pc = 0x1eed90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16140 << 16));
    // 0x1eed94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1eed94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1eed98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eed98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eed9c: 0x0  nop
    ctx->pc = 0x1eed9cu;
    // NOP
    // 0x1eeda0: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x1eeda0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1eeda4: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1eeda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1eeda8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1eeda8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1eedac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1eedacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eedb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1eedb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1eedb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1eedb8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1eedb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eedbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDBCu;
            // 0x1eedc0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEDC4u;
}
