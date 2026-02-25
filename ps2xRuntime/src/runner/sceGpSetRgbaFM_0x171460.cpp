#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: void - *(p1+0x28)=1, *(p1+0x20)=packed rgba
void sceGpSetRgbaFM_0x171460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpSetRgbaFM_0x171460");
#endif
    (void)rdram;
    (void)runtime;
    ctx->pc = getRegU32(ctx, 31);
}
