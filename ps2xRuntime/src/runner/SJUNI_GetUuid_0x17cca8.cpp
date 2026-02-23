#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_GetUuid
// Address: 0x17cca8 - 0x17ccb0
void SJUNI_GetUuid_0x17cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_GetUuid");


    ctx->pc = 0x17cca8u;

    // 0x17cca8: 0x3e00008
    ctx->pc = 0x17CCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CCB0u;
}
