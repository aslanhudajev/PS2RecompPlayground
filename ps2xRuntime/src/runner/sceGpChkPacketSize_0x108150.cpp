#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: param_1=packet, param_2=count; returns size in qwords (or -1)
void sceGpChkPacketSize_0x108150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpChkPacketSize_0x108150");
#endif
    (void)rdram;
    (void)runtime;
    uint32_t pkt = getRegU32(ctx, 4);
    uint32_t cnt = getRegU32(ctx, 5);
    uint32_t p4 = (pkt >> 12) & 0xF;
    if (p4 == 0x2) setReturnU32(ctx, cnt + 4);
    else if (p4 == 0x3) setReturnU32(ctx, cnt + 5);
    else if (p4 == 0x5) setReturnU32(ctx, 5);
    else if (p4 == 0x6) setReturnU32(ctx, 6);
    else if (p4 == 0x7) setReturnU32(ctx, 0xB);
    else if (p4 == 0x8) setReturnU32(ctx, 0x13);
    else if (p4 == 0x9) setReturnU32(ctx, cnt + 2);
    else if (p4 == 0xA || p4 == 0xB) setReturnU32(ctx, 2);
    else setReturnU32(ctx, 16u);
    ctx->pc = getRegU32(ctx, 31);
}
