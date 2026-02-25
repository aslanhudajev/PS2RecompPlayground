#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: calls sceDbcCreateSocket; returns socket id (0,1...) or -1
uint32_t s_pad2SocketCount = 0;

void scePad2CreateSocket_0x12ca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePad2CreateSocket_0x12ca78");
#endif
    (void)rdram;
    (void)runtime;
    uint32_t param2 = getRegU32(ctx, 5);
    if ((param2 & 0x3Fu) != 0u) {
        setReturnS32(ctx, -1);
    } else {
        uint32_t id = s_pad2SocketCount;
        if (id < 2u) {
            s_pad2SocketCount++;
            setReturnU32(ctx, id);
        } else {
            setReturnS32(ctx, -1);
        }
    }
    ctx->pc = getRegU32(ctx, 31);
}
