#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: iVar1=param_2+*(byte*)(param_2+8)*0x10; *(iVar1+4)=*(param_1+4); *(param_1+4)=param_2; return iVar1
void sceGpAddPacket2_0x107298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpAddPacket2_0x107298");
#endif
    (void)runtime;
    uint32_t prev = getRegU32(ctx, 4);
    uint32_t pkt = getRegU32(ctx, 5);
    if (prev != 0u && pkt != 0u) {
        uint8_t countB = static_cast<uint8_t>(FAST_READ32(pkt + 8) & 0xFFu);
        uint32_t count = countB;
        uint32_t tail = pkt + count * 16u;
        uint32_t prevTadr = FAST_READ32(prev + 4);
        FAST_WRITE32(tail + 4, prevTadr);
        uint32_t madr = (pkt & 0x70000000u) == 0x70000000u ? (pkt & 0x8FFFFFFFu) | 0x80000000u : (pkt & 0x1FFFFFFFu);
        FAST_WRITE32(prev + 4, madr);
        setReturnU32(ctx, tail);
    } else {
        setReturnU32(ctx, 0xFFFFFFFFu);
    }
    ctx->pc = getRegU32(ctx, 31);
}
