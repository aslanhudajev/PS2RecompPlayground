#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: ctx+0xe4|=2, ctx+0x80 RMW with zbp(9), psm(4), zte(1)
void sceHiGsCtxSetRegZbuf_0x1140a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetRegZbuf_0x1140a8");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t zbp = GPR_U32(ctx, 5) & 0x1ffu;
    uint32_t psm = GPR_U32(ctx, 6) & 0xfu;
    uint32_t zte = GPR_U32(ctx, 7) & 1u;

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        uint16_t e4;
        std::memcpy(&e4, p + 0xe4, 2);
        e4 |= 2u;
        std::memcpy(p + 0xe4, &e4, 2);
        uint64_t zbuf;
        std::memcpy(&zbuf, p + 0x80, 8);
        zbuf = (zbuf & 0xfffffffef0fffe00ULL) | zbp | (static_cast<uint64_t>(psm) << 24) |
            (static_cast<uint64_t>(zte) << 32);
        std::memcpy(p + 0x80, &zbuf, 8);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
