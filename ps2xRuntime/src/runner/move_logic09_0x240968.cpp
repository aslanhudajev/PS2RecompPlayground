#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic09
// Address: 0x240968 - 0x240970
void move_logic09_0x240968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x240968u;

    // 0x240968: 0x809085e
    ctx->pc = 0x240968u;
    ctx->pc = 0x242178u;
    move_logic00_0x242178(rdram, ctx, runtime); return;
    ctx->pc = 0x240970u;
}
