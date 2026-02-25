#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemCareerUnInit
// Address: 0x16e5a0 - 0x16e5a8
void ItemCareerUnInit_0x16e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemCareerUnInit_0x16e5a0");
#endif

    ctx->pc = 0x16e5a0u;

    // 0x16e5a0: 0x8077eb8  j           func_1DFAE0
    ctx->pc = 0x16E5A0u;
    ctx->pc = 0x1DFAE0u;
    if (runtime->hasFunction(0x1DFAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFAE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        UnInitItemCareer_Hontai_0x1dfae0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E5A8u;
}
