#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_blocks_sync_point
// Address: 0x1f07a8 - 0x1f07b8
void inflate_blocks_sync_point_0x1f07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_blocks_sync_point_0x1f07a8");
#endif

    ctx->pc = 0x1f07a8u;

    // 0x1f07a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f07ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f07acu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1f07b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F07B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F07B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07B0u;
            // 0x1f07b4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F07B8u;
}
