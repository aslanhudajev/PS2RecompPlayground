#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EntryGetWrFunc
// Address: 0x167fc0 - 0x167fcc
void ADXB_EntryGetWrFunc_0x167fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EntryGetWrFunc");


    ctx->pc = 0x167fc0u;

    // 0x167fc0: 0xac86008c
    ctx->pc = 0x167fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 6));
    // 0x167fc4: 0x3e00008
    ctx->pc = 0x167FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FC8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167FCCu;
}
