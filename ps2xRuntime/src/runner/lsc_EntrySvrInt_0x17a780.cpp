#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lsc_EntrySvrInt
// Address: 0x17a780 - 0x17a788
void lsc_EntrySvrInt_0x17a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lsc_EntrySvrInt");


    ctx->pc = 0x17a780u;

    // 0x17a780: 0x3e00008
    ctx->pc = 0x17A780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A788u;
}
