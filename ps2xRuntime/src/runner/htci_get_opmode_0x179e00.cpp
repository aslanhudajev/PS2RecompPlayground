#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_get_opmode
// Address: 0x179e00 - 0x179e0c
void htci_get_opmode_0x179e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_get_opmode");


    ctx->pc = 0x179e00u;

    // 0x179e00: 0x3c030024
    ctx->pc = 0x179e00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x179e04: 0x3e00008
    ctx->pc = 0x179E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943800)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179E0Cu;
}
