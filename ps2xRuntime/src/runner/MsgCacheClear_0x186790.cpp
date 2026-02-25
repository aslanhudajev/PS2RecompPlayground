#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MsgCacheClear
// Address: 0x186790 - 0x1867a0
void MsgCacheClear_0x186790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MsgCacheClear_0x186790");
#endif

    ctx->pc = 0x186790u;

    // 0x186790: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x186790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186794: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186798: 0x3e00008  jr          $ra
    ctx->pc = 0x186798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186798u;
            // 0x18679c: 0xac23be80  sw          $v1, -0x4180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1867A0u;
}
