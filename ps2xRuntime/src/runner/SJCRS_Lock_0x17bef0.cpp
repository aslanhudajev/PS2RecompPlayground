#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJCRS_Lock
// Address: 0x17bef0 - 0x17bf08
void SJCRS_Lock_0x17bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJCRS_Lock");


    ctx->pc = 0x17bef0u;

    // 0x17bef0: 0x8f8382f0
    ctx->pc = 0x17bef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x17bef4: 0x8f8282f0
    ctx->pc = 0x17bef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x17bef8: 0x24420001
    ctx->pc = 0x17bef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17befc: 0xaf8282f0
    ctx->pc = 0x17befcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 2));
    // 0x17bf00: 0x3e00008
    ctx->pc = 0x17BF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BF08u;
}
