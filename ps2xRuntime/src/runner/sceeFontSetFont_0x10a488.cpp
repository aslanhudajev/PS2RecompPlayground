#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void sceeFontSetFont_0x10a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ps2_stubs::sceeFontSetFont(rdram, ctx, runtime);
    ctx->pc = getRegU32(ctx, 31);
}
