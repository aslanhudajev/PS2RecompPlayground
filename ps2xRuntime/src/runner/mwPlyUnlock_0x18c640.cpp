#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyUnlock
// Address: 0x18c640 - 0x18c648
void mwPlyUnlock_0x18c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyUnlock");
    ctx->pc = 0x18c640u;

    // 0x18c640: 0x8063dd8
    ctx->pc = 0x18C640u;
    ctx->pc = 0x18F760u;
    MWSFSVM_Unlock_0x18f760(rdram, ctx, runtime); return;
    ctx->pc = 0x18C648u;
}
