#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDualShockInit
// Address: 0x1544c0 - 0x1544e4
void wrsDualShockInit_0x1544c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDualShockInit_0x1544c0");
#endif

    ctx->pc = 0x1544c0u;

    // 0x1544c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1544c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1544c4: 0xac202178  sw          $zero, 0x2178($at)
    ctx->pc = 0x1544c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8568), GPR_U32(ctx, 0));
    // 0x1544c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1544c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1544cc: 0xac202170  sw          $zero, 0x2170($at)
    ctx->pc = 0x1544ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8560), GPR_U32(ctx, 0));
    // 0x1544d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1544d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1544d4: 0xac20217c  sw          $zero, 0x217C($at)
    ctx->pc = 0x1544d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8572), GPR_U32(ctx, 0));
    // 0x1544d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1544dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1544DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1544E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544DCu;
            // 0x1544e0: 0xac202174  sw          $zero, 0x2174($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1544E4u;
}
