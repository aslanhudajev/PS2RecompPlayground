#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceMpegIsRefBuffEmpty(mpeg, idx) - return 1 if ref buffer empty, 0 else
void sceMpegIsRefBuffEmpty_0x12b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegIsRefBuffEmpty_0x12b718");
#endif
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
