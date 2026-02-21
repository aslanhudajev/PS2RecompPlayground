#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void scePadEnterPressMode_0x2e4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ps2_stubs::scePadEnterPressMode(rdram, ctx, runtime);
    ctx->pc = getRegU32(ctx, 31);
}
