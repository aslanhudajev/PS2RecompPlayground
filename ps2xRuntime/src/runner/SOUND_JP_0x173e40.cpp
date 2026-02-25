#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_JP
// Address: 0x173e40 - 0x173e48
void SOUND_JP_0x173e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_JP_0x173e40");
#endif

    ctx->pc = 0x173e40u;

    // 0x173e40: 0x805caf8  j           func_172BE0
    ctx->pc = 0x173E40u;
    ctx->pc = 0x172BE0u;
    if (runtime->hasFunction(0x172BE0u)) {
        auto targetFn = runtime->lookupFunction(0x172BE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SOUND_CopyIOPBuffer_0x172be0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173E48u;
}
