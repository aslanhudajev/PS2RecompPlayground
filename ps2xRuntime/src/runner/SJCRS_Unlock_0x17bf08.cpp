#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJCRS_Unlock
// Address: 0x17bf08 - 0x17bf20
void SJCRS_Unlock_0x17bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJCRS_Unlock");


    ctx->pc = 0x17bf08u;

    // 0x17bf08: 0x8f8282f0
    ctx->pc = 0x17bf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x17bf0c: 0x2442ffff
    ctx->pc = 0x17bf0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bf10: 0xaf8282f0
    ctx->pc = 0x17bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 2));
    // 0x17bf14: 0x8f8382f0
    ctx->pc = 0x17bf14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x17bf18: 0x3e00008
    ctx->pc = 0x17BF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BF20u;
}
