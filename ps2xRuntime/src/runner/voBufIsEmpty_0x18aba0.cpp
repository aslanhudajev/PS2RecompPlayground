#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufIsEmpty
// Address: 0x18aba0 - 0x18abb0
void voBufIsEmpty_0x18aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufIsEmpty_0x18aba0");
#endif

    ctx->pc = 0x18aba0u;

    // 0x18aba0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x18aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18aba4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x18aba4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x18ABA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABA8u;
            // 0x18abac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ABB0u;
}
