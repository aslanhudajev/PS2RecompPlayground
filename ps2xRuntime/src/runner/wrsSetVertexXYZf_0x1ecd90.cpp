#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetVertexXYZf
// Address: 0x1ecd90 - 0x1ecda0
void wrsSetVertexXYZf_0x1ecd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetVertexXYZf_0x1ecd90");
#endif

    ctx->pc = 0x1ecd90u;

    // 0x1ecd90: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1ecd90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ecd94: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1ecd94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ecd98: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD98u;
            // 0x1ecd9c: 0xe48e0008  swc1        $f14, 0x8($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECDA0u;
}
