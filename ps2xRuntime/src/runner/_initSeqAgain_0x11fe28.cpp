#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _initSeqAgain
// Address: 0x11fe28 - 0x11fe38
void _initSeqAgain_0x11fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_initSeqAgain_0x11fe28");
#endif

    ctx->pc = 0x11fe28u;

    // 0x11fe28: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x11fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x11fe2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fe30: 0x80489e2  j           func_122788
    ctx->pc = 0x11FE30u;
    ctx->pc = 0x11FE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE30u;
            // 0x11fe34: 0xac4020b0  sw          $zero, 0x20B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122788u;
    if (runtime->hasFunction(0x122788u)) {
        auto targetFn = runtime->lookupFunction(0x122788u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _ipuSetMPEG1_0x122788(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11FE38u;
}
