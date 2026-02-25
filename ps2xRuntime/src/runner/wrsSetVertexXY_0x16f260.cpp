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
// Address: 0x16f260 - 0x16f288
void wrsSetVertexXY_0x16f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetVertexXY_0x16f260");
#endif

    ctx->pc = 0x16f260u;

    // 0x16f260: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16f260u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16f264: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16f264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16f268: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x16f268u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f26c: 0x0  nop
    ctx->pc = 0x16f26cu;
    // NOP
    // 0x16f270: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16f270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16f274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16f274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16f278: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x16f278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x16f27c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x16f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16f280: 0x3e00008  jr          $ra
    ctx->pc = 0x16F280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F280u;
            // 0x16f284: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F288u;
}
