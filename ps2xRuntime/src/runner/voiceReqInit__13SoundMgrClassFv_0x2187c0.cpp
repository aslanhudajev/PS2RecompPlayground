#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: voiceReqInit__13SoundMgrClassFv
// Address: 0x2187c0 - 0x2187cc
void voiceReqInit__13SoundMgrClassFv_0x2187c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("voiceReqInit__13SoundMgrClassFv");


    ctx->pc = 0x2187c0u;

    // 0x2187c0: 0xac800200
    ctx->pc = 0x2187c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x2187c4: 0x3e00008
    ctx->pc = 0x2187C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2187C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2187CCu;
}
