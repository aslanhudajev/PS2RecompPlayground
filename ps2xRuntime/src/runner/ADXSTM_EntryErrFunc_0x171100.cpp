#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_EntryErrFunc
// Address: 0x171100 - 0x171108
void ADXSTM_EntryErrFunc_0x171100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_EntryErrFunc");


    ctx->pc = 0x171100u;

    // 0x171100: 0x3e00008
    ctx->pc = 0x171100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171108u;
}
