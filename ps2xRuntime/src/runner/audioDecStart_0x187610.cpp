#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecStart
// Address: 0x187610 - 0x187618
void audioDecStart_0x187610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecStart_0x187610");
#endif

    ctx->pc = 0x187610u;

    // 0x187610: 0x8061d88  j           func_187620
    ctx->pc = 0x187610u;
    ctx->pc = 0x187620u;
    if (runtime->hasFunction(0x187620u)) {
        auto targetFn = runtime->lookupFunction(0x187620u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        audioDecResume_0x187620(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x187618u;
}
