#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrintSetTexAddr
// Address: 0x1ab560 - 0x1ab570
void nlPrintSetTexAddr_0x1ab560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrintSetTexAddr");


    ctx->pc = 0x1ab560u;

    // 0x1ab560: 0x41a02
    ctx->pc = 0x1ab560u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 8));
    // 0x1ab564: 0xaf83833c
    ctx->pc = 0x1ab564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935356), GPR_U32(ctx, 3));
    // 0x1ab568: 0x3e00008
    ctx->pc = 0x1AB568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB56Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935360), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB570u;
}
