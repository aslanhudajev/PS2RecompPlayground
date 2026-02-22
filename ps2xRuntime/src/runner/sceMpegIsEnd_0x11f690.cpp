#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// return **(param_1 + 0x40);
void sceMpegIsEnd_0x11f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t param_1 = getRegU32(ctx, 4);
    const uint32_t base = READ32(param_1 + 0x40u);
    const uint32_t val = READ32(base);
    setReturnU32(ctx, val);
    ctx->pc = getRegU32(ctx, 31);
}
