#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// No-op: sends current buffer to GS/VIF. For recomp we don't emulate the path.
void memSendBuff_0x10a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;
    ctx->pc = getRegU32(ctx, 31);
}
