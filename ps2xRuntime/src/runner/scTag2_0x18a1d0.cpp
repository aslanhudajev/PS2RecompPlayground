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
// Address: 0x18a1d0 - 0x18a200
void scTag2_0x18a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scTag2_0x18a1d0");
#endif

    ctx->pc = 0x18a1d0u;

    // 0x18a1d0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x18a1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18a1d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18a1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18a1d8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x18a1d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18a1dc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x18a1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x18a1e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18a1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18a1e4: 0x32f38  dsll        $a1, $v1, 28
    ctx->pc = 0x18a1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 28);
    // 0x18a1e8: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x18a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x18a1ec: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x18a1ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)));
    // 0x18a1f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18a1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18a1f4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x18a1f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x18a1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1F8u;
            // 0x18a1fc: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A200u;
}
