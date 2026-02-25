#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetVertexXYZ
// Address: 0x151b20 - 0x151b50
void wrsSetVertexXYZ_0x151b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetVertexXYZ_0x151b20");
#endif

    ctx->pc = 0x151b20u;

    // 0x151b20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x151b20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151b24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151b24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b28: 0x0  nop
    ctx->pc = 0x151b28u;
    // NOP
    // 0x151b2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x151b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151b30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151b34: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x151b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x151b38: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x151b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x151b3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151b3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b40: 0x0  nop
    ctx->pc = 0x151b40u;
    // NOP
    // 0x151b44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151b48: 0x3e00008  jr          $ra
    ctx->pc = 0x151B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B48u;
            // 0x151b4c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151B50u;
}
