#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initSeqAgain
// Address: 0x2ee760 - 0x2ee770
void _initSeqAgain_0x2ee760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee760u;

    // 0x2ee760: 0x3c02003a
    ctx->pc = 0x2ee760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee764: 0x24040001
    ctx->pc = 0x2ee764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee768: 0x80bc432
    ctx->pc = 0x2EE768u;
    ctx->pc = 0x2EE76Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14576), GPR_U32(ctx, 0));
    ctx->pc = 0x2F10C8u;
    _ipuSetMPEG1_0x2f10c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EE770u;
}
