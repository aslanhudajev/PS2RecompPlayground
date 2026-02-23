#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setPatNum__7CFcvTRSFi
// Address: 0x1e7b00 - 0x1e7b08
void setPatNum__7CFcvTRSFi_0x1e7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setPatNum__7CFcvTRSFi");


    ctx->pc = 0x1e7b00u;

    // 0x1e7b00: 0x3e00008
    ctx->pc = 0x1E7B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B04u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B08u;
}
