#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hip_share_err
// Address: 0x11a588 - 0x11a5b8
void _hip_share_err_0x11a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hip_share_err_0x11a588");
#endif

    ctx->pc = 0x11a588u;

    // 0x11a588: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x11a58c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11a590: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x11a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x11a594: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11a594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11a598: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a59c: 0x2463e908  addiu       $v1, $v1, -0x16F8
    ctx->pc = 0x11a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961416));
    // 0x11a5a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x11a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a5a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11a5a8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x11a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x11a5ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5B0u;
            // 0x11a5b4: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A5B8u;
}
