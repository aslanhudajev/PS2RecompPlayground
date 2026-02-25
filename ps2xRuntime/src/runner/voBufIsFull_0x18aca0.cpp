#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufIsFull
// Address: 0x18aca0 - 0x18acb4
void voBufIsFull_0x18aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufIsFull_0x18aca0");
#endif

    ctx->pc = 0x18aca0u;

    // 0x18aca0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18aca4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18aca8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x18aca8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18acac: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ACB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACACu;
            // 0x18acb0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ACB4u;
}
