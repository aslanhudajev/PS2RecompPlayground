#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_set_continue
// Address: 0x231b00 - 0x231b08
void player_set_continue_0x231b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231b00u;

    // 0x231b00: 0x808c6b6
    ctx->pc = 0x231B00u;
    ctx->pc = 0x231AD8u;
    player_set_intower_0x231ad8(rdram, ctx, runtime); return;
    ctx->pc = 0x231B08u;
}
