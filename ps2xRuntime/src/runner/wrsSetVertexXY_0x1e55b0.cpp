#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetVertexXY
// Address: 0x1e55b0 - 0x1e55d8
void wrsSetVertexXY_0x1e55b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetVertexXY_0x1e55b0");
#endif

    ctx->pc = 0x1e55b0u;

    // 0x1e55b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1e55b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e55b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e55b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e55b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55bc: 0x0  nop
    ctx->pc = 0x1e55bcu;
    // NOP
    // 0x1e55c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e55c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e55c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e55c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e55c8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1e55c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1e55cc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1e55ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1e55d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E55D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E55D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55D0u;
            // 0x1e55d4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E55D8u;
}
