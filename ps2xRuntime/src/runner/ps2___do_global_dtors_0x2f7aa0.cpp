#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __do_global_dtors(): C++ global destructor registration - no-op for our recompiler.
void ps2___do_global_dtors_0x2f7aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
}
