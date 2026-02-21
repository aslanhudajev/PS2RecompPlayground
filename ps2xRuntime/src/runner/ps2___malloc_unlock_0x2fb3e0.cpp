#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __malloc_unlock(): no-op on single-threaded PS2 emulator.
void ps2___malloc_unlock_0x2fb3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
}
