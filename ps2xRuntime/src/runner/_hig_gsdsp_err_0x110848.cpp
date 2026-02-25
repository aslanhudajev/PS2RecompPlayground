#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hig_gsdsp_err
// Address: 0x110848 - 0x110878
void _hig_gsdsp_err_0x110848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hig_gsdsp_err_0x110848");
#endif

    ctx->pc = 0x110848u;

    // 0x110848: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x110848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x11084c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11084cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110850: 0x2442f8e0  addiu       $v0, $v0, -0x720
    ctx->pc = 0x110850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965472));
    // 0x110854: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x110854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x110858: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x110858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11085c: 0x2463f8d0  addiu       $v1, $v1, -0x730
    ctx->pc = 0x11085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965456));
    // 0x110860: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x110860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110864: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x110864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x110868: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x110868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x11086c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110870: 0x3e00008  jr          $ra
    ctx->pc = 0x110870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110870u;
            // 0x110874: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110878u;
}
