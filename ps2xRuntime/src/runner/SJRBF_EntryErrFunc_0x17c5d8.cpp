#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_EntryErrFunc
// Address: 0x17c5d8 - 0x17c5e4
void SJRBF_EntryErrFunc_0x17c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_EntryErrFunc");


    ctx->pc = 0x17c5d8u;

    // 0x17c5d8: 0xac86002c
    ctx->pc = 0x17c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x17c5dc: 0x3e00008
    ctx->pc = 0x17C5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5E0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C5E4u;
}
