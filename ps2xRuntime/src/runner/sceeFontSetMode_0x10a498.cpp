#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void sceeFontSetMode_0x10a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ps2_stubs::sceeFontSetMode(rdram, ctx, runtime);
    ctx->pc = getRegU32(ctx, 31);
}
