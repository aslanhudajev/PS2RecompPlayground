#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetTableNF
// Address: 0x1a5a00 - 0x1a5a0c
void nlDofSetTableNF_0x1a5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetTableNF");


    ctx->pc = 0x1a5a00u;

    // 0x1a5a00: 0xaf8489f4
    ctx->pc = 0x1a5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 4));
    // 0x1a5a04: 0x3e00008
    ctx->pc = 0x1A5A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A08u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937080), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5A0Cu;
}
