#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UncAddr
// Address: 0x187b30 - 0x187b44
void UncAddr_0x187b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UncAddr_0x187b30");
#endif

    ctx->pc = 0x187b30u;

    // 0x187b30: 0x4193c  dsll32      $v1, $a0, 4
    ctx->pc = 0x187b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x187b34: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x187b38: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x187b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x187b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x187B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B3Cu;
            // 0x187b40: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187B44u;
}
