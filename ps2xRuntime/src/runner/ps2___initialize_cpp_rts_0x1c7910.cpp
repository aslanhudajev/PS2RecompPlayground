#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <cstring>

void ps2___initialize_cpp_rts_0x1c7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___initialize_cpp_rts");

    uint32_t startPtr = getRegU32(ctx, 4);
    uint32_t endPtr = getRegU32(ctx, 5);
    if (!runtime || startPtr >= endPtr)
    {
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t ptr = startPtr & PS2_RAM_MASK;
    const uint32_t limit = endPtr & PS2_RAM_MASK;
    while (ptr < limit && ptr + 4 <= PS2_RAM_SIZE)
    {
        uint32_t funcAddr = 0;
        std::memcpy(&funcAddr, rdram + ptr, 4);
        ptr += 4;
        if (funcAddr == 0u)
            continue;
        auto func = runtime->lookupFunction(funcAddr);
        if (func)
        {
            R5900Context initCtx = *ctx;
            initCtx.pc = funcAddr;
            initCtx.r[29] = ctx->r[29];
            initCtx.r[31] = _mm_set_epi64x(0, 0);
            func(rdram, &initCtx, runtime);
        }
    }
    ctx->pc = getRegU32(ctx, 31);
}
