#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hip_anime_err
// Address: 0x119860 - 0x119890
void _hip_anime_err_0x119860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hip_anime_err_0x119860");
#endif

    ctx->pc = 0x119860u;

    // 0x119860: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x119860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x119864: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x119864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x119868: 0x2442fca0  addiu       $v0, $v0, -0x360
    ctx->pc = 0x119868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966432));
    // 0x11986c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x119870: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119874: 0x2463e770  addiu       $v1, $v1, -0x1890
    ctx->pc = 0x119874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961008));
    // 0x119878: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x119878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11987c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x119880: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x119880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x119884: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x119884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119888: 0x3e00008  jr          $ra
    ctx->pc = 0x119888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119888u;
            // 0x11988c: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119890u;
}
