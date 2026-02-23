#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B08A4
// Address: 0x1b08a4 - 0x1b08b0
void sub_001B08A4_0x1b08a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B08A4");


    ctx->pc = 0x1b08a4u;

    // 0x1b08a4: 0x3e00008
    ctx->pc = 0x1B08A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B08A8u;
        ctx->vu0_vpu_stat3 = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B08ACu;
    // 0x1b08ac: 0x0
    ctx->pc = 0x1b08acu;
    // NOP
}
