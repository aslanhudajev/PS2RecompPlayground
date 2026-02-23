#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_CloseAllHandles
// Address: 0x171978 - 0x171980
void ADXT_CloseAllHandles_0x171978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_CloseAllHandles");


    ctx->pc = 0x171978u;

    // 0x171978: 0x805c646
    ctx->pc = 0x171978u;
    ctx->pc = 0x171918u;
    ADXT_DestroyAll_0x171918(rdram, ctx, runtime); return;
    ctx->pc = 0x171980u;
}
