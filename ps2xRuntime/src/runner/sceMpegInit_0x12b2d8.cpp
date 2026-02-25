#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceMpegInit - return 1 (success)
void sceMpegInit_0x12b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegInit_0x12b2d8");
#endif
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
