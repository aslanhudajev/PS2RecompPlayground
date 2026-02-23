#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: bgmPause__13SoundMgrClassFi
// Address: 0x2181a0 - 0x2181a8
void bgmPause__13SoundMgrClassFi_0x2181a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("bgmPause__13SoundMgrClassFi");


    ctx->pc = 0x2181a0u;

    // 0x2181a0: 0x3e00008
    ctx->pc = 0x2181A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2181A8u;
}
