#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_EntryErrFunc
// Address: 0x17c0b0 - 0x17c0bc
void SJMEM_EntryErrFunc_0x17c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_EntryErrFunc");


    ctx->pc = 0x17c0b0u;

    // 0x17c0b0: 0xac860020
    ctx->pc = 0x17c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x17c0b4: 0x3e00008
    ctx->pc = 0x17C0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0B8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C0BCu;
}
