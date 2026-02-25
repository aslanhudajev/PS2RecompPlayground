#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetVertexXYf
// Address: 0x1720f0 - 0x172104
void wrsSetVertexXYf_0x1720f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetVertexXYf_0x1720f0");
#endif

    ctx->pc = 0x1720f0u;

    // 0x1720f0: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1720f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1720f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1720f8: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1720f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1720fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1720FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720FCu;
            // 0x172100: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172104u;
}
