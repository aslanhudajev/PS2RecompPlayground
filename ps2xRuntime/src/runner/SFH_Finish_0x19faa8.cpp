#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_Finish
// Address: 0x19faa8 - 0x19fab4
void SFH_Finish_0x19faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_Finish");


    ctx->pc = 0x19faa8u;

    // 0x19faa8: 0x3c040030
    ctx->pc = 0x19faa8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)48 << 16));
    // 0x19faac: 0x8067eec
    ctx->pc = 0x19FAACu;
    ctx->pc = 0x19FAB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8408));
    ctx->pc = 0x19FBB0u;
    clearObjInf_0x19fbb0(rdram, ctx, runtime); return;
    ctx->pc = 0x19FAB4u;
}
