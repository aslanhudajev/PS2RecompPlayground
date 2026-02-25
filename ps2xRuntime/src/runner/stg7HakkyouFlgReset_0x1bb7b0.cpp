#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stg7HakkyouFlgReset
// Address: 0x1bb7b0 - 0x1bb7dc
void stg7HakkyouFlgReset_0x1bb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stg7HakkyouFlgReset_0x1bb7b0");
#endif

    ctx->pc = 0x1bb7b0u;

    // 0x1bb7b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bb7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bb7b4: 0xac201c10  sw          $zero, 0x1C10($at)
    ctx->pc = 0x1bb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7184), GPR_U32(ctx, 0));
    // 0x1bb7b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bb7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bb7bc: 0xac201c08  sw          $zero, 0x1C08($at)
    ctx->pc = 0x1bb7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7176), GPR_U32(ctx, 0));
    // 0x1bb7c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bb7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bb7c4: 0xac201c00  sw          $zero, 0x1C00($at)
    ctx->pc = 0x1bb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7168), GPR_U32(ctx, 0));
    // 0x1bb7c8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bb7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bb7cc: 0xac201bf8  sw          $zero, 0x1BF8($at)
    ctx->pc = 0x1bb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7160), GPR_U32(ctx, 0));
    // 0x1bb7d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bb7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bb7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7D4u;
            // 0x1bb7d8: 0xac201bf0  sw          $zero, 0x1BF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB7DCu;
}
