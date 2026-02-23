#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlRand
// Address: 0x1a7ee0 - 0x1a7f08
void nlRand_0x1a7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlRand");


    ctx->pc = 0x1a7ee0u;

    // 0x1a7ee0: 0x8f838334
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x1a7ee4: 0x3c0241c6
    ctx->pc = 0x1a7ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16838 << 16));
    // 0x1a7ee8: 0x34424e6d
    ctx->pc = 0x1a7ee8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20077));
    // 0x1a7eec: 0x621018
    ctx->pc = 0x1a7eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a7ef0: 0x24423039
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12345));
    // 0x1a7ef4: 0xaf828334
    ctx->pc = 0x1a7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
    // 0x1a7ef8: 0x8f828334
    ctx->pc = 0x1a7ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x1a7efc: 0x21402
    ctx->pc = 0x1a7efcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x1a7f00: 0x3e00008
    ctx->pc = 0x1A7F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F04u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32767));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7F08u;
}
