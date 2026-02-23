#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_GetVerStr
// Address: 0x1805b8 - 0x1805c4
void DCT_GetVerStr_0x1805b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_GetVerStr");


    ctx->pc = 0x1805b8u;

    // 0x1805b8: 0x3c02002c
    ctx->pc = 0x1805b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1805bc: 0x3e00008
    ctx->pc = 0x1805BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1805C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952752));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1805C4u;
}
