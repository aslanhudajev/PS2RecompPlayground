#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: scTag2
// Address: 0x11c0d8 - 0x11c0fc
void scTag2_0x11c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scTag2_0x11c0d8");
#endif

    ctx->pc = 0x11c0d8u;

    // 0x11c0d8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11c0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11c0dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11c0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11c0e0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x11c0e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x11c0e4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11c0e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11c0e8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11c0e8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11c0ec: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x11c0ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x11c0f0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x11c0f0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x11c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x11C0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0F4u;
            // 0x11c0f8: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C0FCu;
}
