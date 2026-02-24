#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void sceNextFBaddr_0x1088b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)rdram;
    (void)runtime;
    static int s_nextFb = 0;
    const int next = s_nextFb & 1;
    s_nextFb++;
    setReturnS32(ctx, next);
    ctx->pc = getRegU32(ctx, 31);
}
