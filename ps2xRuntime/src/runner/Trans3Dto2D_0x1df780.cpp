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
// Address: 0x1df780 - 0x1df7bc
void Trans3Dto2D_0x1df780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D_0x1df780");
#endif

    ctx->pc = 0x1df780u;

    // 0x1df780: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1df780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1df784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1df784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df788: 0x0  nop
    ctx->pc = 0x1df788u;
    // NOP
    // 0x1df78c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1df78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1df790: 0x3c0340dc  lui         $v1, 0x40DC
    ctx->pc = 0x1df790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16604 << 16));
    // 0x1df794: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1df794u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1df798: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1df79c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1df79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1df7a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1df7a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df7a4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1df7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1df7a8: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1df7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1df7ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df7acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1df7b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1df7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1df7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7B4u;
            // 0x1df7b8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF7BCu;
}
