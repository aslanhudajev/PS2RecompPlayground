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
// Address: 0x11a930 - 0x11a944
void voBufIsFull_0x11a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufIsFull_0x11a930");
#endif

    ctx->pc = 0x11a930u;

    // 0x11a930: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11a934: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a938: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11a938u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A93Cu;
            // 0x11a940: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A944u;
}
