#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initSeqAgain
// Address: 0x11fe28 - 0x11fe38
void _initSeqAgain_0x11fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fe28u;

    // 0x11fe28: 0x3c020017
    ctx->pc = 0x11fe28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x11fe2c: 0x24040001
    ctx->pc = 0x11fe2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fe30: 0x80489e2
    ctx->pc = 0x11FE30u;
    ctx->pc = 0x11FE34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 0));
    ctx->pc = 0x122788u;
    _ipuSetMPEG1_0x122788(rdram, ctx, runtime); return;
    ctx->pc = 0x11FE38u;
}
