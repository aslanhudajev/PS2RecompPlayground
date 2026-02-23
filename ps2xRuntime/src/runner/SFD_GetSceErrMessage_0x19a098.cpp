#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetSceErrMessage
// Address: 0x19a098 - 0x19a0a0
void SFD_GetSceErrMessage_0x19a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetSceErrMessage");


    ctx->pc = 0x19a098u;

    // 0x19a098: 0x3e00008
    ctx->pc = 0x19A098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A09Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 15836)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A0A0u;
}
