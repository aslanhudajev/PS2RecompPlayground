#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: QueueInit
// Address: 0x155ba8 - 0x155bcc
void QueueInit_0x155ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("QueueInit");


    ctx->pc = 0x155ba8u;

    // 0x155ba8: 0x3c02002d
    ctx->pc = 0x155ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x155bac: 0x24437440
    ctx->pc = 0x155bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 29760));
    // 0x155bb0: 0xac447440
    ctx->pc = 0x155bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29760), GPR_U32(ctx, 4));
    // 0x155bb4: 0x24640010
    ctx->pc = 0x155bb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
    // 0x155bb8: 0x60102d
    ctx->pc = 0x155bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bbc: 0xac640008
    ctx->pc = 0x155bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x155bc0: 0xac600004
    ctx->pc = 0x155bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x155bc4: 0x3e00008
    ctx->pc = 0x155BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155BC8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155BCCu;
}
