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
// Address: 0x19bd40 - 0x19bd78
void Trans3Dto2D_0x19bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D_0x19bd40");
#endif

    ctx->pc = 0x19bd40u;

    // 0x19bd40: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x19bd44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19bd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bd48: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x19bd4c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x19bd4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x19bd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bd54: 0x0  nop
    ctx->pc = 0x19bd54u;
    // NOP
    // 0x19bd58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bd58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19bd5c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x19bd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x19bd60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19bd60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19bd64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bd64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19bd68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19bd6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19bd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x19BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD70u;
            // 0x19bd74: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BD78u;
}
