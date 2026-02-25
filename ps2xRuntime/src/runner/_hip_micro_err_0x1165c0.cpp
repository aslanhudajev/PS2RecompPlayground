#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hip_micro_err
// Address: 0x1165c0 - 0x1165f0
void _hip_micro_err_0x1165c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hip_micro_err_0x1165c0");
#endif

    ctx->pc = 0x1165c0u;

    // 0x1165c0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1165c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1165c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1165c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1165c8: 0x2442fbc8  addiu       $v0, $v0, -0x438
    ctx->pc = 0x1165c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966216));
    // 0x1165cc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1165ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1165d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1165d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1165d4: 0x2463e238  addiu       $v1, $v1, -0x1DC8
    ctx->pc = 0x1165d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959672));
    // 0x1165d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1165d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1165dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1165dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1165e0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1165e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1165e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1165e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1165e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1165E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1165ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1165E8u;
            // 0x1165ec: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1165F0u;
}
