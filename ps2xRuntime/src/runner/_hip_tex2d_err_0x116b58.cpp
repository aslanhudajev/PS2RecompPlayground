#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hip_tex2d_err
// Address: 0x116b58 - 0x116b88
void _hip_tex2d_err_0x116b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hip_tex2d_err_0x116b58");
#endif

    ctx->pc = 0x116b58u;

    // 0x116b58: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x116b5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x116b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x116b60: 0x2442fbe8  addiu       $v0, $v0, -0x418
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966248));
    // 0x116b64: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x116b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x116b68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x116b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116b6c: 0x2463e360  addiu       $v1, $v1, -0x1CA0
    ctx->pc = 0x116b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959968));
    // 0x116b70: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x116b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116b74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x116b78: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x116b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x116b7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116b80: 0x3e00008  jr          $ra
    ctx->pc = 0x116B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B80u;
            // 0x116b84: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116B88u;
}
