#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_Reset
// Address: 0x17c5e8 - 0x17c600
void SJRBF_Reset_0x17c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_Reset");


    ctx->pc = 0x17c5e8u;

    // 0x17c5e8: 0x8c820020
    ctx->pc = 0x17c5e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17c5ec: 0xac800018
    ctx->pc = 0x17c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17c5f0: 0xac820010
    ctx->pc = 0x17c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17c5f4: 0xac80000c
    ctx->pc = 0x17c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17c5f8: 0x3e00008
    ctx->pc = 0x17C5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5FCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C600u;
}
