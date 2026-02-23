#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13EntryDatClassFv
// Address: 0x218d20 - 0x218d2c
void init__13EntryDatClassFv_0x218d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13EntryDatClassFv");


    ctx->pc = 0x218d20u;

    // 0x218d20: 0xa4801000
    ctx->pc = 0x218d20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4096), (uint16_t)GPR_U32(ctx, 0));
    // 0x218d24: 0x3e00008
    ctx->pc = 0x218D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218D28u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 4098), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218D2Cu;
}
