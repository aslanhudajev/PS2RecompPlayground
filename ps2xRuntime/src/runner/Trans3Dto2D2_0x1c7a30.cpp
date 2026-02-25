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
// Address: 0x1c7a30 - 0x1c7a6c
void Trans3Dto2D2_0x1c7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D2_0x1c7a30");
#endif

    ctx->pc = 0x1c7a30u;

    // 0x1c7a30: 0x3c0340d0  lui         $v1, 0x40D0
    ctx->pc = 0x1c7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16592 << 16));
    // 0x1c7a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7a38: 0x0  nop
    ctx->pc = 0x1c7a38u;
    // NOP
    // 0x1c7a3c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1c7a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c7a40: 0x3c0340e6  lui         $v1, 0x40E6
    ctx->pc = 0x1c7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16614 << 16));
    // 0x1c7a44: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1c7a44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26214u)));
    // 0x1c7a48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7a48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c7a4c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c7a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c7a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7a54: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1c7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1c7a58: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1c7a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1c7a5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c7a60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c7a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c7a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A64u;
            // 0x1c7a68: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7A6Cu;
}
