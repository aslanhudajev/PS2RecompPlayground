#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: clears pad2_info, returns 1
void scePad2Init_0x12c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePad2Init_0x12c9d0");
#endif
    (void)rdram;
    (void)runtime;
    extern uint32_t s_pad2SocketCount;
    s_pad2SocketCount = 0u;
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
