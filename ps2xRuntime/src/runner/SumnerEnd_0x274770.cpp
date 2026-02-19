#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerEnd
// Address: 0x274770 - 0x274784
void SumnerEnd_0x274770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274770u;

    // 0x274770: 0x3c020034
    ctx->pc = 0x274770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274774: 0xac40fba8
    ctx->pc = 0x274774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966184), GPR_U32(ctx, 0));
    // 0x274778: 0x3c020034
    ctx->pc = 0x274778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27477c: 0x3e00008
    ctx->pc = 0x27477Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274780u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966204), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274784u;
}
