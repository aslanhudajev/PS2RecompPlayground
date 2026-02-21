#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxConeUpdate
// Address: 0x27fbe0 - 0x27fbe8
void DmgFxConeUpdate_0x27fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fbe0u;

    // 0x27fbe0: 0x809fe8c
    ctx->pc = 0x27FBE0u;
    ctx->pc = 0x27FA30u;
    DmgFxNodeUpdate_0x27fa30(rdram, ctx, runtime); return;
    ctx->pc = 0x27FBE8u;
}
