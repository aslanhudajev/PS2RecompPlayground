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
// Address: 0x1e2470 - 0x1e24ac
void Trans3Dto2D_0x1e2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D_0x1e2470");
#endif

    ctx->pc = 0x1e2470u;

    // 0x1e2470: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1e2474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2478: 0x0  nop
    ctx->pc = 0x1e2478u;
    // NOP
    // 0x1e247c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1e247cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e2480: 0x3c0340dc  lui         $v1, 0x40DC
    ctx->pc = 0x1e2480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16604 << 16));
    // 0x1e2484: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2484u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2488: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e2488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e248c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e248cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e2490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2494: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1e2494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1e2498: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1e2498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1e249c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e249cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e24a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e24a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e24a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E24A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24A4u;
            // 0x1e24a8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E24ACu;
}
