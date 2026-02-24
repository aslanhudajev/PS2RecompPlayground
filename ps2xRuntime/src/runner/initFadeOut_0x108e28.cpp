#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: initFadeOut
// Address: 0x108e28 - 0x108e34
void initFadeOut_0x108e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("initFadeOut_0x108e28");
#endif

    ctx->pc = 0x108e28u;

    // 0x108e28: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x108e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x108e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x108E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E2Cu;
            // 0x108e30: 0xaf82814c  sw          $v0, -0x7EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108E34u;
}
