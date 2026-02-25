#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hig_gsmem_err
// Address: 0x1103e0 - 0x110410
void _hig_gsmem_err_0x1103e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hig_gsmem_err_0x1103e0");
#endif

    ctx->pc = 0x1103e0u;

    // 0x1103e0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1103e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1103e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1103e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1103e8: 0x2442f8b8  addiu       $v0, $v0, -0x748
    ctx->pc = 0x1103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965432));
    // 0x1103ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1103ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1103f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1103f4: 0x2463db28  addiu       $v1, $v1, -0x24D8
    ctx->pc = 0x1103f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957864));
    // 0x1103f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1103f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1103fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1103fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x110400: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x110404: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x110404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110408: 0x3e00008  jr          $ra
    ctx->pc = 0x110408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110408u;
            // 0x11040c: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110410u;
}
