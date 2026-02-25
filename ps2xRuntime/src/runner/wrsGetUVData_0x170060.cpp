#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetUVData
// Address: 0x170060 - 0x170084
void wrsGetUVData_0x170060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetUVData_0x170060");
#endif

    ctx->pc = 0x170060u;

    // 0x170060: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x170060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170064: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x170064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170068: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x17006c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x17006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x170070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170074: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x170074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
    // 0x170078: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17007c: 0x3e00008  jr          $ra
    ctx->pc = 0x17007Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17007Cu;
            // 0x170080: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170084u;
}
