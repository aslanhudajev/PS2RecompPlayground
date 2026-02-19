#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexModNode
// Address: 0x213308 - 0x213310
void DoTexModNode_0x213308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213308u;

    // 0x213308: 0x8084352
    ctx->pc = 0x213308u;
    ctx->pc = 0x210D48u;
    DoTexModSeqSub_0x210d48(rdram, ctx, runtime); return;
    ctx->pc = 0x213310u;
}
