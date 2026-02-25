#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hip_hrchy_err
// Address: 0x118e68 - 0x118e98
void _hip_hrchy_err_0x118e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hip_hrchy_err_0x118e68");
#endif

    ctx->pc = 0x118e68u;

    // 0x118e68: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x118e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x118e6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x118e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x118e70: 0x2442fc80  addiu       $v0, $v0, -0x380
    ctx->pc = 0x118e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
    // 0x118e74: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x118e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x118e78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x118e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118e7c: 0x2463e6c8  addiu       $v1, $v1, -0x1938
    ctx->pc = 0x118e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960840));
    // 0x118e80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x118e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118e84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x118e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x118e88: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x118e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x118e8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118e90: 0x3e00008  jr          $ra
    ctx->pc = 0x118E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E90u;
            // 0x118e94: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118E98u;
}
