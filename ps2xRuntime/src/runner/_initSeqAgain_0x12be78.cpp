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
// Address: 0x12be78 - 0x12be84
void _initSeqAgain_0x12be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_initSeqAgain_0x12be78");
#endif

    ctx->pc = 0x12be78u;

    // 0x12be78: 0xac800848  sw          $zero, 0x848($a0)
    ctx->pc = 0x12be78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 0));
    // 0x12be7c: 0x8049abe  j           func_126AF8
    ctx->pc = 0x12BE7Cu;
    ctx->pc = 0x12BE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE7Cu;
            // 0x12be80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (runtime->hasFunction(0x126AF8u)) {
        auto targetFn = runtime->lookupFunction(0x126AF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _ipuSetMPEG1_0x126af8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12BE84u;
}
